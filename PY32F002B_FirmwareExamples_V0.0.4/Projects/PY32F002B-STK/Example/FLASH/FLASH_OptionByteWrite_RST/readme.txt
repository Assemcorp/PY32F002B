================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates changing the RESET pin to regular GPIO through software.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program to MCU and run it;
2. Please turn off the MCU and power it back on;
3. RST key changes to GPIO function and LED lights up;
4. Annotate "MODE-PC0 OB_SWD-PB6_GPIO-PC0" and open "MODE-PC0 OB_SWD-PB6NRST-PC0",
Compile and download again to MCU;
5. Turn off the MCU and power it back on;
6. The RST key changes to the RESET function, and the LED lights up;

================================================================================
Notes:
================================================================================