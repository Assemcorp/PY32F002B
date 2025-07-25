================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates USART's automatic Baud detection function. The
debugging assistant sends a character 0x7F and MCU feedback string: Auto
BaudRate Test.

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
3.On the PC side, open the serial port debugging assistant, connect the
communication COM port correctly, and set the Baud to 9600;
4.Debugging assistant sends a character 0x7F, MCU feedback string: Auto
BaudRate Test;

================================================================================

Notes:
1.Do not comment out macro AUTO_BAUD_MODE0 (in main.c), the upper computer
sends 1-byte Baud detection 0x7f, if MCU detection is successful, the returned
character: Auto BaudRate Test
2.Comment out macro AUTO_ BAUD_ MODE0 (in main. c), the upper computer sends
1-byte Baud detection 0x55, if MCU detection is successful, the returned
character: Auto BaudRate Test

================================================================================