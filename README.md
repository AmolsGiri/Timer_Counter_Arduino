LED Fade Effect using Arduino
Overview
This Arduino program controls two LEDs connected to pins 9 and 10, creating a fading effect by adjusting their brightness using PWM. One LED brightens while the other dims, creating a cross-fade effect.

How It Works
Variables:

timer1 and timer2 store brightness values for LEDs.
inc defines the step size for brightness changes.
incc and decc track whether to increase or decrease brightness.
Setup:

Initializes pins 9 and 10 as output.
Loop:

Adjusts timer1 and timer2 values based on flags incc and decc.
Writes updated brightness values using analogWrite().
Prints brightness values to the Serial Monitor for debugging.
Adds a delay for smooth fading.
Installation and Usage
Connect the circuit as described.
Upload the program to the Arduino board using the Arduino IDE.
Open the Serial Monitor to observe brightness values.
Customization
Change inc to adjust fading speed.
Modify pins for different LED connections.
Add more LEDs for extended effects.
License
This project is open-source and free to use for educational and personal projects. Contributions are welcome!

Author
Created by Amol Giri
Feel free to reach out for improvements or suggestions!
