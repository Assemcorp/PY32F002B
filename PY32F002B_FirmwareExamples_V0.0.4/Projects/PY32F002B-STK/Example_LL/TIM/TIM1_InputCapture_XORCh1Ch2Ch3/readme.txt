================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates the 3 channels XOR input capture function of TIM1.Configure
PA0 、PA3 、PA4 as CH1 、CH2 、CH3 input pin.Whenever pin of any of the three pin
(PA0\PA3\PA4) detects a polarity change it triggers a capture interrupt and toggle
the LED in the capture interrupt callback function.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. compile and download the program to MCU and run it;
2. Keep any two pin polarity unchanged, and the LED toggle when the remaining third
pin polarity changes

================================================================================
Notes:
================================================================================