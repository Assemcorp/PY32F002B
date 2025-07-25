================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates the input capture function of TIM1, where PA0 is 
configured as the input capture pin. Every time PA0 detects a falling edge, it 
triggers a capture interrupt and flips the LED light in the capture interrupt 
callback function.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program to MCU and run it
2. Each time the button is pressed, the LED light flips once.

================================================================================
Notes:
================================================================================