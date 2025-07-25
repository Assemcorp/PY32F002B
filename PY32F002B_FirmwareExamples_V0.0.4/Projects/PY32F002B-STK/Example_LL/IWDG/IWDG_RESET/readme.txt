================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates the IWDG watchdog function.Configure the watchdog to
count for 1s and then reset.By adjusting the time of each feed dog(code in the
while loop of the main function), it can be observed following situation:
if each dog feeding time is less than 1s, the program can always run normally(LED
toggle)
if the dog feeding time is more than 1s, the program will always reset (LED off)

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. compile and download the program to MCU and run it;
2. Observed LED toggle
3. modify the program (comment code in the while loop of the main function) to
configure the dog feeding time to 1.1s;
4. recompile and download the program to the MCU and run it;
5. Observe that the LED is off.

================================================================================
Notes:
================================================================================