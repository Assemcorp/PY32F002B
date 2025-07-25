================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates the COMP polling function, with PA04 as the negative
comparator input and 1/2VCCA as the positive input. Adjust the input voltage
on PA04 , the LED will be on when the comparator output state is detected as high
and be off when the comparator output state is low.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program and run it
2. when the PA04 input is larger than 1.65V,LED off
3. When PA04 input is less than 1.65V,LED on

================================================================================
Notes:
================================================================================