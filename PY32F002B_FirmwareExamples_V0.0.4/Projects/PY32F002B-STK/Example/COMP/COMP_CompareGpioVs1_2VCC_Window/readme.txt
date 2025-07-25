================================================================================
                                Sample Description
================================================================================

Function descriptions:
This example demonstrates the window function of the COMP comparator. The Plus
end of comparator 1 uses the IO2 (1/2VCCA) of comparator 2 as the input, and PB0
as the negative end input. When the voltage value of PB0 is greater than 1.65V,
the LED light turns off, and when it is less than 1.65V, the LED light turns on

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program to MCU and run it;
2. Configure PB0 input voltage greater than 1.65V and LED light off;
3. If the input voltage of PB0 is less than 1.65V, the LED light will be on.

================================================================================
Notes:
================================================================================