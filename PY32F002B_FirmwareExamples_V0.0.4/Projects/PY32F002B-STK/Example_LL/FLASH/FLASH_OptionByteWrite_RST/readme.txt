================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates the change of the RESET pin to a normal GPIO by software.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. compile and download the program to the MCU and run it;
2. power off and re-power the MCU;
3. the RST key changes to GPIO function and the LED lights up;
4. Comment out "MODE_PC0 OB_SWD_PB6_GPIO_PC0" and turn on "MODE_PC0 OB_SWD_PB6_NRST_PC0".
Compile and re-download to MCU.
5. power off and re-power the MCU;
6. the RST key changes to RESET function and the LED lights up;

================================================================================
Notes:
================================================================================