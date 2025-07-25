================================================================================
                                Sample Description
================================================================================

Function descriptions:
This example demonstrates the COMP comparator polling function, with PA04 as the
negative input of the comparator and 1/2VCCA as the positive input. By adjusting
the input voltage on PA04, the LED lights up when the comparator output state is
detected to be high, and turns off when the comparator output state is low.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program to MCU and run it;
2. Configure PA04 input voltage greater than 1.65V and LED light off;
3. If the input voltage of PA04 is less than 1.65V, the LED light will be on.

================================================================================
Notes:
================================================================================