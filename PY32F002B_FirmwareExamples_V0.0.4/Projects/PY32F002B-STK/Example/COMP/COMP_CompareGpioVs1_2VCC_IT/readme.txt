================================================================================
                                Sample Description
================================================================================

Function descriptions:
This example demonstrates the COMP comparator interrupt function, with PA04 as 
the negative input of the comparator and 1/2VCCA as the positive input. By 
adjusting the input voltage on PA04, when the comparator output state is detected
to be high, the LED light will turn on, and when the comparator output state is 
low, the LED light will turn off.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program to MCU and run it;
2. Configure PA04 input voltage greater than 1.65V,LED light off;
3. Configure PA04 input voltage less than 1.65V,LED light on;

================================================================================
Notes:
================================================================================