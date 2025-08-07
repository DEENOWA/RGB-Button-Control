# RGB-Button-Control

RGBButtonControl is an Arduino-based project that uses three push buttons to independently control a red, green, and blue LED. Each button toggles its corresponding LED on or off when pressed, with debouncing implemented via a 50ms delay. The system is simple and ideal for learning button-LED interfacing.

## Components and Features
- **Components**:
  - Red, Green, and Blue LEDs
  - Three push buttons
  - Arduino Board (e.g., Uno)
  - Resistors (220–330 ohm for each LED)
  - Jumper wires
  - Breadboard (optional)
- **Features**:
  - Independently toggles red, green, and blue LEDs using dedicated push buttons.
  - Implements edge detection to toggle LEDs only on button release (LOW to HIGH transition).
  - Includes debouncing with a 50ms delay to prevent false triggers.
  - Outputs to Serial Monitor for debugging (optional, not utilized in current code).

## Hardware Requirements
- Arduino Uno (or compatible board)
- Red, Green, and Blue LEDs
- Three push buttons
- 220–330 ohm resistors (3, one for each LED)
- Jumper wires
- Breadboard (optional)
- Pull-down resistors (10k ohm, optional for buttons if not using internal pull-ups)

## Setup Instructions
1. **Wiring**:
   - Connect the LEDs:
     - Red LED anode to Pin 10 via a 220–330 ohm resistor, cathode to GND
     - Green LED anode to Pin 9 via a 220–330 ohm resistor, cathode to GND
     - Blue LED anode to Pin 8 via a 220–330 ohm resistor, cathode to GND
   - Connect the push buttons:
     - Red button: One leg to Pin 2, other leg to 5V; add a 10k ohm pull-down resistor from Pin 2 to GND (or use internal pull-ups)
     - Green button: One leg to Pin 3, other leg to 5V; add a 10k ohm pull-down resistor from Pin 3 to GND
     - Blue button: One leg to Pin 4, other leg to 5V; add a 10k ohm pull-down resistor from Pin 4 to GND
2. **Software**:
   - Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
   - Copy the `src/rgb_button_control.ino` code into the Arduino IDE.
   - No additional libraries are required.
3. **Upload**:
   - Connect your Arduino to your computer via USB.
   - Upload the code to your Arduino board.

## Usage Instructions
1. (Optional) Open the Serial Monitor in the Arduino IDE (set to 9600 baud) for potential debugging (currently unused).
2. The system will:
   - Monitor the three push buttons.
   - Toggle the red LED (Pin 10) when the red button (Pin 2) is pressed and released.
   - Toggle the green LED (Pin 9) when the green button (Pin 3) is pressed and released.
   - Toggle the blue LED (Pin 8) when the blue button (Pin 4) is pressed and released.
3. Press each button to test toggling the corresponding LED on or off.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contributing
Feel free to fork this repository, make improvements, and submit pull requests. Suggestions for new features or bug fixes are welcome!
