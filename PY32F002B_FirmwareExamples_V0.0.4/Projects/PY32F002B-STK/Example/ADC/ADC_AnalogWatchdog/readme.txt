================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates the analog watchdog function of ADC. When the voltage
value of the channel that opens the watchdog is not within the set upper or 
lower limits,Will enter watchdog interrupt.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program to MCU and run it;
2. If the voltage value of PA7 is less than 1.65V (with a power supply voltage of
3.3V), it will not enter the watchdog interrupt and the LED light will not light 
up;
3. If the voltage value of PA7 is greater than 1.65V (with a supply voltage of 
3.3V), the watchdog will interrupt and the LED will light up.

================================================================================
Notes:
================================================================================