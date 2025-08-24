
Ks0428 keyestudio Mini Tank Robot V2
Jump to navigationJump to search
Thanks for your support on our products, we will continue to provide you better quality and service!

*About keyestudio

Keyestudio is a best-selling brand owned by KEYES Corporation, our product lines range from controller boards, shields and sensor modules to smart car and complete starter kits for Arduino, Raspberry Pi and BBC micro:bit, which designed for customers of any level to learn electronics and programming knowledge. All of our products comply with international quality standards and are greatly appreciated in a variety of different markets throughout the world.
You can obtain the details and the latest information through visiting the following web sites:http://www.keyestudio.com

*References and After-sales Service

1.Download Profile：https://fs.keyestudio.com/KS0428
2.Feel free to contact us please, if there is missing part or you encounter some troubles. Welcome to send email to us：service@keyestudio.com.
We will update projects and products continuously based on your sincere advice.

*Warning

1.This product contains tiny parts(screws, copper pillars), keep it out of reach of children under 7 years old please.
2. This product contains conductive parts (control board and electronic module). Please operate according to the requirements of this tutorial. Improper operation may cause overheating and damage parts. Do not touch and immediately disconnect the circuit power.


*Copyright

The keyestudio trademark and logo are the copyright of KEYES DIY ROBOT co.,LTD. All products under keyestudio brand can’t be copied, sold and resold without authorization by anyone or company. If you’re interested in our items, please contact to our sales representatives: fennie@keyestudio.com



thumb





Contents
1	Introduction
2	Features
3	Specification
4	Product List
5	Assembly Guide
6	Install Arduino IDE and Driver
6.1	Download software
6.2	Keyestudio V4.0 Development Board
6.3	Installing driver
6.4	Install other visions of driver
6.5	Arduino IDE Setting
6.6	Start your first program
7	How to Add a Library?
8	Projects
8.1	Project 1: LED Blink
8.2	Project 2: Adjust LED Brightness
8.3	Project 3: Photoresistor Sensor
8.4	Project 4: Servo Control
8.5	Project 5: Ultrasonic Sensor
8.6	Project 6: IR Reception
8.7	Project 7: Bluetooth Remote Control
8.8	Project 8: Motor Driving and Speed Control
8.9	Project 9: LED Expression Panel
8.10	Project 10: Light Follow Robot
8.11	Project 11: Ultrasonic Avoid Tank
8.12	Project 12: Ultrasonic Follow Tank
8.13	Project 13: IR Remote Robot Tank
8.14	Project 14: Bluetooth Control Robot
8.15	Project 15: Multi-purpose Robot Car
9	9. Resources
Introduction
Nowadays, technological education such as VR, kids programming, and artificial intelligence, has become mainstream in educational industry. Thereby, people attach importance to STEAM education. Arduino is pretty notable in Maker education.

So what is Arduino? Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online. Based on this, Keyestudio team has designed a mini tank robot. The tank robot has a processor which is programmable using the Arduino IDE, to mapped its pins to sensors and actuators by a shield that plug in the processor, it reads sensors and controls the actuators and decides how to operate.

15 learning projects, from simple to complex, will guide you how to make a smart tank robot on you own and introduce the detailed knowledge about sensors and modules.
Simultaneously, it is the best choice if you intend to obtain a DIY robot for learning programming, entertainment and competition requirement.



Features
1.Multi-purpose: Obstacle avoidance, follow, IR remote control, Bluetooth control, light following, ultrasonic follow and displayed face emoticons.
2.Simple assembly: No soldering circuit required, complete assembly easily.
3. High Tenacity：Aluminum alloy bracket, metal motors, high quality wheels and tracks.
4. High extension: expand other sensors and modules through motor driver shield and sensor shield
5. Multiple controls: IR remote control, App control(IOS and Android system)
6.Basic programming：C language code of Arduino IDE.

Specification
Working voltage: 5v
Input voltage: 7-12V
Maximum output current: 2A
Maximum power dissipation: 25W (T=75℃)
Motor speed: 5V 200 rpm/min
Motor drive mode: dual H bridge drive (L298P)
Ultrasonic induction angle: <15 degrees
Ultrasonic detection distance: 2cm-400cm
Infrared remote control distance: 10 meters (measured)
Bluetooth remote control distance: 50 meters (measured)
Product List
Make sure no any parts missing please when you get this robot kit. And if it is, please feel free to contact us.

Please tear off the protective film on the acrylic board before mounting the kit
thumb


thumb

thumb

thumb

thumb

thumb

thumb

thumb
QQ图片20210422152554.png|

Assembly Guide
Note: Remove the Bluetooth module before uploading test code, otherwise, you will fail to upload test code

Note: Peel the plastic film off the board first when installing the smart car. To be honest, we never intend to send wood to you.

After making an inventory all the parts in this kit, then we need to mount the tank robot. Let’s install smart car in compliance with the following instructions.

Step 1: Install Bottom Motor

Prepare the parts as follows:

M4 Nut * 2
Metal Motor *2
Metal Holder *2
Copper Coupler *2
Blue Supportive Parts *2
M4*12MM Inner Hex Screw * 2
M1.5 Hex Key Nickel Plated Allen Wrench *1
M3 Hex Key Nickel Plated Allen Wrench *1
M2.5 Hex Key Nickel Plated Allen Wrench *1
M3*8MM Inner Hex Screw * 4

thumb

thumb

Step 2: Install Driver Wheel

Prepare the parts as follows:

M4*12MM Inner Hex Screw * 2
M4*50MM Inner Hex Screw * 2
Tank Load-bearing Wheel * 2
Flange Bearing * 4
Copper Bush *2
Caterpillar Band *2
M4 Self-locking Nut * 2
M3 Hex Key Nickel Plated Allen Wrench *1

thumb

thumb

thumb


Step 3: Install the Battery Holder

Prepare the parts as follows:



thumb




Battery Holder *1
M3 Nut * 2
Blue Metal holder *2
M4 Nut *8
M3*10MM Flat Head Screw * 2
M4*40MM Inner Hex Screw *4
M2.5 Hex Key Nickel Plated Allen Wrench*1
M3 Hex Key Nickel Plated Allen Wrench *1
M3*25MM Inner Hex Screw *4
Finish the mount process. Go to fix the metal holder on the motor wheel with four M4*40MM inner hex screws and four M4 nuts.
thumb

thumb

thumb

Step 4: Mount Acrylic Board and Sensors

Acrylic Board * 2
L- type Black Bracket *1
Photocell Sensor *2
IR Receiver Module *1
8X16 LED Panel *1
M2 Nut *4
M3 Nut *10
M3*6MM Inner Hex Screw * 8
M2.5 Hex Key Allen Wrench *1
M3*12MM Round Head Screw *7
M3*10MM Hexagon Copper Bush *8
M2*10MM Round Head Screw * 4

thumb

thumb

thumb

thumb

Step 5: Install the Servo Platform

Prepare the parts as follows:

Servo *1
Black Gimbal *1
Cable Tie *2
M2x8 Round Head Cross Tapping Screw *2
Ultrasonic Sensor *1
M2*4 Screw *1
M1.2*5 Screw *4

Note: for convenient debugging, keep the ultrasonic module straight ahead and the angle of servo motor 90°. Therefore, we need to set servo to 90° before installing the servo platform.


thumb


thumb

You can find M1.2*5 Screws inside the bag of Plastic Platform.


thumb


Step 6: Install Sensors and Boards

Prepare the parts as follows:

M3*6MM Round Head Screw *12
L298P Shield *1
V4.0 Board *1
V5 Sensor Shield *1
Screwdriver *1
Bluetooth Module *1

thumb

thumb

thumb thumb

thumb

Step 7: Hook-up Guide


thumb

thumb

thumb

thumb

thumb


Step 8: Wire up LED Panel


thumb

thumb

thumb

thumb


Step 9: install all parts of Acrylic plate
thumb

thumb

thumb

thumb

thumb

thumb

thumb

thumb


thumb

thumb

thumb

thumb

thumb

Step 10: Final Renderings


thumb

Note: Remove the Bluetooth module before uploading test code, otherwise, you will fail to upload test code.

Install Arduino IDE and Driver
Download software
When we get control board, we need to download Arduino IDE and driver firstly. You could download Arduino IDE from the official website: https://www.arduino.cc/, click the SOFTWARE on the browse bar, click “DOWNLOADS” to enter download page, as shown below:


thumb

There are various versions for Arduino, just download a suitable version for your system, we will take WINDOWS system as an example to show you how to download and install.


thumb

There are two versions for WINDOWS system, one is installed version, another one is download version, you just need to download file to computer directly and unzip it. These two versions can be used normally. Choose one and download on your computer.


thumb

You just need to click JUST DOWNLOAD, then click the downloaded file to install it. And when the ZIP file is downloaded, you can directly unzip and start it.

Keyestudio V4.0 Development Board
We need to know keyestudio V4.0 development board, as a core of this smart car.


thumb

keyestudio V4.0 development board is an Arduino uno-compatible board, which is based on ATmega328P MCU, and with a cp2102 Chip as a UART-to-USB converter.  


thumb

It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz quartz crystal, a USB connection, a power jack, 2 ICSP headers and a reset button.


thumb

It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it via an external DC power jack (DC 7-12V) or via female headers Vin/ GND(DC 7-12V) to get started.


thumb

Installing driver
Let’s install the driver of keyestudio PLUS control board. The USB-TTL chip on PLUS board adopts CP2102 serial chip. The driver program of this chip is included in Arduino 1.8 version and above, which is convenient. Plug on USB port of board, the computer can recognize the hardware and automatically install the driver of CP2102.

If install unsuccessfully, or you intend to install manually, open the device manager of computer. Right click Computer----- Properties----- Device Manager.


thumb

There is a yellow exclamation mark on the page, which implies installing the driver of CP2102 unsuccessfully. Then we double click the hardware and update the driver.


thumb

Click “OK” to enter the following page, click “browse my computer for updated driver software”, find out the installed or downloaded ARDUINO software. As shown below:


thumb

There is a DRIVERS folder in Arduino software installed package（thumb）, open driver folder and you can see the driver of CP210X series chips.


We click “Browse”, then find out the driver folder, or you could enter “driver” to search in rectangular box, then click “next”, the driver will be installed successfully. (I place Arduino software folder on the desktop, you could follow my way)


thumb


Open device manager, we will find the yellow exclamation mark disappear. The driver of CP2102 is installed successfully.
thumb

thumb







Install other visions of driver
If your development board is Arduino UNO board, install the driver as follows:
Step 1: Plug in the development board, click Computer----- Properties----- Device Manager, you could see the unknown device is shown.


0428---100.png

Step 2: Update the driver


0428---101.png

Step 3: click“browse my computer for updated driver software”


0428---102.png
Step 4: find out the folder where the ARDUINO software is installed, click drivers folder and tap“Next”
0428---103.png

Step 5: the driver is installed successfully.


0428---104.png

The device manager shows the serial port of Arduino.
0428---105.png



Arduino IDE Setting
Click0486-12.png icon，open Arduino IDE.
0085=14.png

To avoid the errors when uploading the program to the board, you need to select the correct Arduino board that matches the board connected to your computer. Then come back to the Arduino software, you should click Tools→Board, select the board. (as shown below)
0085=15.png


Then select the correct COM port (you can see the corresponding COM port after the driver is successfully installed)


0085=16.png

0085=17.png

Before uploading the program to the board, let’s demonstrate the function of each symbol in the Arduino IDE toolbar.

A- Used to verify whether there is any compiling mistakes or not.
B- Used to upload the sketch to your Arduino board.
C- Used to create shortcut window of a new sketch.
D- Used to directly open an example sketch.
E- Used to save the sketch.
F- Used to send the serial data received from board to the serial monitor.

Start your first program
Open the file to select Example, choose BLINK from BASIC, as shown below:



048610png.png


048611png.png

Set board and COM port, the corresponding board and COM port are shown on the lower right of IDE.


048612png.png

Click 0486-20.png to start compiling the program, check errors.


048613png.png

Click 0486-23.pngto upload the program, upload successfully.


048614png.png

Upload the program successfully, the onboard LED lights on for 1s, lights off for 1s. Congratulation, you finish the first program.





How to Add a Library?
What are Libraries ?
Libraries are a collection of code that makes it easy for you to connect to a sensor,display, module, etc.
For example, the built-in LiquidCrystal library helps talk to LCD displays. There are hundreds of additional libraries available on the Internet for download.
The built-in libraries and some of these additional libraries are listed in the reference.

Here we will introduce the most simple way for you to add libraries .
Step 1：After downloading well the Arduino IDE, you can right-click the icon of Arduino IDE.
Find the option "Open file location" shown as below:


thumb

Step 2: Enter it to find out libraries folder which is the library file of Arduino.


thumb


Step 3：Next to find out the“libraries”of tank robot(seen in the link: https://fs.keyestudio.com/KS0428), you just need to replicate and paste into the libraries folder of Arduino IDE.


thumb

thumb

Then the libraries of tank robot are installed successfully, as shown below:
thumb

Projects
Project 1: LED Blink
(1)Description
thumb

For the starter and enthusiast, this is a fundamental program---LED Blink.
LED, the abbreviation of light emitting diodes, consist of Ga, As, P, N chemical compound and so on. The LED can flash diverse color by altering the delay time in the test code. When in control, power on GND and VCC, the LED will be on if S end is high level; nevertheless, it will go off.

(2)Specification


thumb

Control interface: digital port
Working voltage: DC 3.3-5V
Pin spacing: 2.54mm
LED display color: red
(3)Equipment


thumb


(4) V5 Sensor Shield
There will be troublesome when we combine Arduino development boards with numerous sensors. However, the V5 sensor shield, compatible with Arduino development board, address this problem perfectly. Just stack V5 board on it. This sensor shield can be inserted into 3pin sensor modules and breaks out some some communication pins, like serial, IIC, and SPI communication as well.

Pins Description
thumb


Connection Diagram：


thumb

Seen from the above diagram, LED is linked with D2

(5) Test Code

/*
 keyestudio Mini Tank Robot V2
 lesson 1.1
 Blink
 http://www.keyestudio.com
*/
void setup()
 { 
    pinMode(2, OUTPUT);// initialize digital pin 2 as an output.
}
void loop() // the loop function runs over and over again forever

{
   digitalWrite(2, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(1000); // wait for a second
   digitalWrite(2, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second
}
//****************************************************************

(6) Test Result

(There will be contradict about serial communication between code and Bluetooth when uploading code, therefore, don’t link with Bluetooth module before uploading code.) Upload the program on the development board, LED flicker with the interval of 1s.


thumb

(7)Code Explanation

pinMode(2，OUTPUT) - Set pin2 to OUTPUT

digitalWrite(2，HIGH) - When set pin2 to HIGH level(output 5V) or to LOW level(output 0V)

(8)Extension Practice We succeed to blink LED. Next, let’s observe what LED will change if we modify pins and delay time.


Connection Diagram


thumb

We’ve altered pins and connected LED to D10.

Test Code:


/*
 keyestudio Mini Tank Robot V2
 lesson 1.2
 delay
 http://www.keyestudio.com
*/
void setup() {  // initialize digital pin 10 as an output.
   pinMode(10, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
   digitalWrite(10, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for 0.1 second
   digitalWrite(10, LOW); // turn the LED off by making the voltage LOW
   delay(100); // wait for 0.1 second
}
//****************************************************************

The LED flickers faster than before through the test result, therefore, pins and delay time affect flash frequency.

Project 2: Adjust LED Brightness
(1)Description In previous lesson, we control LED on and off and make it blink. In this project, we will control LED brightness through PWM to simulate breathing effect. Similarly, you can change the step length and delay time in the code so as to demonstrate different breathing effect. PWM is a means of controlling the analog output via digital means. Digital control is used to generate square waves with different duty cycles (a signal that constantly switches between high and low levels) to control the analog output.In general, the input voltage of port are 0V and 5V. What if the 3V is required? Or what if switch among 1V, 3V and 3.5V? We can’t change resistor constantly. For this situation, we need to control by PWM.


thumb

For the Arduino digital port voltage output, there are only LOW and HIGH, which correspond to the voltage output of 0V and 5V. You can define LOW as 0 and HIGH as 1, and let the Arduino output five hundred 0 or 1 signals within 1 second. If output five hundred 1, that is 5V; if all of which is 1, that is 0V. If output 010101010101 in this way then the output port is 2.5V, which is like showing movie. The movie we watch are not completely continuous. It actually outputs 25 pictures per second. In this case, the human can’t tell it, neither does PWM. If want different voltage, need to control the ratio of 0 and 1. The more 0,1 signals output per unit time, the more accurately control.


(2) Specification

Control interface: digital port
Working voltage: DC 3.3-5V
Pin spacing: 2.54mm
Display color: red

(3) Equipment
thumb

(4) Connection Diagram
thumb

(5) Test Code

/*
 keyestudio Mini Tank Robot V2
 lesson 2.1
 pwm
 http://www.keyestudio.com
*/
int ledPin = 10; // Define the LED pin at D10
int value;
void setup () 
{
pinMode (ledPin, OUTPUT); // initialize ledpin as an output.
}
void loop () 
{
for (value = 0; value <255; value = value + 1)
{
analogWrite (ledPin, value); // LED lights gradually light up
delay (5); // delay 5MS
}
for (value = 255; value> 0; value = value-1)
{
analogWrite (ledPin, value); // LED gradually goes out
delay (5); // delay 5MS
}}//**********************************************************

(6)Test Result

Upload test code successfully, LED gradually becomes brighter then darker, like human breath, rather than light on and off immediately.

(7)Code Explanation

When we need to repeat some statements, we could use FOR statement.
FOR statement format is shown below:


thumb



FOR cyclic sequence: Round 1：1 → 2 → 3 → 4 Round 2：2 → 3 → 4 … Until number 2 is not established, “for”loop is over, After knowing this order, go back to code: for (int value = 0; value < 255; value=value+1){

       ...
} for (int value = 255; value >0; value=value-1){

      ...
}

The two“for”statements make value increase from 0 to 255, then reduce from 255 to 0, then increase to 255,....infinitely loop There is a new function in the following ----- analogWrite() We know that digital port only has two state of 0 and 1. So how to send an analog value to a digital value? Here,this function is needed. Let’s observe the Arduino board and find 6 pins marked“~”which can output PWM signals.

Function format as follows: analogWrite(pin,value) analogWrite() is used to write an analog value from 0~255 for PWM port, so the value is in the range of 0~255. Attention that you only write the digital pins with PWM function, such as pin 3, 5, 6, 9, 10, 11.
PWM is a technology to obtain analog quantity through digital method. Digital control forms a square wave, and the square wave signal only has two states of turning on and off (that is, high or low levels). By controlling the ratio of the duration of turning on and off, a voltage varying from 0 to 5V can be simulated. The time turning on(academically referred to as high level) is called pulse width, so PWM is also called pulse width modulation.
Through the following five square waves, let’s acknowledge more about PWM.


thumb

In the above figure, the green line represents a period, and value of analogWrite() corresponds to a percentage which is called Duty Cycle as well. Duty cycle implies that high-level duration is divided by low-level duration in a cycle. From top to bottom, the duty cycle of first square wave is 0% and its corresponding value is 0. The LED brightness is lowest, that is, turn off. The more time high level lasts, the brighter the LED.
Therefore, the last duty cycle is 100%, which correspond to 255, LED is brightest. 25% means darker.
PWM mostly is used for adjusting the LED brightness or rotation speed of motor.
It plays vital role in controlling smart robot car. I believe that you can’t wait to enter next project.


(8) Extension Practice：

Let’s modify the value of delay and remain the pin unchanged, then observe how LED changes.

/*
 keyestudio Mini Tank Robot V2
 lesson 2.2
 pwm-slow
 http://www.keyestudio.com
*/
int ledPin = 10; // Define the LED pin at D10
int value;
void setup () 
{
pinMode (ledPin, OUTPUT); // initialize ledpin as an output.
}
void loop () 
{
for (value = 0; value <255; value = value + 1)
{
analogWrite (ledPin, value); // LED lights gradually light up
delay (30); // delay 30MS
}
for (value = 255; value> 0; value = value-1)
{
analogWrite (ledPin, value); // LED gradually goes out
delay (30); // delay 30MS
}}//**********************************************************

Upload code on the development board and LED gradually get brighter then darker.

Project 3: Photoresistor Sensor

thumb

(1)Description

The photoresistor is a special resistor made of semiconductor materials such as CdS or Selenide septum. The surface is also coated with moisture-proof resin, which has a photoconductive effect. It is sensitive to ambient light. Its resistance varies from different light intensities.

We use the characteristics of the photo-resistor to design the circuit and generate the photo-resistor module.
Connecting the signal pin of photocell module to Analog port, when the stronger the light intensity, the greater the voltage of analog port, the greater the analog value is.
On the contrary, the weaker the light intensity, the smaller the voltage of analog port, the smaller the analog value is. Based on that, we can use the photocell module to read the analog value, so get the ambient light intensity.

(2)Specification


thumb

Resistance：5K ohm-0.5Mohm
Interface Type: analog
Working Voltage: 3.3V-5V
Easy installation: with screw fixing holes
Pin spacing: 2.54mm
(3)Equipment


thumb

Connection Diagram：


thumb
The two photoresistor sensors are linked with A1 and A2, then finish the experiment via photoresistor connected to A1. Then finish the following experiment via photoresistor connected A1. Let’s read its analog value.


(4)Test Code


/*
 keyestudio Mini Tank Robot V2
 lesson 3.1
 photocell
 http://www.keyestudio.com
*/
int sensorPin = A1;    // select the input pin for the photocell
int sensorValue = 0;  // variable to store the value coming from the sensor
void setup() {
Serial.begin(9600);
}
void loop() {
sensorValue = analogRead(sensorPin);  // read the value from the sensor:
Serial.println(sensorValue);  //Serial port prints the resistance value
delay(500);
}
//******************************************************
(5)Test Result


thumb


Upload code on development board, open serial monitor, check if its value diminishes when covering photoresistor. However, the value increases when uncovered.

(6)Code Explanation analogRead(sensorPin)：read the analog value of photoresistor via analog ports. Serial.begin(9600): Initialize the serial port, baud rate of serial communication is 9600 Serial.println : Serial port prints and word wrap.


(7)Extension Practice We’ve known how to read the value of photoresistor. Let’s combine photoresistor with LED and view the status of LED.


thumb
PWM restrains the brightness, so LED is linked with PWM pins, connect LED to pin 10, keep pin of photoresistor unchanged, then design the code:

/*keyestudio Mini Tank Robot V2
lesson 3.2
photocell-analog output
http://www.keyestudio.com
*/
int analogInPin = A1;  // Analog input pin that the photocell is attached to
int analogOutPin = 10; // Analog output pin that the LED is attached to
int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)
void setup() {
Serial.begin(9600);
 }
void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(analogOutPin, outputValue);
  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
 Serial.println(sensorValue);  //serial port prints the value of photoresistor
delay(2);
}
//***************************************************************

Upload code, press it by hand and see the the LED brightness.



Project 4: Servo Control
(1)Description


thumb

Servo motor is a position control rotary actuator. It mainly consists of housing, circuit board, core-less motor, gear and position sensor. Its working principle is that the servo receives the signal sent by MCU or receiver and produces a reference signal with a period of 20ms and width of 1.5ms, then compares the acquired DC bias voltage to the voltage of the potentiometer and obtain the voltage difference output.

When the motor speed is constant, the potentiometer is driven to rotate through the cascade reduction gear, which leads that the voltage difference is 0, and the motor stops rotating. Generally, the angle range of servo rotation is 0° --180 °

The rotation angle of servo motor is controlled by regulating the duty cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM signal is 20ms (50Hz). Theoretically, the width is distributed between 1ms-2ms, but in fact, it's between 0.5ms-2.5ms. The width corresponds the rotation angle from 0° to 180°. But note that for different brand motor, the same signal may have different rotation angle. 


thumb

The corresponding servo angles are shown below:
thumb


(2)Specification

Working voltage: DC 4.8V ~ 6V
Operating angle range: about 180 ° (at 500 → 2500 μsec)
Pulse width range: 500 → 2500 μsec
No-load speed: 0.12 ± 0.01 sec / 60 (DC 4.8V) 0.1 ± 0.01 sec / 60 (DC 6V)
No-load current: 200 ± 20mA (DC 4.8V) 220 ± 20mA (DC 6V)
Stopping torque: 1.3 ± 0.01kg · cm (DC 4.8V) 1.5 ± 0.1kg · cm (DC 6V)
Stop current: ≦ 850mA (DC 4.8V) ≦ 1000mA (DC 6V)
Standby current: 3 ± 1mA (DC 4.8V) 4 ± 1mA (DC 6V)

(3)Equipment


thumb

(4)Connection Diagram：


thumb

Wiring note: the brown line of servo is linked with Gnd(G), the red line is connected to 5v(V) and orange line is attached to digital 9.

The servo have to be connected to external power, due to its high demand for driving servo current. Generally, the current of development board is not enough. If without connected power, the development board could be burnt.


(5)Test Code1

/*
keyestudio Mini Tank Robot V2
lesson 4.1
Servo
http://www.keyestudio.com
*/
#define servoPin 9  //servo Pin
int pos; //angle variable of servo
int pulsewidth; // pulse width variable of servo
void setup() {
  pinMode(servoPin, OUTPUT);  //set servo pin to OUTPUT
  procedure(0); //set the angle of servo to 0°
}
void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    procedure(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                   //control the rotation speed of servo
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    procedure(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                    
  }
}
// function to control servo
void procedure(int myangle) {
  pulsewidth = myangle * 11 + 500;  //calculate the value of pulse width
  digitalWrite(servoPin,HIGH);
  delayMicroseconds(pulsewidth);   //The duration of high level is pulse width
  digitalWrite(servoPin,LOW);
  delay((20 - pulsewidth / 1000));  // the cycle is 20ms, the low level last for the rest of time
}
//********************************************************************
Upload code successfully, servo swings back in the range of 0° to 180°

There is another guide for restraining servo---- servo library file, the following link of official website is for your reference. https://www.arduino.cc/en/Reference/Servo

Servo library file

(6)Test Code2

/*
 keyestudio Mini Tank Robot V2
 lesson 4.2
 servo
 http://www.keyestudio.com
*/
#include <Servo.h>
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
int pos = 0;    // variable to store the servo position
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}
void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
//****************************************************************
(7)Test Result

Upload code successfully and power on, servo rotates in the range of 0° to 180°. The result is same. We usually control it by library file.

(8)Code Explanation

Arduino comes with #include <Servo.h> (servo function and statement） The following are some common statements of the servo function: 1. attach（interface）——Set servo interface, port 9 and 10 are available

3.write（angle）——The statement to set rotation angle of servo, the angle range is from 0° to 180° 3. read（）——The statement to read angle of servo, read the command value of “write()” 4. Note: The above written format is “servo variable name, specific statement（）”, for instance: myservo.attach(9)

Project 5: Ultrasonic Sensor
(1)Description


thumb

The HC-SR04 ultrasonic sensor uses sonar to determine distance to an object like bats do. It offers excellent non-contact range detection with high accuracy and stable readings in an easy-to-use package. It comes complete with ultrasonic transmitter and receiver modules.
The HC-SR04 or the ultrasonic sensor is being used in a wide range of electronics projects for creating obstacle detection and distance measuring application as well as various other applications. Here we have brought the simple method to measure the distance with arduino and ultrasonic sensor and how to use ultrasonic sensor with arduino.

(2)Specification



thumb


Power Supply :+5V DC
Quiescent Current : <2mA
Working Current: 15mA
Effectual Angle: <15°
Ranging Distance : 2cm – 400 cm
Resolution : 0.3 cm
Measuring Angle: 30 degree
Trigger Input Pulse width: 10uS

(3)Equipment


thumb

(4)The principle of ultrasonic sensor

As the above picture shown, it is like two eyes. One is transmitting end, the other is receiving end.

The ultrasonic module will emit the ultrasonic waves after trigger signal. When the ultrasonic waves encounter the object and are reflected back, the module outputs an echo signal, so it can determine the distance of object from the time difference between trigger signal and echo signal. The t is the time that emitting signal meets obstacle and returns. and the propagation speed of sound in the air is about 343m/s, therefore, distance = speed * time, because the ultrasonic wave emits and comes back, which is 2 times of distance, so it needs to be divided by 2, the distance measured by ultrasonic wave = (speed * time)/2

1.Use method and timing chart of ultrasonic module: Setting the delay time of Trig pin of SR04 to 10μs at least, which can trigger it to detect distance. 2. After triggering, the module will automatically send eight 40KHz ultrasonic pulses and detect whether there is a signal return. This step will be completed automatically by the module. 3. If the signal returns, the Echo pin will output a high level, and the duration of the high level is the time from the transmission of the ultrasonic wave to the return.



thumb

Circuit diagram of ultrasonic sensor:


thumb


(5)Connection Diagram


thumb


thumb


(6)Test Code

/*
 keyestudio Mini Tank Robot V2
 lesson 5
 Ultrasonic sensor
 http://www.keyestudio.com
*/ 
int trigPin = 5;    // Trigger
int echoPin = 4;    // Echo
long duration, cm, inches;
void setup() {
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
   // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  duration = pulseIn(echoPin, HIGH);
   // Convert the time into a distance
  cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343
  inches = (duration/2) / 74;   // Divide by 74 or multiply by 0.0135
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(250);
}
//****************************************************************
(7)Test Result Upload test code on the development board, open serial monitor and set baud rate to 9600. The detected distance will be displayed, unit is cm and inch. Hinder the ultrasonic sensor by hand, the displayed distance value is smaller.



thumb


(8)Code Explanation int trigPin = 5; this pin is defined pin to transmit ultrasonic waves, generally output. int echoPin = 4; this is defined as the pin of reception, generally input cm = (duration/2) / 29.1; inches = (duration/2) / 74; by 0.0135 We can calculate the distance by using the following formula: distance = (traveltime/2) x speed of sound The speed of sound is: 343m/s = 0.0343 cm/uS = 1/29.1 cm/uS Or in inches: 13503.9in/s = 0.0135in/uS = 1/74in/uS We need to divide the traveltime by 2 because we have to take into account that the wave was sent, hit the object, and then returned back to the sensor. (9)Extension Practice: We have just measured the distance displayed by the ultrasonic. How about controlling the LED with the measured distance? Let's try it, connect an LED light module to the D10 pin.


thumb

/*
 keyestudio Mini Tank Robot V2
 lesson 5
 Ultrasonic LED
 http://www.keyestudio.com
*/ 
int trigPin = 5;    // Trigger
int echoPin = 4;    // Echo
long duration, cm, inches;
void setup() {
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 void loop() 
{
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  duration = pulseIn(echoPin, HIGH);
  // Convert the time into a distance
  cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343
  inches = (duration/2) / 74;   // Divide by 74 or multiply by 0.0135
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(250);
if (cm>=2 && cm<=10)
digitalWrite(10, HIGH);
delay(1000);
digitalWrite(10, LOW);
delay(1000);
}
//****************************************************************

Upload test code to development board and block ultrasonic sensor by hand, then check if LED is on

Project 6: IR Reception
(1)Description
There is no doubt that infrared remote control is ubiquitous in daily life. It is used to control various household appliances, such as TVs, stereos, video recorders and satellite signal receivers. Infrared remote control is composed of infrared transmitting and infrared receiving systems, that is, an infrared remote control and infrared receiving module and a single-chip microcomputer capable of decoding.​    
The 38K infrared carrier signal emitted by remote controller is encoded by the encoding chip in the remote controller. It is composed of a section of pilot code, user code, user inverse code, data code, and data inverse code. The time interval of the pulse is used to distinguish whether it is a 0 or 1 signal and the encoding is made up of these 0, 1 signals.
The user code of the same remote control is unchanged. The data code can distinguish the key.
When the remote control button is pressed, the remote control sends out an infrared carrier signal. When the IR receiver receives the signal, the program will decode the carrier signal and determines which key is pressed. The MCU decodes the received 01 signal, thereby judging what key is pressed by the remote control.
Infrared receiver we use is an infrared receiver module. Mainly composed of an infrared receiver head, it is a device that integrates reception, amplification, and demodulation. Its internal IC has completed demodulation, and can achieve from infrared reception to output and be compatible with TTL signals. Additionally, it is suitable for infrared remote control and infrared data transmission. The infrared receiving module made by the receiver has only three pins, signal line, VCC and GND. It is very convenient to communicate with arduino and other microcontrollers.


thumb


(2)Specification


thumb

Operating Voltage: 3.3-5V（DC）
Interface: 3PIN
Output Signal: Digital signal
Receiving Angle: 90 degrees
Frequency: 38khz
Receiving Distance: 10m


(3)Equipment


thumb

(4)Connection Diagram


thumb

Respectively link “-”、“+” and S of IR receiver module with G(GND）, V（VCC）and A0 of keyestudio development board.
Attention: On the condition that digital ports are not available, analog ports can be regarded as digital ports. A0 equals to D14, A1 is equivalent to digital 15.


(5)Test Code

Firstly import library file of IR receiver module(refer to how to import Arduino library file) before designing code.

/*
keyestudio Mini Tank Robot V2
lesson 6
IRremote
http://www.keyestudio.com
*/ 
#include <IRremoteTank.h>     // IRremote library statement
int RECV_PIN = A0;        //define the pins of IR receiver as A0
IRrecv irrecv(RECV_PIN);   
decode_results results;   // decode results exist in the “result” of “decode results”
void setup()  
	{  
      Serial.begin(9600);  
      irrecv.enableIRIn(); //Enable receiver
	}  
 void loop() {  
	  if (irrecv.decode(&results))//decode successfully, receive a set of infrared signals
	  {  
	    Serial.println(results.value, HEX);//Wrap word in 16 HEX to output and receive code 
	    irrecv.resume(); // Receive the next value
	  }  
	  delay(100);  
	}  
//*******************************************************


(6)Test Result

Upload test code, open serial monitor and set baud rate to 9600, point remote control to IR receiver and the corresponding value will be shown, if pressing so long, the error codes will appear.


thumb

Below we have listed out each button value of keyestudio remote control. So you can keep it for reference.


thumb

(7)Code Explanation
irrecv.enableIRIn(): after enabling IR decoding, the IR signals will be received, then function“decode()”will check continuously if decode successfully.

irrecv.decode(&results): after decoding successfully, this function will come back to “true”, and keep result in “results”. After decoding a IR signals, run the resume()function and receive the next signal (8)Extension Practice We decoded the key value of IR remote control. How about restrain LED by the measured value? We could operate an experiment to affirm. Attach a LED to D10. When keep the pin of IR receiver unchanged, LED will be on when pressing the key of remote control; press again, LED will be off.


thumb



/* keyestudio Mini Tank Robot V2
lesson 6.2
IRremote
http://www.keyestudio.com
*/ 
#include <IRremoteTank.h>
int RECV_PIN = A0;//define the pin of IR receiver as A0
int LED_PIN=10;//define the pin of LED
int a=0;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Initialize the IR receiver 
  pinMode(LED_PIN,OUTPUT);//set LED_pin to OUTPUT
}
void loop() {
  if (irrecv.decode(&results)) {
if(results.value==0xFF02FD &a==0) // according to the above key value, press“OK”on remote control , LED will be controlled
{
    digitalWrite(LED_PIN,HIGH);//LED will be on
a=1;
}
else if(results.value==0xFF02FD &a==1) //press again
{
digitalWrite(LED_PIN,LOW);//LED will go off
a=0;
}
    irrecv.resume(); //receive the next value
  }
}
//*******************************************************
Upload code to development board, press“OK”key on remote control to make LED on and off.

Project 7: Bluetooth Remote Control
(1)Description


thumb

Bluetooth, a simple wireless communication module most popular since the last few decades and easy to use are being used in most of the battery-powered devices.
Over the years, there have been many upgrades of Bluetooth standard to keep fulfil the demand of customers and technology according to the need of time and situation. Over the few years, there are many things changed including data transmission rate, power consumption with wearable and IoT Devices and Security System.
Here we are going to learn about HM-10 BLE 4.0 with Arduino Board. The HM-10 is a readily available Bluetooth 4.0 module. This module is used for establishing wireless data communication. The module is designed by using the Texas Instruments CC2540 or CC2541 Bluetooth low energy (BLE) System on Chip (SoC).


(2)Specification

Bluetooth protocol: Bluetooth Specification V4.0 BLE
No byte limit in serial port Transceiving
In open environment, realize 100m ultra-distance communication with iphone4s
Working frequency: 2.4GHz ISM band
Modulation method: GFSK(Gaussian Frequency Shift Keying)
Transmission power: -23dbm, -6dbm, 0dbm, 6dbm, can be modified by AT command.
Sensitivity: ≤-84dBm at 0.1% BER
Transmission rate: Asynchronous: 6K bytes ; Synchronous: 6k Bytes
Security feature: Authentication and encryption
Supporting service: Central & Peripheral UUID FFE0, FFE1
Power consumption: Auto sleep mode, stand by current 400uA~800uA, 8.5mA during transmission.
Power supply: 5V DC
Working temperature: –5 to +65 Centigrade

(3)Equipment


thumb

(4)Connection Diagram

1. STATE: state test pins, connected to internal LED, generally keep it unconnected.
2. RXD: serial interface, receiving terminal.
3. TXD: serial interface, transmitting terminal.
4. GND: Ground.
5. VCC: positive pole of the power source.
6. EN/BRK: break connect, it means breaking the Bluetooth connection, generally, keep it unconnected.

thumb

(5)Test Code

/*
 keyestudio Mini Tank Robot v2.0
 lesson 7.1
 bluetooth 
http://www.keyestudio.com
*/

char ble_val; //character variable: save the value of Bluetooth reception

void setup() {
  Serial.begin(9600);
}
void loop() {
  if(Serial.available() > 0)  //Judge if there is data in serial buffer
  {
    ble_val = Serial.read();  //Read data from serial buffer
    Serial.println(ble_val);  //Print
  }}
//*******************************************

(There will be contradiction between serial communication of code and communication of Bluetooth when uploading code, therefore, don’t link with Bluetooth module before uploading code.)
After uploading code on development board, then insert Bluetooth module, wait for the command from cellphone.

(6)Download APP

Allow APP to access “location” in settings of your cellphone when connecting to Bluetooth module.

The code is reading the received signal, and we also need a stuff to send signal. In this project, we send signal to control robot car via cellphone.
Then we need to download the APP.

1.For iOS system

Enter APP STORE to search BLE Scanner 4.0, then download it.


thumb

2.For Android system

Enter Google Play to find out BLE Scanner, then download.
And allow APP to access“location”, you could enable “location”in settings of your cellphone.



thumb

3.After installation, open App and enable “Location and Bluetooth” permission.
4.We take iOS version as example. The operation method of Android version is almost same as it.
5.Scan Bluetooth module to get Bluetooth BLE 4.0. Its name is HMSoft.
Then click“connect”to link with Bluetooth and use it.


thumb

6. After connecting to HMSoft, click it to get multiple options, such as device information, access permission, general and custom service. Choose “CUSTOM SERVICE”


thumb

7.Then pop up the following page


thumb

8. Click（Read,Notify,WriteWithoutResponse)to enter the following page


thumb

9.Click Write Value, appear the interface to enter HEX or Text.


thumb

10.Open the serial monitor on Arduino，enter a 0 or other character at Text interface.


thumb

Then click“Write”, open serial monitor to view if there is a “0” signal
thumb


(7)Code Explanation

Serial.available() : The current rest characters when return to buffer area. Generally, this function is used to judge if there is data in buffer. When Serial.available()>0, it means that serial receives the data and can be read
Serial.read()：Read a data of a Byte in buffer of serial port, for instance, device sends data to Arduino via serial port, then we could read data by “Serial.read()” (8)Extension Practice
We could send a command via cellphone to turn on and off a LED.
D10 is connected to a LED, as shown below:


thumb

/*
 keyestudio Mini Tank Robot v2.0
 lesson 7.2
 Bluetooth 
 http://www.keyestudio.com
*/ 
int ledpin=11;
void setup()
{Serial.begin(9600);
 pinMode(ledpin,OUTPUT);
}
void loop()
{ int i;
  if (Serial.available())
  {i=Serial.read();
    Serial.println("DATA RECEIVED:");
    if(i=='1')
    { digitalWrite(ledpin,1);
      Serial.println("led on");
    }
    if(i=='0')
    { digitalWrite(ledpin,0);
      Serial.println("led off");
}}}//*******************************************

thumb thumb

Click “Write” on APP, when you enter 1, LED will be on, when you input 0, LED will be off. (Remember to remove the Bluetooth module after finishing experiment, otherwise, burning code will be affected)

Project 8: Motor Driving and Speed Control
(1) Description


thumb

There are many ways to drive the motor. Our tank robot uses the most commonly used L298P solution. L298P is an excellent high-power motor driver IC produced by STMicroelectronics. It can directly drive DC motors, two-phase and four-phase stepping motors. The driving current up to 2A, and output terminal of motor adopts eight high-speed Schottky diodes as protection.
We designed a shield based on the circuit of L298p.
The stacked design reduces the technical difficulty of using and driving the motor.

(2)Specification

Circuit Diagram for L298P Board


thumb

1)Logic part input voltage: DC5V
2)Driving part input voltage: DC 7-12V
3)Logic part working current: <36mA
4)Driving part working current: <2A
5)Maximum power dissipation: 25W (T=75℃)
6)Working temperature: -25℃～＋130℃
7)Control signal input level: high level 2.3V<Vin<5V, low level -0.3V<Vin<1.5V

thumb

(3)Drive Robot to Move

Through the above circuit diagram, the direction pin of A motor is D12, and speed pin is D3; D13 is the direction pin of B motor, D11 is speed pin.
We know how to control digital ports according to the following chart.
PWM decides 2 motors to turn so as to drive robot car. The PWM value is in the range of 0-255, the larger the number, the faster the motor rotates.


thumb

(4)Equipment


thumb

(5)Connection Diagram


thumb

Note: the 4Pin terminal block is marked with silkscreen 1234. The red line of right rear motor is connected to terminal 1, black line is linked with end 2. The red line of left front motor is attached to terminal 3, black line is linked with port 4.

(6)Test Code

/*
 keyestudio Mini Tank Robot v2.0
 lesson 8.1
 motor driver
 http://www.keyestudio.com
*/ 

#define ML_Ctrl 13  //define the direction control pin of left motor
#define ML_PWM 11   //define the PWM control pin of left motor
#define MR_Ctrl 12  //define direction control pin of right motor
#define MR_PWM 3   // define the PWM control pin of right motor

void setup()
{
  pinMode(ML_Ctrl, OUTPUT);//define direction control pin of left motor as output
  pinMode(ML_PWM, OUTPUT);//define PWM control pin of left motor as output
  pinMode(MR_Ctrl, OUTPUT);//define direction control pin of right motor as output.
  pinMode(MR_PWM, OUTPUT);//define the PWM control pin of right motor as output
}

void loop()
{ 
  digitalWrite(ML_Ctrl,LOW);//set the direction control pin of left motor to LOW
  analogWrite(ML_PWM,200);//set the PWM control speed of left motor to 200
  digitalWrite(MR_Ctrl,LOW);//set the direction control pin of right motor to LOW
  analogWrite(MR_PWM,200);//set the PWM control speed of right motor to 200

  //front
  delay(2000);//delay in 2s
   digitalWrite(ML_Ctrl,HIGH);//set the direction control pin of left motor to HIGH
  analogWrite(ML_PWM,200);//set the PWM control speed of left motor to 200  
digitalWrite(MR_Ctrl,HIGH);//set the direction control pin of right motor to HIGH
  analogWrite(MR_PWM,200);//set the PWM control speed of right motor to 200

   //back
  delay(2000);//delay in 2s 
  digitalWrite(ML_Ctrl,HIGH);//set the direction control pin of left motor to HIGH
  analogWrite(ML_PWM,200);//set the PWM control speed of left motor to 200
  digitalWrite(MR_Ctrl,LOW);//set the direction control pin of right motor to LOW
  analogWrite(MR_PWM,200);//set the PWM control speed of right motor to 200

    //left
  delay(2000);//delay in 2s
   digitalWrite(ML_Ctrl,LOW);//set the direction control pin of left motor to LOW
  analogWrite(ML_PWM,200);//set the PWM control speed of left motor to 200
  digitalWrite(MR_Ctrl,HIGH);//set the direction control pin of right motor to HIGH
  analogWrite(MR_PWM,200);//set the PWM control speed of right motor to 200

   //right
  delay(2000);//delay in 2s
  analogWrite(ML_PWM,0);//set the PWM control speed of left motor to 0
  analogWrite(MR_PWM,0);//set the PWM control speed of right motor to 0

    //stop
  delay(2000);//delay in 2s
}//*****************************************


(7)Test Result

Hook up by connection diagram, upload code and power on, smart car goes forward and back for 2s, turns left and right for 2s, stops for 2s and alternately.
(8) Code Explanation
digitalWrite(ML_Ctrl,LOW): the rotation direction of motor is decided by the high/low level and and the pins that decide rotation direction are general pins.
analogWrite(ML_PWM,200): the speed of motor is regulated by PWM, The speed of motor is regulated by PWM, and the pins that decide the speed of motor have to be PWM pins.


(9)Extension Practice

Hook up in same way


thumb

/*
 keyestudio Mini Tank Robot v2.0
 lesson 8.2
 motor driver pwm
 http://www.keyestudio.com
*/ 
#define ML_Ctrl 13  //define the direction control pin of left motor
#define ML_PWM 11   //define the PWM control pin of left motor
#define MR_Ctrl 12  //define the control pin of right motor
#define MR_PWM 3   //define the PWM control pin of right motor
void setup()
{ pinMode(ML_Ctrl, OUTPUT);//define the direction control pin of left motor as OUTPUT
  pinMode(ML_PWM, OUTPUT);//define the PWM control pin of left motor as OUTPUT
  pinMode(MR_Ctrl, OUTPUT);//define the direction control pin of right motor as OUTPUT
  pinMode(MR_PWM, OUTPUT);//define the PWM control pin of right motor as OUTPUT

}
void loop()
{ digitalWrite(ML_Ctrl,LOW);//Set direction control pin of left motor to LOW
  analogWrite(ML_PWM,100);// Set the PWM control speed of left motor to 100
  digitalWrite(MR_Ctrl,LOW);//Set the direction control pin of right motor to LOW
  analogWrite(MR_PWM,100);//Set the PWM control speed of right motor to 100
  //front
  delay(2000);//define 2s
  digitalWrite(ML_Ctrl,HIGH);//Set direction control pin of left motor to HIGH level
  analogWrite(ML_PWM,100);//Set the PWM control speed of left motor to 100
  digitalWrite(MR_Ctrl,HIGH);//Set direction control pin of right motor to HIGH level
  analogWrite(MR_PWM,100);//Set the PWM control speed of right motor to 100
   //back
  delay(2000);//define 2s
  digitalWrite(ML_Ctrl,HIGH);//Set direction control pin of left motor to HIGH level
  analogWrite(ML_PWM,100);//Set the PWM control speed of left motor to 100
  digitalWrite(MR_Ctrl,LOW);//Set direction control pin of right motor to LOW level
  analogWrite(MR_PWM,100);//Set the PWM control speed of right motor to 100
    //left
  delay(2000);//define 2s
   digitalWrite(ML_Ctrl,LOW);//set the direction control pin of left motor to LOW
  analogWrite(ML_PWM,100);//set the PWM control speed of left motor to 200
  digitalWrite(MR_Ctrl,HIGH);//set the direction control pin of right motor to HIGH
  analogWrite(MR_PWM,100);//set the PWM control speed of right motor to 100
   //right
  delay(2000);//define 2s
  analogWrite(ML_PWM,0);//set the PWM control speed of left motor to 0
  analogWrite(MR_PWM,0);// set the PWM control speed of right motor to 0

    //stop
  delay(2000);//define 2s
}//******************************************************************

Upload code successfully, the motors rotate faster.

Project 9: LED Expression Panel
(1)Description


thumb

If we add an expression panel to the robot, it will be amazing. Keyestudio's 8*16 dot matrix can meet your requirements. You can create facial expressions, patterns or other interesting displays yourself. 8*16 LED light board comes with 128 LEDs. The data of the microprocessor (arduino) communicates with the AiP1640 through the two-wire bus interface, so as to control the 128 LEDs on the module, which produce the patterns you need on dot matrix. To facilitate wiring, we also provide a HX-2.54 4Pin wiring.


(2)Specification

Working voltage: DC 3.3-5V
Power loss: 400mW
Oscillation frequency: 450KHz
Drive current: 200mA
Working temperature: -40~80℃
Communication method: two-wire bus
(3)Equipment


thumb

(4)8*16 Dot Matrix Display

Circuit Graphic


thumb

The principle of 8*16 dot matrix:
How to control each led light of 8*16 dot matrix? We know that a byte has 8 bits, each bit is 0 or 1. When a bit is 0, turn off LED and when a bit is 0, turn on LED.
Thereby, one byte can control the LED in a row of dot matrix, so 16 bytes can control 16 columns of led lights, that is, 8*16 dot matrix.

Interface Description and Communication Protocol:
The data of the microprocessor (arduino) communicates with the AiP1640 through the two-wire bus interface.
The communication protocol diagram is shown below:

(SCLK) is SCL, (DIN) is SDA:

thumb

①The starting condition for data input: SCL is high level and SDA changes from high to low.
②For data command setting, there are methods as shown in the figure below.
In our sample program, select the way to add 1 to the address automatically, the binary value is 0100 0000 and the corresponding hexadecimal value is 0x40.


thumb

③For address command setting, the address can be selected as shown below. The first 00H is selected in our sample program, and the binary number 1100 0000 corresponds to the hexadecimal 0xc0


thumb

④The requirement for data input is that SCL is high level when inputting data, the signal on SDA must remain unchanged. Only when the clock signal on SCL is low level, the signal on SDA can be altered. The data input is low-order first, high-order is behind
⑤ The condition to end data transmission is that when SCL is low, SDA is low, and when SCL is high, the SDA level also becomes high.
⑥ Display control, set different pulse width, the pulse width can be selected as shown below
In the example, we choose pulse width 4/16, and the hexadecimal corresponds to 1000 1010 is 0x8A


thumb

4. Introduction for Modulus Tool

The online version of dot matrix modulus tool: http://dotmatrixtool.com/#

①Open links to enter the following page.


thumb

②The dot matrix is 8*16 in this project, so set the height to 8, width to 16, as shown below.


thumb

③ Generate hexadecimal data from the pattern As shown below, press the left mouse button to select, the right button to cancel, draw the pattern you want, click Generate, and the hexadecimal data we need will be produced.


thumb


(5)Connection Diagram


thumb


Wiring note: The GND, VCC, SDA, and SCL of the 8x16 LED panel are respectively connected to -(GND), + (VCC), A4 and A5 of the keyestudio sensor expansion board for two-wire serial communication. (Note: This pin is connected to arduino IIC, but this module is not IIC communication, it can be linked with any two pins.)


(6)Test Code

The code that shows smile face

/*
 keyestudio Mini Tank Robot v2.0
 lesson 9.1
 Matrix  face
 http://www.keyestudio.com
*/ 
//the data of smiley from modulus tool
unsigned char smile[] = {0x00, 0x00, 0x1c, 0x02, 0x02, 0x02, 0x5c, 0x40, 0x40, 0x5c, 0x02, 0x02, 0x02, 0x1c, 0x00, 0x00};

#define SCL_Pin  A5  //Set clock pin to A5
#define SDA_Pin  A4  //Set data pin to A4

void setup(){
  //Set pin to output
  pinMode(SCL_Pin,OUTPUT);
  pinMode(SDA_Pin,OUTPUT);
  //clear the display
  //matrix_display(clear);
}
void loop(){
  matrix_display(smile);  // display smile face
}
// the function for dot matrix display
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();  // use the function of the data transmission start condition
  IIC_send(0xc0);  //select address
  
  for(int i = 0;i < 16;i++) //pattern data has 16 bits
  {
     IIC_send(matrix_value[i]); //convey the pattern data
  }

  IIC_end();   //end the transmission of pattern data  
  IIC_start();
  IIC_send(0x8A);  //display control, set pulse width to 4/16 s
  IIC_end();
}

//the condition to start conveying data
void IIC_start()
{
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
}
//Convey data
void IIC_send(unsigned char send_data)
{
  for(char i = 0;i < 8;i++)  //Each byte has 8 bits 8bit for every character
  {
      digitalWrite(SCL_Pin,LOW);  // pull down clock pin SCL_Pin to change the signal of SDA
      delayMicroseconds(3);
      if(send_data & 0x01)  //set high and low level of SDA_Pin according to 1 or 0 of every bit
      {
        digitalWrite(SDA_Pin,HIGH);
      }
      else
      {
        digitalWrite(SDA_Pin,LOW);
      }
      delayMicroseconds(3);
      digitalWrite(SCL_Pin,HIGH); //pull up the clock pin SCL_Pin to stop transmission
      delayMicroseconds(3);
      send_data = send_data >> 1;  // detect bit by bit, shift the data to the right by one
  }
}

//The sign of ending data transmission
void IIC_end()
{
  digitalWrite(SCL_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
}
//******************************************************

(7)Test Result
Wire according to connection diagram. The DIP switch is dialed to right end and power on, the smile face appears on dot matrix.

thumb


(8)Extension Practice

We use the modulo tool (http://dotmatrixtool.com/#)to make the dot matrix alternately display start, go front and stop patterns then clear the patterns, the time interval is 2000 milliseconds.


thumb

Get the graphical code to be displayed via modulus tool

Start：
0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01
Go front：
0x00,0x00,0x00,0x00,0x00,0x24,0x12,0x09,0x12,0x24,0x00,0x00,0x00,0x00,0x00,0x00
Go back：
0x00,0x00,0x00,0x00,0x00,0x24,0x48,0x90,0x48,0x24,0x00,0x00,0x00,0x00,0x00,0x00
Turn left：
0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x28,0x10,0x44,0x28,0x10,0x44,0x28,0x10,0x00
Turn left：
0x00,0x10,0x28,0x44,0x10,0x28,0x44,0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00
Stop：
0x2E,0x2A,0x3A,0x00,0x02,0x3E,0x02,0x00,0x3E,0x22,0x3E,0x00,0x3E,0x0A,0x0E,0x00
Clear the displayed code：0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
The code that the multiple patterns shift:

/* keyestudio Mini Tank Robot v2.0
 lesson 9.2
 Matrix loop
 http://www.keyestudio.com
*/ 
//Array, used to store the data of the pattern, can be calculated by yourself or obtained from the modulus tool
unsigned char start01[] = 
{0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
unsigned char front[] = 
{0x00,0x00,0x00,0x00,0x00,0x24,0x12,0x09,0x12,0x24,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char back[] = 
{0x00,0x00,0x00,0x00,0x00,0x24,0x48,0x90,0x48,0x24,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char left[] = 
{0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x28,0x10,0x44,0x28,0x10,0x44,0x28,0x10,0x00};
unsigned char right[] = 
{0x00,0x10,0x28,0x44,0x10,0x28,0x44,0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char STOP01[] = 
{0x2E,0x2A,0x3A,0x00,0x02,0x3E,0x02,0x00,0x3E,0x22,0x3E,0x00,0x3E,0x0A,0x0E,0x00};
unsigned char clear[] = 
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#define SCL_Pin  A5  //Set clock pin to A5
#define SDA_Pin  A4  //Set data pin to A4
void setup(){
  //Set pins to output
  pinMode(SCL_Pin,OUTPUT);
  pinMode(SDA_Pin,OUTPUT);
  //Clear the display
  matrix_display(clear);
}
void loop(){
  matrix_display(start01);  // Display start pattern
  delay(2000);
  matrix_display(front);    //Front pattern
  delay(2000);
  matrix_display(STOP01);   //Stop pattern
  delay(2000);
  matrix_display(clear);    //Clear the display Clear the screen
  delay(2000);
}
// This function is used to display of dot matrix
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();  //call the function that data transmission start  
  IIC_send(0xc0);  //Choose address
  
  for(int i = 0;i < 16;i++) //pattern data has 16 bits
  {
     IIC_send(matrix_value[i]); //data to convey patterns 
  }
  IIC_end();   //end the transmission of pattern dataEnd
  IIC_start();
  IIC_send(0x8A);  //display control, set pulse width to 4/16
  IIC_end();
}
//The condition starting to transmit data
void IIC_start()
{
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
}
//Convey data
void IIC_send(unsigned char send_data)
{
  for(char i = 0;i < 8;i++)  //Each byte has 8 bits
  {
      digitalWrite(SCL_Pin,LOW);  //pull down clock pin SCL Pin to change the signals of SDA      
delayMicroseconds(3);
      if(send_data & 0x01)  //set high and low level of SDA_Pin according to 1 or 0 of every bit
      {
        digitalWrite(SDA_Pin,HIGH);
      }
      else
      {
        digitalWrite(SDA_Pin,LOW);
      }
      delayMicroseconds(3);
      digitalWrite(SCL_Pin,HIGH); //pull up clock pin SCL_Pin to stop transmitting data
      delayMicroseconds(3);
      send_data = send_data >> 1;  //detect bit by bit, so shift the data right by one
  }}
//The sign that data transmission ends
void IIC_end()
{
  digitalWrite(SCL_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);} 
//*****************************************************
Upload code on development board, 8*16 dot matrix display go front and back and stop patterns, alternately.


thumbthumbthumb

Project 10: Light Follow Robot
(1)Description

thumb

We’ve introduce how to use various sensors, modules.
In this lesson, we combine with hardware knowledge -- photoresistor module, motor driving, to build a light-following robot!
Just need to use 2 photoresistor modules to detect the light intensity at the both side of robot. Read the analog value to rotate the 2 motors, thus drive the tank robot run.


The specific logic of light following robot is shown as the table below:

thumb

thumb

We make a flow chart based on the above logic table, as shown below:

(2)Connection Diagram

thumb

Hook-up Attention: The 4Pin terminal block is marked with silkscreen 1234. The red line of right rear motor is connected to terminal 1, black line is linked with end 2. The red line of left front motor is attached to terminal 3, black line is linked with port 4.


thumb


(3)Test Code

  
/*
 keyestudio Mini Tank Robot v2.0
 lesson 10
 Light-following tank
 http://www.keyestudio.com
*/ 
#define light_L_Pin A1   //define the pin of left photo resistor
#define light_R_Pin A2   //define the pin of right photo resistor
#define ML_Ctrl 13  //define the direction control pin of left motor
#define ML_PWM 11   //define the PWM control pin of left motor
#define MR_Ctrl 12  //define the direction control pin of right motor
#define MR_PWM 3   //define the PWM control pin of right motor
int left_light; 
int right_light;
void setup(){
  Serial.begin(9600);
  pinMode(light_L_Pin, INPUT);
  pinMode(light_R_Pin, INPUT);
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
}
void loop(){
  left_light = analogRead(light_L_Pin);
  right_light = analogRead(light_R_Pin);
  Serial.print("left_light_value = ");
  Serial.println(left_light);
  Serial.print("right_light_value = ");
  Serial.println(right_light);
  if (left_light > 650 && right_light > 650) //the value detected photo resistor，go front
  {  
    Car_front();
  } 
  else if (left_light > 650 && right_light <= 650)  //the value detected photo resistor，turn left
  {
    Car_left();
  } 
  else if (left_light <= 650 && right_light > 650) //the value detected photo resistor，turn right
  {
    Car_right();
  } 
  else  //other situations, stop
  {
    Car_Stop();
  }
}
void Car_front()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,200);
}
void Car_left()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,200);
}
void Car_right()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,200);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,0);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,0);
}
//****************************************************************
(4)Test Result

Upload code on keyestudio V4.0 development board, DIP switch is dialed to right end and power on, the smart robot follows light to move.

Project 11: Ultrasonic Avoid Tank
thumb

(1)Description

In this program, the ultrasonic sensor detects the distance of obstacle to send signals that control the robot car. Next, let’s show you how to make an obstacle avoidance car.

The specific logic of ultrasonic avoiding robot is as shown below:

thumb

(2)Flow chart

thumb
thumb

(3)Connection Diagram：

thumb

Note: “-”、“+” and “S” pins of servo are respectively attached to G（GND）, V（VCC）and D9 of expansion board. The VCC, Trig, Echo and Gnd of ultrasonic sensor are linked with 5v(V), 5(S), Echo and Gnd(G) of expansion board.

(4)Test Code:


/*
 keyestudio Mini Tank Robot v2.0
 lesson 11
 ultrasonic_avoid_tank
 http://www.keyestudio.com
*/
int random2;
int a;
int a1;
int a2;
#define ML_Ctrl 13  //define the direction control pin of left motor
#define ML_PWM 11   //define PWM control pin of left motor
#define MR_Ctrl 12  //define the direction control pin of right motor
#define MR_PWM 3   //define PWM control pin of right motor

#define Trig 5  //ultrasonic trig Pin
#define Echo 4  //ultrasonic echo Pin
int distance;
#define servoPin 9  //servo Pin
int pulsewidth;
/************the function to run motor**************/
void Car_front()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,200);
}
void Car_back()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,200);
}
void Car_left()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,255);
}
void Car_right()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,255);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,0);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,0);
}

//The function to control servo
void procedure(int myangle) {
  for (int i = 0; i <= 50; i = i + (1)) {
    pulsewidth = myangle * 11 + 500;
    digitalWrite(servoPin,HIGH);
    delayMicroseconds(pulsewidth);
    digitalWrite(servoPin,LOW);
    delay((20 - pulsewidth / 1000));
  }
}
//The function to control ultrasonic sensor
float checkdistance() {
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  float distance = pulseIn(Echo, HIGH) / 58.00;  //58.20, that is, 2*29.1=58.2
  delay(10);
  return distance;
}
  //****************************************************************
void setup(){
  pinMode(servoPin, OUTPUT);
  procedure(90); //set servo to 90°
  
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
}
void loop(){
  random2 = random(1, 100);
  a = checkdistance();  //assign the front distance detected by ultrasonic sensor to variable a
  
  if (a < 20) //when the front distance detected is less than 20 
  {
      Car_Stop();  //robot stops
      delay(500); //delay in 500ms
      procedure(160);  //Ultrasonic platform turns left
      for (int j = 1; j <= 10; j = j + (1)) { //for statement, the data will be more accurate if ultrasonic sensor detect a few times.
        a1 = checkdistance();  //assign the left distance detected by ultrasonic sensor to variable a1
      }
      delay(300);
      procedure(20); //Ultrasonic platform turns right
      for (int k = 1; k <= 10; k = k + (1)) {
        a2 = checkdistance(); //assign the right distance detected by ultrasonic sensor to variable a2
      }
      
      if (a1 < 50 || a2 < 50)  //robot will turn to the longer distance side when left or right distance is less than 50cm. 
      {
        if (a1 > a2) //left distance is greater than right side      
        {
          procedure(90);  //Ultrasonic platform turns back to right ahead         
Car_left();  //robot turns left
          delay(500);  //turn left for 500ms
          Car_front(); //go front
        } 
        else 
        {
          procedure(90);
          Car_right(); //robot turns right
          delay(500);
          Car_front();  //go front
        }
      } 
      else  //If both side is greater than or equal to 50cm, turn left or right randomly
      {
        if ((long) (random2) % (long) (2) == 0)  //When the random number is even
        {
          procedure(90);
          Car_left(); //tank robot turns left
          delay(500);
          Car_front(); //go front
        } 
        else 
        {
          procedure(90);
          Car_right(); //robot turns right
          delay(500);
          Car_front(); //go front
       }
     }
  } 
  else  //If the front distance is greater than or equal to 20cm, robot car will go front
  {
      Car_front(); //go front
  }
}
  //****************************************************************


(5)Test Result

Upload code successfully, DIP switch is dialed to right end and power on, tank robot goes forward. It can automatically avoid barrier.

Project 12: Ultrasonic Follow Tank
(1)Description

thumb

In project 11, we made an obstacle avoidance car. In fact, we only need to alter a test code to transform an obstacle avoidance car into following car. In this lesson, we will make an ultrasonic follow robot. The ultrasonic sensor detects the distance between smart car and the obstacle to drive tank car to move.

The specific logic of ultrasonic follow robot is as shown below:

thumb

(2)Flow chart

thumb

(3)Connection Diagram

thumb

Wire-up note:

thumb

(4)Test Code

 /*
 keyestudio Mini Tank Robot v2.0
 lesson 12
 ultrasonic follow tank
 http://www.keyestudio.com
*/ 
//Array, used to store the data of the pattern, can be calculated by yourself or obtained from the modulus tool
unsigned char start01[] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
unsigned char front[] = {0x00,0x00,0x00,0x00,0x00,0x24,0x12,0x09,0x12,0x24,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char back[] = {0x00,0x00,0x00,0x00,0x00,0x24,0x48,0x90,0x48,0x24,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char left[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x28,0x10,0x44,0x28,0x10,0x44,0x28,0x10,0x00};
unsigned char right[] = {0x00,0x10,0x28,0x44,0x10,0x28,0x44,0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char STOP01[] = {0x2E,0x2A,0x3A,0x00,0x02,0x3E,0x02,0x00,0x3E,0x22,0x3E,0x00,0x3E,0x0A,0x0E,0x00};
unsigned char clear[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#define SCL_Pin  A5  //Set clock pin to A5
#define SDA_Pin  A4  //Set data pin to A4

#define ML_Ctrl 13  //define the direction control pin of left motor
#define ML_PWM 11   //define PWM control pin of left motor
#define MR_Ctrl 12  //define the direction control pin of right motor
#define MR_PWM 3   //define PWM control pin of right motor
#define Trig 5  //ultrasonic trig Pin
#define Echo 4  //ultrasonic echo Pin
int distance;
int pulsewidth;
#define servoPin 9  //servo Pin
void setup(){
  Serial.begin(9600);
  pinMode(SCL_Pin,OUTPUT);
  pinMode(SDA_Pin,OUTPUT);
  matrix_display(clear); //Clear the display
  matrix_display(start01);  //display start pattern
  pinMode(servoPin, OUTPUT);
  procedure(90); //set servo to 90°
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
}
void loop(){
  distance = checkdistance();  //assign the distance detected by ultrasonic sensor to distance
  if (distance >= 20 && distance <= 60) //range to go front
  {
    Car_front();
  }
  else if (distance > 10 && distance < 20)  //range to stop
  {
    Car_Stop();
  }
  else if (distance <= 10)  //range to go back
  {
    Car_back();
  }
  else  //other situations, stop
  {
    Car_Stop();
  }
}
/***********the function for motor running****************/
void Car_front()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,200);
}
void Car_back()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,200);
}
void Car_left()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,200);
}
void Car_right()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,200);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,0);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,0);
}

/******************dot matrix********************/
// the function for dot matrix display
void matrix_display(unsigned char matrix_value[])
{
  IIC_start(); // call the function that data transmission start
  IIC_send(0xc0);  //Choose address
  
  for(int i = 0;i < 16;i++) //pattern data has 16 bits
  {
     IIC_send(matrix_value[i]); //data to convey patterns
  }

  IIC_end();   //end to convey data pattern
  
  IIC_start();
  IIC_send(0x8A);  //select pulse width4/16, control display
  IIC_end();
}

//The condition starting to transmit data
void IIC_start()
{
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
}

// transmit data
void IIC_send(unsigned char send_data)
{
  for(char i = 0;i < 8;i++)  //Each byte has 8 bits
  {
      digitalWrite(SCL_Pin,LOW);  //pull down clock pin SCL Pin to change the signals of SDA      
delayMicroseconds(3);
      if(send_data & 0x01)  //set high and low level of SDA_Pin according to 1 or 0 of every bit
      {
        digitalWrite(SDA_Pin,HIGH);
      }
      else
      {
        digitalWrite(SDA_Pin,LOW);
      }
      delayMicroseconds(3);
      digitalWrite(SCL_Pin,HIGH); //pull up clock pin SCL_Pin to stop transmitting data
      delayMicroseconds(3);
      send_data = send_data >> 1;  // detect bit by bit, so move the data right by one
  }
}
//The sign that data transmission ends
void IIC_end()
{
  digitalWrite(SCL_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
}
/***************end dot matrix display******************/
//The function to control servo
void procedure(int myangle) {
  for (int i = 0; i <= 50; i = i + (1)) {
    pulsewidth = myangle * 11 + 500;
    digitalWrite(servoPin,HIGH);
    delayMicroseconds(pulsewidth);
    digitalWrite(servoPin,LOW);
    delay((20 - pulsewidth / 1000));
  }}
//The function to control ultrasonic sensor function controlling ultrasonic
float checkdistance() {
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  float distance = pulseIn(Echo, HIGH) / 58.20;  //58.20, that is , 2*29.1=58.2
  delay(10);
  return distance;
}
//****************************************************************

(5)Test Result

Upload code successfully, DIP switch is dialed to right end, the servo rotates to 90°, “V” is shown on 8X16 LED panel and smart car moves as the obstacle moves.

Project 13: IR Remote Robot Tank
thumb

(1)Description

IR remote control is one of most ubiquitous control, applied in TV, electric fan and some household appliances. In this project, we will make an IR remote smart car. And we’ve known every key value on IR remote control. Thus, we could control smart car via and display the patterns on dot matrix via corresponding key value

The specific logic of infrared remote control robot is shown below:

thumb
thumb


(2)Flow Chart

thumb



(3)Connection Diagram

thumb

Attention：GND,VCC, SDA, SCL of 8x16 LED panel are respectively linked with -（GND), +（VCC), SDA ,SCL. And “-”、“+” and S of IR receiver module are attached to G（GND), V（VCC) and A0 on sensor shield. On the condition of insufficient digital ports, the analog ports can be treat as digital ports. A0 equals to digital 14, A1 is like digital 15.


(4)Test Code


/*
 keyestudio Mini Tank Robot v2.0
 lesson 13
 IR remote tank
 http://www.keyestudio.com
*/

#include <IRremoteTank.h>
IRrecv irrecv(A0);  //set IRrecv irrecv to A0
decode_results results;
long ir_rec;  //save the IR value received

//Array, used to store the data of the pattern, can be calculated by yourself or obtained from the modulus tool
unsigned char start01[] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
unsigned char front[] = {0x00,0x00,0x00,0x00,0x00,0x24,0x12,0x09,0x12,0x24,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char back[] = {0x00,0x00,0x00,0x00,0x00,0x24,0x48,0x90,0x48,0x24,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char left[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x28,0x10,0x44,0x28,0x10,0x44,0x28,0x10,0x00};
unsigned char right[] = {0x00,0x10,0x28,0x44,0x10,0x28,0x44,0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char STOP01[] = {0x2E,0x2A,0x3A,0x00,0x02,0x3E,0x02,0x00,0x3E,0x22,0x3E,0x00,0x3E,0x0A,0x0E,0x00};
unsigned char clear[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#define SCL_Pin  A5  //Set clock pin to A5
#define SDA_Pin  A4  //Set data pin to A4

#define ML_Ctrl 13  //define the direction control pin of left motor
#define ML_PWM 11   //define PWM control pin of left motor
#define MR_Ctrl 12  //define the direction control pin of right motor
#define MR_PWM 3    //define PWM control pin of right motor

#define servoPin 9 //pin of servo
int pulsewidth; //save the pulse width value of servo

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();  //Initialize the IR reception library
  
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  
  pinMode(SCL_Pin,OUTPUT);
  pinMode(SDA_Pin,OUTPUT);
  matrix_display(clear); //Clear Screen
  matrix_display(start01);  //show start picture
  
  pinMode(servoPin, OUTPUT);
  procedure(90);  //Servo rotates to 90°
}

void loop(){
  if (irrecv.decode(&results)) //receive the IR remote value
  {
    ir_rec=results.value;
    String type="UNKNOWN";
    String typelist[14]={"UNKNOWN", "NEC", "SONY", "RC5", "RC6", "DISH", "SHARP", "PANASONIC", "JVC", "SANYO", "MITSUBISHI", "SAMSUNG", "LG", "WHYNTER"};
    if(results.decode_type>=1&&results.decode_type<=13){
      type=typelist[results.decode_type];
    }
    Serial.print("IR TYPE:"+type+"  ");
    Serial.println(ir_rec,HEX);
    irrecv.resume();
  }
  
  if (ir_rec == 0xFF629D) //Go forward
  {
    Car_front();
    matrix_display(front);  //Display front image
  }
  if (ir_rec == 0xFFA857)  //Robot car goes back
  {
    Car_back();
    matrix_display(front);  //Go back
  }
  if (ir_rec == 0xFF22DD)   //Robot car turns left
  {
    Car_T_left();
    matrix_display(left);  //Display left-turning image
  }
  if (ir_rec == 0xFFC23D)   //Robot car turns right
  {
    Car_T_right();
    matrix_display(right);  //Display right-turning image
  }
  if (ir_rec == 0xFF02FD)   //Robot car stops
  { 
    Car_Stop();
    matrix_display(STOP01);  //show stop image
  }
  if (ir_rec == 0xFF30CF)   //robot car rotates anticlockwise
  {
    Car_left();
    matrix_display(left);  //show anticlockwise rotation picture
  }
  if (ir_rec == 0xFF7A85)  //robot car rotates clockwise
  {
    Car_right();
    matrix_display(right);  //show clockwise rotation picture
 }
}
/******************Control Servo*******************/
void procedure(int myangle) {
  for (int i = 0; i <= 50; i = i + (1)) {
    pulsewidth = myangle * 11 + 500;
    digitalWrite(servoPin,HIGH);
    delayMicroseconds(pulsewidth);
    digitalWrite(servoPin,LOW);
    delay((20 - pulsewidth / 1000));
  }
}

/******************Dot Matrix****************/
// this function is used for dot matrix display 
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();
  IIC_send(0xc0);  //Choose address
   for(int i = 0;i < 16;i++) //The picture has 16 bits
  {
     IIC_send(matrix_value[i]); //data to convey patterns
  }
  IIC_end();   //end to convey data pattern
  
  IIC_start();
  IIC_send(0x8A);  //display control, set pulse width to 4/16
  IIC_end();
}

//The condition starting to transmit data
void IIC_start()
{
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
}
//传输数据
void IIC_send(unsigned char send_data)
{
  for(char i = 0;i < 8;i++)  //Each byte has 8 bits 8bits for every character
  {
      digitalWrite(SCL_Pin,LOW);  //pull down clock pin SCL Pin to change the signals of SDA      
      delayMicroseconds(3);
      if(send_data & 0x01)  //set high and low level of SDA_Pin according to 1 or 0 of every bit
      {
        digitalWrite(SDA_Pin,HIGH);
      }
      else
      {
        digitalWrite(SDA_Pin,LOW);
      }
      delayMicroseconds(3);
      digitalWrite(SCL_Pin,HIGH); //pull up clock pin SCL_Pin to stop transmitting data
      delayMicroseconds(3);
      send_data = send_data >> 1;  // detect bit by bit, so move the data right by one
  }
}
//The sign that data transmission ends
void IIC_end()
{
  digitalWrite(SCL_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
}
/***************the function to run motor***************/
void Car_front()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,200);
}
void Car_back()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,200);
}
void Car_left()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,255);
}
void Car_right()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,255);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,0);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,0);
}
void Car_T_left()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,180);
}
void Car_T_right()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,180);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,255);
}
 //****************************************************************


(5)Test Result


Upload code successfully and power on, the smart robot can be controlled by IR remote, at same time, the corresponding pattern is shown on 8X16 LED panel.

Project 14: Bluetooth Control Robot
thumb


(1)Description

We’ve learned the basic knowledge of Bluetooth, in this lesson, we will make a Bluetooth remote smart car. In the experiment, we default the HM-10 Bluetooth module as a Slave and the cellphone as a Host.
keyes BT car is an APP rolled out by keyestudio team. You could control the robot car by it readily.
There is a guide to how to download and install APP in the document as for your reference. The interface is shown below.


thumb


APP DOWNLOAD

https://play.google.com/store/apps/details?id=com.keyestudio.tankcar3


(2)Test Code


/*
 keyestudio Mini Tank Robot v2.0
 lesson 14.1
 bluetooth test
 http://www.keyestudio.com
*/
char ble_val; //character variables, used to save the value of Bluetooth reception
void setup() {
  Serial.begin(9600);
}
void loop() {
  if(Serial.available() > 0)  //judge if there is data in buffer area
  { ble_val = Serial.read();  //read the data from serial buffer
    Serial.println(ble_val);  //print out
  }}

Pull off the Bluetooth module, upload test code, reconnect Bluetooth module, open serial monitor and set baud rate to 9600. Point at Bluetooth module and press keys on APP, the corresponding character is shown below.


thumb


The detected character and corresponding function:

thumb


In compliance with the above table, we make a flow chart to assist you to understand well. The flow chart is below:

thumb

(3)Connection Diagram

thumb


Wiring Attention：

thumb

(4)Test Code

Note: Remove the Bluetooth module before uploading test code, otherwise, you will fail to upload test code

/*
 keyestudio Robot Car v2.0
 lesson 14.2
 bluetooth car
 http://www.keyestudio.com
*/

//Array, used to store the data of pattern, can be calculated by yourself or obtained from the modulus tool
unsigned char start01[] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
unsigned char front[] = {0x00,0x00,0x00,0x00,0x00,0x24,0x12,0x09,0x12,0x24,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char back[] = {0x00,0x00,0x00,0x00,0x00,0x24,0x48,0x90,0x48,0x24,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char left[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x28,0x10,0x44,0x28,0x10,0x44,0x28,0x10,0x00};
unsigned char right[] = {0x00,0x10,0x28,0x44,0x10,0x28,0x44,0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char STOP01[] = {0x2E,0x2A,0x3A,0x00,0x02,0x3E,0x02,0x00,0x3E,0x22,0x3E,0x00,0x3E,0x0A,0x0E,0x00};
unsigned char clear[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#define SCL_Pin  A5  //Set clock pin to A5
#define SDA_Pin  A4  //Set data pin to A4

#define ML_Ctrl 13  //define direction control pin of left motor
#define ML_PWM 11   //define PWM control pin of left motor
#define MR_Ctrl 12  //define direction control pin of right motor
#define MR_PWM 3    //define PWM control pin of right motor

char bluetooth_val; //save the value of Bluetooth reception

void setup(){
  Serial.begin(9600);
  
  pinMode(SCL_Pin,OUTPUT);
  pinMode(SDA_Pin,OUTPUT);
  matrix_display(clear);    //Clear the display
  matrix_display(start01);  //display start pattern

  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
}

void loop(){
  if (Serial.available())
  {
    bluetooth_val = Serial.read();
    Serial.println(bluetooth_val);
  }
  switch (bluetooth_val) 
  {
     case 'F':  //forward command
        Car_front();
        matrix_display(front);  // show forward design
        break;
     case 'B':  //Back command
        Car_back();
        matrix_display(back);  //show back pattern
        break;
     case 'L':  // left-turning instruction
        Car_left();
        matrix_display(left);  //show “left-turning” sign 
        break;
     case 'R':  //right-turning instruction
        Car_right();
        matrix_display(right);  //display right-turning sign
       break;
     case 'S':  //stop command
        Car_Stop();
        matrix_display(STOP01);  //show stop picture
        break;
  }
}

/**************The function of dot matrix****************/
//this function is used for dot matrix display
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();
  IIC_send(0xc0);  //Choose address
  
  for(int i = 0;i < 16;i++) //pattern data has 16 bits
  {
     IIC_send(matrix_value[i]); //data to convey patterns
  }
  IIC_end();   //end to convey data pattern
  
  IIC_start();
  IIC_send(0x8A);  //display control, set pulse width to 4/16
  IIC_end();
}
//The condition starting to transmit data
void IIC_start()
{
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
}
//transmit data
void IIC_send(unsigned char send_data)
{
  for(char i = 0;i < 8;i++)  //Each byte has 8 bits
  {
      digitalWrite(SCL_Pin,LOW);  //pull down clock pin SCL Pin to change the signals of SDA      
      delayMicroseconds(3);
      if(send_data & 0x01)  //set high and low level of SDA_Pin according to 1 or 0 of every bit
      {
        digitalWrite(SDA_Pin,HIGH);
      }
      else
      {
        digitalWrite(SDA_Pin,LOW);
      }
      delayMicroseconds(3);
      digitalWrite(SCL_Pin,HIGH); //pull up clock pin SCL_Pin to stop transmitting data
      delayMicroseconds(3);
      send_data = send_data >> 1;  // Detect bit by bit, so move the data right by one
  }
}
//The sign that data transmission ends
void IIC_end()
{
  digitalWrite(SCL_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
}
/*************the function to run motor**************/
void Car_front()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,200);
}
void Car_back()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,200);
}
void Car_left()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,255);
}
void Car_right()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,255);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,0);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,0);
}
void Car_T_left()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,180);
}
void Car_T_right()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,180);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,255);
}
  //****************************************************************

(5)Test Result

Upload code successfully, DIP switch is dialed to right end and power on. After connecting Bluetooth, we could drive smart car to move by Bluetooth App.

thumb

Project 15: Multi-purpose Robot Car
thumb


(1)Description

In previous projects, the tank car only performs single function, however, in this lesson, we integrate all of function to control smart car via Bluetooth control. Here is a simple flow chart of multi-purpose robot car as for your reference.

thumb

(2)Connection Diagram

thumb

Attention：Confirm that every component is connected.

Wire-up Guide:

thumb

thumb

thumb

thumb



thumb

thumb

thumb





(3)Test Code

    /*
 keyestudio Mini Tank Robot v2.0
 lesson 15
 multiple functions
 http://www.keyestudio.com
*/

//Array, used to store the data of the pattern, can be calculated by yourself or obtained from the modulus tool
unsigned char start01[] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
unsigned char front[] = {0x00,0x00,0x00,0x00,0x00,0x24,0x12,0x09,0x12,0x24,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char back[] = {0x00,0x00,0x00,0x00,0x00,0x24,0x48,0x90,0x48,0x24,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char left[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x28,0x10,0x44,0x28,0x10,0x44,0x28,0x10,0x00};
unsigned char right[] = {0x00,0x10,0x28,0x44,0x10,0x28,0x44,0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char STOP01[] = {0x2E,0x2A,0x3A,0x00,0x02,0x3E,0x02,0x00,0x3E,0x22,0x3E,0x00,0x3E,0x0A,0x0E,0x00};
unsigned char clear[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#define SCL_Pin  A5  //Set clock pin to A5
#define SDA_Pin  A4  //Set data pin to A4

#define ML_Ctrl 13  //define direction control pin of left motor
#define ML_PWM 11   //define PWM control pin of left motor
#define MR_Ctrl 12  //define direction control pin of right motor
#define MR_PWM 3   //define PWM control pin of right motor

#define Trig 5  //ultrasonic trig Pin
#define Echo 4  //ultrasonic echo Pin
int distance; //save the distance value detected by ultrasonic, follow function
int random2; //save the variable of random numberssave the variable of random numbers
//save the distance value detected by ultrasonic, obstacle avoidance function
int a;  
int a1;
int a2;

#define servoPin 9  //servo Pin
int pulsewidth;

#define light_L_Pin A1   //define the pin of left photo resistor sensor
#define light_R_Pin A2   //define the pin of right photo resistor sensor
int left_light;
int right_light;

char bluetooth_val; //save the value of Bluetooth reception
int flag;  //flag variable, it is used to entry and exist function
void setup(){
  Serial.begin(9600);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  
  pinMode(servoPin, OUTPUT);
  procedure(90); //set servo to 90°
 pinMode(SCL_Pin,OUTPUT);
  pinMode(SDA_Pin,OUTPUT);
  matrix_display(clear);    //Clear the display
  matrix_display(start01);  //display start pattern
  pinMode(light_L_Pin, INPUT);
  pinMode(light_R_Pin, INPUT);
}

void loop(){
  if (Serial.available())
  {
    bluetooth_val = Serial.read();
    Serial.println(bluetooth_val);
  }
  switch (bluetooth_val) 
  {
    case 'F':  //Forward instruction 
      Car_front();
      matrix_display(front);  //display forward pattern
      break;
    case 'B':  //Back instruction
      Car_back();
      matrix_display(back);  // display back pattern
      break;
    case 'L':  //left-turning instruction
      Car_left();
      matrix_display(left);  //show left-turning pattern
      break;
    case 'R':  //right-turning instruction
      Car_right();
      matrix_display(right);  //show right-turning pattern
      break;
    case 'S':  //stop instruction
      Car_Stop();
      matrix_display(STOP01);  //display stop pattern
      break;
   case 'Y':
      matrix_display(start01);  //show start pattern
      follow();
      break;
   case 'U':
      matrix_display(start01);  //show start pattern
      avoid();
      break;
   case 'X':
      matrix_display(start01);  //show start pattern
      light_track();
      break;
  }}
/*****************Obstacle Avoidance Function**************/
void avoid() 
{
  flag = 0;  //the design that enter obstacle avoidance function
  while (flag == 0) 
  {
    random2 = random(1, 100);
    a = checkdistance();  //assign the front distance detected by ultrasonic sensor to variable a
    
    if (a < 20) //when the front distance detected is less than 20cm
    {
      Car_Stop();  //robot stops
      delay(200); //delay in 200ms
      
      procedure(160);  //Ultrasonic platform turns left
      for (int j = 1; j <= 10; j = j + (1)) { ///for statement, the data will be more accurate if ultrasonic sensor detect a few times.
        a1 = checkdistance();  //assign the left distance detected by ultrasonic sensor to variable a1
      }
      delay(200);
      procedure(20); //Ultrasonic platform turns right
      for (int k = 1; k <= 10; k = k + (1)) {
        a2 = checkdistance(); //assign the right distance detected by ultrasonic sensor to variable a2
      }
      if (a1 < 50 || a2 < 50)  //robot will turn to the longer distance side when left or right distance is less than 50cm.if the left or right distance is less than 50cm, the robot will turn to the greater distance
      {
        if (a1 > a2) //left distance is greater than right
        {
          procedure(90);  //Ultrasonic platform turns back to right ahead ultrasonic platform turns front
          Car_left();  //robot turns left
          delay(500);  //turn left 500ms
          Car_front(); //go forward
        } 
        else 
        {
          procedure(90);
          Car_right(); //robot turns right
          delay(500);
          Car_front();  //go forward
        }
      } 
      else  //both distance on two side is greater than or equal to 50cm, turn randomly
      {
        if ((long) (random2) % (long) (2) == 0)  //when the random number is even
        {
          procedure(90);
          Car_left(); //robot turns left
          delay(500);
          Car_front(); //go forward
        } 
        else 
        {
          procedure(90);
          Car_right(); //robot turns right
          delay(500);
          Car_front(); ///go forward
       } } } 
  else  //If the front distance is greater than or equal to 20cm, robot car will go front
  {
      Car_front(); //go forward
  }
  // receive the Bluetooth value to end the obstacle avoidance function
  if (Serial.available())
  {
    bluetooth_val = Serial.read();
    if (bluetooth_val == 'S')  //receive S
    {
      flag = 1;  //when assign 1 to flag, end loop
    }}}}
/*******************Follow****************/
void follow() {
  flag = 0;
  while (flag == 0) {
    distance = checkdistance();  //assign the distance detected by ultrasonic sensor to distance
    if (distance >= 20 && distance <= 60) //the range to go front
    {
      Car_front();
    }
    else if (distance > 10 && distance < 20)  //the range to stop
    {
      Car_Stop();
    }
    else if (distance <= 10)  // the range to go back
    {
      Car_back();
    }
    else  //other situations, stop
    {
      Car_Stop();
    }
    if (Serial.available())
    {
      bluetooth_val = Serial.read();
      if (bluetooth_val == 'S') 
      {
        flag = 1;  //end loop
      }}}}
//The function to control ultrasonic sensor the function controlling ultrasonic sensor
float checkdistance() {
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  float distance = pulseIn(Echo, HIGH) / 58.00;  //58.20 means 2*29.1=58.2
  delay(10);
  return distance;
}
//The function to control servo the function controlling servo
void procedure(int myangle) {
  for (int i = 0; i <= 50; i = i + (1)) {
    pulsewidth = myangle * 11 + 500;
    digitalWrite(servoPin,HIGH);
    delayMicroseconds(pulsewidth);
    digitalWrite(servoPin,LOW);
    delay((20 - pulsewidth / 1000));
  }}

/****************Light Follow******************/
void light_track() {
  flag = 0;
  while (flag == 0) {
    left_light = analogRead(light_L_Pin);
    right_light = analogRead(light_R_Pin);
    if (left_light > 650 && right_light > 650) //the value detected by photo resistor, go forward
    {  
      Car_front();
    } 
    else if (left_light > 650 && right_light <= 650)  //the value detected by photo resistor, turn left
    {
      Car_left();
    } 
    else if (left_light <= 650 && right_light > 650) //the value detected by photo resistor, turn right
    {
      Car_right();
    } 
    else  //other situations, stop
    {
      Car_Stop();
    }
    if (Serial.available())
    {
      bluetooth_val = Serial.read();
      if (bluetooth_val == 'S') {
        flag = 1;
     }}}}
/***************Dot Matrix *****************/
// this function is used for dot matrix display 
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();
  IIC_send(0xc0);  //Choose address
  
  for(int i = 0;i < 16;i++) //pattern data has 16 bits
  {
     IIC_send(matrix_value[i]); //convey the pattern data
  }
  IIC_end();   //end the transmission of pattern data
  IIC_start();
  IIC_send(0x8A);  //display control, set pulse width to 4/16
  IIC_end();
}
//The condition starting to transmit data
void IIC_start()
{
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
}
//convey data
void IIC_send(unsigned char send_data)
{
  for(char i = 0;i < 8;i++)  //each byte has 8 bits
  {
      digitalWrite(SCL_Pin,LOW);  //pull down clock pin SCL Pin to change the signals of SDA
      delayMicroseconds(3);
      if(send_data & 0x01)  //set high and low level of SDA_Pin according to 1 or 0 of every bit
      {
        digitalWrite(SDA_Pin,HIGH);
      }
      else
      {
        digitalWrite(SDA_Pin,LOW);
      }
      delayMicroseconds(3);
      digitalWrite(SCL_Pin,HIGH); //pull up clock pin SCL_Pin to stop transmitting data
      delayMicroseconds(3);
      send_data = send_data >> 1;  // detect bit by bit, so move the data right by one
  }}
//The sign that data transmission ends
void IIC_end()
{
  digitalWrite(SCL_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin,HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin,HIGH);
  delayMicroseconds(3);
}
/*************the function to run motor*************/
void Car_front()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,200);
}
void Car_back()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,200);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,200);
}
void Car_left()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,HIGH);
  analogWrite(ML_PWM,255);
}
void Car_right()
{
  digitalWrite(MR_Ctrl,HIGH);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,255);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,0);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,0);
}
void Car_T_left()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,255);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,180);
}
void Car_T_right()
{
  digitalWrite(MR_Ctrl,LOW);
  analogWrite(MR_PWM,180);
  digitalWrite(ML_Ctrl,LOW);
  analogWrite(ML_PWM,255);
}


(4)Test Result

Note:Remove the Bluetooth module before uploading test code, otherwise, you will fail to upload test code. Reconnect Bluetooth module after uploading test code

Upload test code successfully, insert Bluetooth module, power on, and connect to Bluetooth. The tank robot can show distinct function by App.

Alright, the whole projects are finished. Please feel free to contact us if you confront some problems. There are some hot-selling items below. You could log in our website to browse them if you’re interested.

9. Resources
Wiki page:https://wiki.keyestudio.com/Ks0428_keyestudio_Mini_Tank_Robot_V2

Official website: https://keyestudio.com/
Assembly Video Link: http://video.keyestudio.com/ks0428/

If you want to try with Mixly software, enter https://fs.keyestudio.com/KS0428.

Navigation menu
Log in
PageDiscussion
ReadView sourceView history
Search
Search Keyestudio Wiki
keyestudio
Navigation
Main page
Random page
Recent changes
Help
Video
Category
Arduino Board
Shield
Starter Kit
Smart Car
Sensor
3D Printer
EASY Plug
Module
Raspberry Pi
Micro:bit
Accessories
TroubleShooting
Network DISK
Tools
What links here
Related changes
Special pages
Printable version
Permanent link
Page information
This page was last edited on 17 June 2024, at 11:17.
Privacy policyAbout Keyestudio WikiDisclaimers
Powered by MediaWiki