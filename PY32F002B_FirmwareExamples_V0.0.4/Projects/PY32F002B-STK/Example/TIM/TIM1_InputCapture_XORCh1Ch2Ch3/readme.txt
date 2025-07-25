================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates the three channel XOR input capture function of TIM1.
Configure PA0, PA3, and PA4 as input pins for channels 1, 2, and 3. Whenever a 
pin level changes, a capture interrupt is triggered and the LED is flipped during
interrupt processing.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program to MCU and run it
2. Keep the level of any two pins unchanged, and flip the LED when the level of
the remaining pin changes

================================================================================
Notes:
================================================================================