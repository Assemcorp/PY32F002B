================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates the function of waking up an MCU through the PA6 pin.
After downloading the program and running it, the LED light is constantly on;
After pressing the user button, the LED light is in a constant dark state and
the MCU enters STOP mode; After pulling down the PA6 pin, the MCU wakes up and
the LED light is in a flashing state.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1.Compile and download the program to MCU and run it;
2.The small light is in a constant light state, press the user button, the LED
light is in a constant dark state, and the MCU enters STOP mode;
3.After pulling down the PA6 pin, the MCU wakes up and the LED light is in a
flashing state.

================================================================================

Notes:

================================================================================