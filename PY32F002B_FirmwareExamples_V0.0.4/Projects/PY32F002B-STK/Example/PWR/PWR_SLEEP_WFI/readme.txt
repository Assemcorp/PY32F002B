================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates using GPIO interrupt wake-up in sleep mode.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1.Compile and download the program to MCU and run it;
2.The LED light is on, press the button, the LED light goes out, and enters
sleep mode;
3.Generate a falling edge on PA06, and the program exits sleep mode;
4.The LED flips at 200ms intervals.

================================================================================
Notes:
1.To demonstrate this sample function, it is necessary to disconnect the SWD
cable and power it back on, as by default, the emulator will reset the
DBGMCU_CR.DBG_STOP position.
2.Pay attention to turning off the systick interrupt to prevent it from waking
up the MCU.
================================================================================