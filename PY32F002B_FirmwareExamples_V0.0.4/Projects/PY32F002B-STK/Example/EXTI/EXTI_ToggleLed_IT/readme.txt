================================================================================
                              Sample Description
================================================================================

Function descriptions:
This example demonstrates the GPIO external interrupt function, where each
falling edge on the PA0 pin generates an interrupt, and the LED light in the
interrupt function flips once.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1.Compile and download the program to MCU and run it;
2.Observe the LED flipping once every time the user presses the button;

================================================================================
Notes:
PA0 pin corresponding to user button.
================================================================================