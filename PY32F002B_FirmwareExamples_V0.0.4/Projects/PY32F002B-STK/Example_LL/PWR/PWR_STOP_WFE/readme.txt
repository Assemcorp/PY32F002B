================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates waking up in stop mode using GPIO event.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. compile and download the program to MCU and run it;
2. When the LED is on press the key,the LED goes off and enters stop mode;
3. generate a falling edge on PA06 and the program exits stop mode;
4. the LED are toggled in 200ms intervals.

================================================================================
Notes:
1. to demonstrate this sample function, you need to disconnect the swd connection
wire and re-power,because by default, the emulator will set the DBGMCU_CR.DBG_STOP.
2. Be careful to turn off the systick interrupt to avoid this interrupt waking up
the MCU.
================================================================================