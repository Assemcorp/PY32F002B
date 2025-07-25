================================================================================
                                Sample Description
================================================================================

Function descriptions:
This example demonstrates the automatic baud rate detection function of USART.
If the MCU detects successfully after the upper computer sends 1 byte baud rate
detection character 0x55, it will returns the string: Auto BaudRate Test.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. compile and download the program to MCU and run it;
2. Connect PC and STK board through USB to TTL module and the connection method
is as follows
STK board    USB to TTL moudle
PB4(TX) -->  RX
PB5(RX) -->  TX
GND     -->  GND
3. Open the serial port Assistant on the PC, connect the COM port correctly, and
set the baud rate to 9600,1 stop bit, and 8 data bit ,without parity check.
4. Send a character 0x55 using the serial assistant. The MCU will return the string
"Auto BaudRate Test".

================================================================================
Notes:
================================================================================