// === Ultrasonic Sensor Pins ===
const int trigPin = 5;
const int echoPin = 4;

// === LED Matrix I2C Pins ===
#define SCL_Pin A5
#define SDA_Pin A4

// === Distance thresholds ===
const int MIN_DISTANCE = 5;
const int MAX_DISTANCE = 40;

// === Pellet state ===
int pelletY = 2;

// === Enemy block state ===
int enemyY = 15;
int enemyX = 3;

// === Timing control ===
unsigned long lastEnemyMove = 0;
const int ENEMY_MOVE_INTERVAL = 200;
const int FRAME_DELAY = 100;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(SCL_Pin, OUTPUT);
  pinMode(SDA_Pin, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A0)); // Randomize enemy spawn
}

void loop() {
  // === Get average distance from sensor ===
  long total = 0;
  int samples = 5;
  for (int i = 0; i < samples; i++) {
    digitalWrite(trigPin, LOW); delayMicroseconds(2);
    digitalWrite(trigPin, HIGH); delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    long duration = pulseIn(echoPin, HIGH, 30000);
    if (duration > 0) total += duration;
    delay(5);
  }

  if (total == 0) return;
  int distance = (total / samples) * 0.034 / 2;
  distance = constrain(distance, MIN_DISTANCE, MAX_DISTANCE);

  // === Map hand distance to horizontal ship position ===
  int col = map(distance, MIN_DISTANCE, MAX_DISTANCE, 6, 1);
  col = constrain(col, 1, 6);

  // === Clear LED frame ===
  unsigned char frame[16];
  for (int i = 0; i < 16; i++) frame[i] = 0x00;

  // === Draw spaceship (triangle at bottom of screen) ===
  frame[0] = (0b00000111 << (col - 1));  // Base
  frame[1] = (0b00000001 << col);        // Tip

  // === Pellet movement & collision check ===
  static int prevPelletY = 2;
  bool hit = false;

  // Check all rows passed through by pellet
  for (int y = prevPelletY; y <= pelletY; y++) {
    if ((y == enemyY || y == enemyY - 1) &&
        (col >= enemyX && col <= enemyX + 1)) {
      hit = true;
      break;
    }
  }

  // If hit, reset enemy immediately
  if (hit) {
    enemyY = 15;
    enemyX = random(0, 6);
  }

  // Update pellet position
  prevPelletY = pelletY;
  if (!hit) {
    pelletY++;
    if (pelletY >= 16) {
      pelletY = 2;
      prevPelletY = 2;
    }
  } else {
    pelletY = 2;
    prevPelletY = 2;
  }

  // === Draw pellet ===
  if (pelletY < 16) {
    frame[pelletY] |= (0b00000001 << col);
  }

  // === Move enemy if not hit ===
  unsigned long currentTime = millis();
  if (!hit && currentTime - lastEnemyMove >= ENEMY_MOVE_INTERVAL) {
    lastEnemyMove = currentTime;
    if (enemyY >= 1) {
      enemyY--;
    } else {
      enemyY = 15;
      enemyX = random(0, 6);
    }
  }

  // === Draw enemy ===
  if (!hit && enemyY >= 1) {
    frame[enemyY]     |= (0b00000011 << enemyX);
    frame[enemyY - 1] |= (0b00000011 << enemyX);
  }

  // === Display on LED matrix ===
  matrix_display(frame);
  delay(FRAME_DELAY);
}

// === LED Matrix Communication ===
void matrix_display(unsigned char matrix_value[]) {
  IIC_start();
  IIC_send(0xC0);
  for (int i = 0; i < 16; i++) IIC_send(matrix_value[i]);
  IIC_end();
  IIC_start();
  IIC_send(0x8A); // Display control (brightness)
  IIC_end();
}

void IIC_start() {
  digitalWrite(SCL_Pin, HIGH); delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH); delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW); delayMicroseconds(3);
}

void IIC_send(unsigned char send_data) {
  for (char i = 0; i < 8; i++) {
    digitalWrite(SCL_Pin, LOW); delayMicroseconds(3);
    digitalWrite(SDA_Pin, (send_data & 0x01) ? HIGH : LOW);
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, HIGH); delayMicroseconds(3);
    send_data >>= 1;
  }
}

void IIC_end() {
  digitalWrite(SCL_Pin, LOW); delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW); delayMicroseconds(3);
  digitalWrite(SCL_Pin, HIGH); delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH); delayMicroseconds(3);
}
