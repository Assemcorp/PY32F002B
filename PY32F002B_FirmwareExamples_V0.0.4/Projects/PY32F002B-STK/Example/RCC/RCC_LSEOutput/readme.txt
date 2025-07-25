================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example configures the system clock as LSE and outputs it through the 
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
3.Use an oscilloscope to monitor the frequency on the PA07 pin and observe if
it matches the configured LSE frequency.

================================================================================
Notes:
1.The default startup system clock in the example is HSI, and the system clock
will only switch to LSE after pressing the user button.
2.Before switching the system clock to LSE, it is required to turn off the
systick interrupt, as the systick interrupt defaults to a 1ms interrupt.
Due to the low LSE clock frequency, the systick interrupt can cause the program
to not run properly.
================================================================================