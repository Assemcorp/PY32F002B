================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates the output compare function of TIM1.CH1 map to PA5,and
set CH1 as output compare channel and in toggle mode.Enable compare interrupt and
toggle LED in interrupt callback.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. compile and download the program to MCU and run it;
2. Observe PA5 with an oscilloscope ,tooggle frequency is 0.5 Hz
3. LED is toggled at 0.5Hz frequency

================================================================================
Notes:
================================================================================