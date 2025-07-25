================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates the input capture function of TIM1.Configure PA0 as input
capture pin,Whenever PA0 detects a falling edge it triggers a capture interrupt and
toggle the LED in the capture interrupt callback function.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. compile and download the program to MCU and run it;
2. LED will toggled once per the button is pressed

================================================================================
Notes:
================================================================================