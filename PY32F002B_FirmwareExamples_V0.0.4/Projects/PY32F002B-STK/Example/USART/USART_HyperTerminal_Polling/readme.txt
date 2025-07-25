================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates the POLLING method of USART to send and receive data.
The USART configuration is 115200, with data bit 8, stop bit 1, and check bit
None. After downloading and running the program, it will receive 0x1-0xC through
USART, and then send 12 data through the upper computer, such as 0x1-0xC.
The MCU will send the received data again.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1.Compile and download the program to MCU;
2.Connect the PC to the STK board through the USB to TTL module, and the
connection method between the STK board and the USB to TTL module is as follows:
STK board    USB to TTL module
PB04(TX) ---> RX
PB05(RX) ---> TX
GND      ---> GND
3.On the PC end, open the serial port debugging assistant, connect the
communication COM port correctly, and set the Baud to 115200;
4.The upper computer sends 12 data, and the MCU will feedback the same 12 data
to the upper computer.

================================================================================
Notes:
================================================================================