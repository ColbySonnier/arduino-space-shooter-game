// ===================================================
// Space Blaster — Keyes 8x16 (TM1640) + HC-SR04
// Matrix: SDA=D6, SCL=D7 ; Sensor: TRIG=D5, ECHO=D4
// ===================================================

const int trigPin = 5;
const int echoPin = 4;

#define SDA_Pin 6   // Matrix SDA → D6
#define SCL_Pin 7   // Matrix SCL → D7

const int MIN_DISTANCE = 5;   
const int MAX_DISTANCE = 40; 

int pelletY = 2;
int enemyY  = 15;
int enemyX  = 3;

unsigned long lastEnemyMove = 0;
const int ENEMY_MOVE_INTERVAL = 200;
const int FRAME_DELAY         = 100;

// FWD
void matrix_display(unsigned char matrix_value[]);
void IIC_start(); void IIC_send(unsigned char d); void IIC_end();

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(SCL_Pin, OUTPUT);
  pinMode(SDA_Pin, OUTPUT);
  digitalWrite(SCL_Pin, HIGH);
  digitalWrite(SDA_Pin, HIGH);

  Serial.begin(9600);
  randomSeed(analogRead(A0));

  // Self-test then CLEAR
  unsigned char f[16];
  for (int i=0;i<16;i++) f[i]=0xFF; matrix_display(f); delay(300);
  for (int i=0;i<16;i++) f[i]=0x00; matrix_display(f);
}

void loop() {
  //Read averaged distance, with fallback to last good reading
  static int lastGoodDist = 20;  // start mid-range
  long total = 0;
  const int samples = 5;

  for (int i = 0; i < samples; i++) {
    digitalWrite(trigPin, LOW);  delayMicroseconds(2);
    digitalWrite(trigPin, HIGH); delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    long duration = pulseIn(echoPin, HIGH, 60000); // generous timeout
    if (duration > 0) total += duration;
    delay(5);
  }

  int distance;
  if (total == 0) {
    // No echo this frame so reuse last good value
    distance = lastGoodDist;
  } else {
    distance = (total / samples) * 0.0343 / 2;
    distance = constrain(distance, MIN_DISTANCE, MAX_DISTANCE);
    lastGoodDist = distance;
  }
  Serial.println(distance);

  //Map distance to ship column (1..6 used for 3-wide base)
  int col = map(distance, MIN_DISTANCE, MAX_DISTANCE, 6, 1);
  col = constrain(col, 1, 6);

  //Clear frame
  unsigned char frame[16];
  for (int i = 0; i < 16; i++) frame[i] = 0x00;

  //Draw ship
  frame[0] |= (0b00000111 << (col - 1)); // base
  frame[1] |= (0b00000001 << col);       // tip

  //Pellet logic
  static int prevPelletY = 2;
  bool hit = false;

  for (int y = prevPelletY; y <= pelletY; y++) {
    if ((y == enemyY || y == enemyY - 1) &&
        (col >= enemyX && col <= enemyX + 1)) {
      hit = true; break;
    }
  }

  if (hit) {
    enemyY = 15;
    enemyX = random(0, 6);
    pelletY = 2; prevPelletY = 2;
  } else {
    prevPelletY = pelletY;
    pelletY++;
    if (pelletY >= 16) { pelletY = 2; prevPelletY = 2; }
  }

  if (pelletY < 16) frame[pelletY] |= (0b00000001 << col);

  //Enemy movement
  unsigned long now = millis();
  if (!hit && now - lastEnemyMove >= ENEMY_MOVE_INTERVAL) {
    lastEnemyMove = now;
    if (enemyY >= 1) enemyY--;
    else { enemyY = 15; enemyX = random(0, 6); }
  }

  if (!hit && enemyY >= 1) {
    frame[enemyY]     |= (0b00000011 << enemyX);
    frame[enemyY - 1] |= (0b00000011 << enemyX);
  }

  matrix_display(frame);
  delay(FRAME_DELAY);
}

// ===== TM1640 driver =====
void matrix_display(unsigned char v[]) {
  // Data command: write, auto-increment
  IIC_start(); IIC_send(0x40); IIC_end();

  // Address + 16 bytes
  IIC_start(); IIC_send(0xC0);
  for (int i=0;i<16;i++) IIC_send(v[i]);
  IIC_end();

  // Display on + max brightness
  IIC_start(); IIC_send(0x8F); IIC_end();
}

void IIC_start(){
  digitalWrite(SCL_Pin, HIGH); delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH); delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW);  delayMicroseconds(3);
}
void IIC_send(unsigned char d){
  for (char i=0;i<8;i++){
    digitalWrite(SCL_Pin, LOW);  delayMicroseconds(3);
    digitalWrite(SDA_Pin, (d & 0x01)?HIGH:LOW);
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, HIGH); delayMicroseconds(3);
    d >>= 1;
  }
}
void IIC_end(){
  digitalWrite(SCL_Pin, LOW);  delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW);  delayMicroseconds(3);
  digitalWrite(SCL_Pin, HIGH); delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH); delayMicroseconds(3);
}
