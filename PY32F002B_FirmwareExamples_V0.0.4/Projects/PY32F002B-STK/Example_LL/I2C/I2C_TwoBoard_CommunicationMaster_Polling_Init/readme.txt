================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates that I2C communicates with polling mode, the host first
sends 15byte data to the slave, and then receives 15byte data from the slave.
After the host and slave successfully receive data, the LEDs on the host and slave
board are in the state of "steady on".

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program and run it
2. Reset the slave and then the master
3. After the reset is complete, press the user button of the host to start
communication between the master and slave
4. Observe the LED of the master and slave. When the LED lights of the master and
slave turn from off to steady on, it indicates that the master and slave receive
and send data successfully; When the LED of the host or slave is blinking, it
indicates that the host or slave fails to receive and or data.

================================================================================
Notes:
PB3     ------> I2C_SCL
PB4     ------> I2C_SDA
Master program name:I2C_TwoBoard_CommunicationMaster_Polling_Init
Slave program name:I2C_TwoBoard_CommunicationSlave_IT_Init
I2C_SPEEDCLOCK can be modified to change the communication frequency
================================================================================