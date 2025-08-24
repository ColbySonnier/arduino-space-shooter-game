# Arduino Space Shooter Game

This project contains Arduino code for a simple space shooter game using an **HC-SR04 ultrasonic distance sensor** as input and a **Keyes 8×16 LED matrix (TM1640 driver)** as the display.

## Files

- `space-shooter-game.ino` — full game code (tested on Arduino Uno)

## Hardware Setup

### Components
- Arduino Uno (or compatible)
- HC-SR04 ultrasonic distance sensor
- Keyes 8×16 LED matrix module (TM1640-based)
- Breadboard + jumper wires

### Wiring

#### Ultrasonic Sensor (HC-SR04)
- **VCC** → 5V  
- **GND** → GND  
- **TRIG** → Pin 5  
- **ECHO** → Pin 4  

#### LED Matrix (TM1640 driver)
- **VCC** → 5V  
- **GND** → GND  
- **SDA** → Pin 6  
- **SCL** → Pin 7  

⚠️ Note: The Keyes 8×16 LED matrix is *not* true I²C even though pins are labeled `SDA/SCL`. It uses a TM1640 two-wire protocol implemented in software.

## How It Works

- Move your hand above the HC-SR04 sensor (between 5–40 cm).  
- Distance maps to the horizontal position of the spaceship at the bottom of the matrix.  
- A pellet shoots upward automatically.  
- A 2×2 enemy block descends from the top.  
- If the pellet hits the enemy, the enemy respawns at a random column.

## Controls

- Simply move your hand closer or farther above the ultrasonic sensor to steer left/right.  
- No buttons are required.

## Troubleshooting

- **Matrix stays fully lit after reset** → Check that the `matrix_display()` function includes the `0x40` data command and clears after the self-test.  
- **Matrix doesn’t light at all** → Check wiring (VCC/GND, SDA=D6, SCL=D7). Swap SDA/SCL if mislabeled.  
- **Ship doesn’t move** → Verify the ultrasonic sensor is connected correctly and working. Use the provided HC-SR04 test sketch to debug.  
- **Weird orientations** → Rotate the matrix physically; rows/columns vary by manufacturer.  

## Expected Serial Monitor Output

During play, the sketch prints measured distances in cm (at 9600 baud) for debugging
