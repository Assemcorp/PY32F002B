================================================================================
                                Sample Description
================================================================================

Function descriptions:
This example demonstrates function of USART to send and receive data using
interrupt mode.Reset the MCU and restart,the PC will receive a string:
UART Test;The PC sends 12 characters,then the MCU returns the same 12 characters
to the PC

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
4. Reset the MCU and restart,the PC will receive a string:UART Test;
5. The PC sends 12 characters,then the MCU returns the same 12 characters to the PC

================================================================================
Notes:
================================================================================