================================================================================
                                Sample Description
================================================================================

Function descriptions:
This example demonstrates the GPIO external interrupt function, each falling edge
on the PA0 pin will generate an interrupt, and the LED will toggle once in the
interrupt handle function.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. compile and download the program to MCU and run it;
2. Every time the user presses the key, the LED is observed to toggle;

================================================================================
Notes:
PA0 pin is used as user key
================================================================================