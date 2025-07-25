================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example configures the system clock as LSI and outputs it through the
MCO (PA07) pin.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1.Compile and download the program to MCU and run it;
2.Press the user button;
3.Use an oscilloscope to monitor the frequency on the PA07 pin and observe
if it matches the configured LSI frequency.

================================================================================
Notes:
1.The default startup system clock in the example is HSI, and the system clock
will only switch to LSI after pressing the button.
2.Before switching the system clock to LSI, it is required to turn off the
systick interrupt, as the systick interrupt defaults to a 1ms interrupt. Due to
the low clock frequency of the LSI, the systick interrupt can cause the program
to not run properly.
================================================================================