#Lab6
Library for simple robot movement using the MSP430.
Example code included in main.c.

##Functions
- `void initPinOuts()`
  - Initializes the pins on the MSP430 for signals to be used in driving the motors
    - Ports 0.0 and 0.1 use Timer A0
    - Ports 1.0 and 1.1 use Timer A1

- `void timersConfig()`
  - Sets the TA0 and TA1 timers to ~100 milliseconds

- `void leftMotorForward()`
  - Powers the left motor to move it forward using the signal from Port 0.1

- `void leftMotorBackward()`
  - Powers the left motor to move it backward using the signal from Port 0.0 

- `void rightMotorForward()`
  - Powers the right motor to move it forward using the signal from Port 1.1

- `void rightMotorBackward()`
  - Powers the right motor to move it backward using the signal from Port 1.0

- `void leftTurn()`
  - Executes the `void leftMotorBackward()` and `void rightMotorForward()` functions to make the robot turn left

- `void rightTurn()`
  - Executes the `void leftMotorForward()` and `void rightMotorBackward()` functions to make the robot turn right

- `void moveForward()`
  - Executes the `void leftMotorForward()` and `void rightMotorForward()` functions to make the robot move forward

- `void moveBackward()`
  - Executes the `void leftMotorBackward()` and `void rightMotorBackward()` functions to make the robot move backward
