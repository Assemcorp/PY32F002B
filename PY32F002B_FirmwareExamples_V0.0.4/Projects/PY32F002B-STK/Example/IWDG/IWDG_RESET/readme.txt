================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates the IWDG watchdog function, configuring the watchdog 
overload count value, resetting after counting for 1 second, and then adjusting 
each time The feeding time of the dog (code in the main function while loop)
can be observed that if the feeding time is less than 1 second each time, the 
program Can continue to operate normally (LED flashing), if the dog feeding 
time exceeds 1 second, the program will continue to reset (LED light off).

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program to MCU and run it;
2. It can be observed that the LED can light up normally;
3. Modify the program (comment the code in the main function while loop) and 
configure the dog feeding time to be 1.1 seconds;
4. Recompile and download the program to MCU and run it;
5. It can be observed that the LED cannot light up normally;

================================================================================
Notes:
================================================================================