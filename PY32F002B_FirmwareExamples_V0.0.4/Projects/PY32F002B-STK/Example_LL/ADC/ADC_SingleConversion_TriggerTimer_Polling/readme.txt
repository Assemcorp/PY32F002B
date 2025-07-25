================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates the TIM triggr function and polling function of the ADC.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program and run it
2. USART printf conversation data of the channel 4(PA7) once per 1s

================================================================================
Notes:
Connect the PC to the STK board through the USB to TTL module, the connection
between the STK board and the USB to TTL module is as follows:
STK board      USB to TTL module
PB4(TX)    --> RX
PB5(RX)    --> TX
GND        --> GND
================================================================================