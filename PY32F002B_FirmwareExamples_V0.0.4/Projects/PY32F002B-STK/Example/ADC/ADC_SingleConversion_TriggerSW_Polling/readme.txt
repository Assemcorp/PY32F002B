================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates the software triggering and polling functions of ADC.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program;
2. The serial port prints the voltage value of channel 4 (PA7) every 1 second

================================================================================
Notes:
Connect the PC to the STK board through the USB to TTL module, and the connection
method between the STK board and the USB to TTL module is as follows:

STK board USB to TTL module
PB4 (TX) -->RX
PB5 (RX) -->TX
GND -->GND
================================================================================