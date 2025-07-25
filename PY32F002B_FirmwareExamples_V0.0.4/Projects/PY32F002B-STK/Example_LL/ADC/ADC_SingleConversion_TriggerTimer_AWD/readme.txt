================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates the analog watchdog function of the ADC, which enters
the watchdog interrupt when the voltage value of the channel that opens the
analog watchdog exceeds the upper and lower limit.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program and run it
2. the voltage value of channel 4 (PA7) is lower than 1.65V, the LED off
3. the voltage value of channel 4 (PA7) is higher than 1.65V, the LED on

================================================================================
Notes:
================================================================================