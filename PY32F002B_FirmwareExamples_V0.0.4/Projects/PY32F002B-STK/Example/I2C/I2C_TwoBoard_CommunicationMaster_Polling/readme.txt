================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates I2C communication through polling. The host first
sends 15byte data to the slave, and then receives the 15byte data sent by the
slave. After the host and slave receive the data successfully, the small lights
on the host and slave boards are in a "constantly on" state.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1.Compile and download the program to MCU and run it
2.First reset the slave, then reset the host
3.After resetting, press the host user button to start communication between the
master and slave
4.Observe the LED lights of the master and slave machines. When the LED lights
of the master and slave machines change from normally dark to normally on, it
indicates that the master and slave machines have successfully transmitted and
received data; When the LED light of the host or slave is in a flashing state,
it indicates that the host or slave has failed to transmit and receive data.

================================================================================

Notes:
PB03     ------> I2C_SCL
PB04    ------> I2C_SDA 
The master program is I2C_TwoBoard_CommunicationMaster_Polling
Slave program is I2C_TwoBoard_CommunicationSlave_IT
If you need to modify the rate, directly modify I2C_SPEEDCLOCK is sufficient.

================================================================================