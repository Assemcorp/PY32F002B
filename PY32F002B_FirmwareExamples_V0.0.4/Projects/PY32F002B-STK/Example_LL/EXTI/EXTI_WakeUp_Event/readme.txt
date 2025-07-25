================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates the function to wake up the MCU via the PA6 pin. After
downloading the program and running, the LED remains on; After pressing the user
button, the LED remains off, and the MCU enters the STOP mode; After pulling down
the PA6 pin, the MCU wakes up and the LED light is toggling.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. compile and download the program to MCU and run it;
2. press the user button when the led is on, the LED will be off and the MCU will
enter the STOP mode
3. After pulling down the PA6 pin, the MCU will be woke up and the LED will toggle

================================================================================
Notes:
================================================================================