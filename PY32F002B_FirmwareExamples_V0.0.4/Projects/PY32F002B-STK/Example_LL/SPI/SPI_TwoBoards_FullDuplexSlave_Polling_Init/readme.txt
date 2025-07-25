================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates how to use the Serial Peripheral Interface (SPI) to
communicate with an external device in full-duplex serial mode(using polling
to process the data).This interface is set as the master mode, providing
communication clock SCK to the external slave device.The host sends data through
the MOSI pin and receives data from the slave through the MISO pin.The data is
shifted synchronously at the SCK edge provided by the host to complete full-duplex
communication.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Select two PY32L020_STK boards, one as the host and one as the slave
2. Compile and download the host program SPI_TwoBoards_FullDuplexMaster_Polling_Init
3. Compile and download the slave program SPI_TwoBoards_FullDuplexSlave_Polling_Init
4. Connect the host and slave pins as follows (the arrows point to indicate the
direction of signal transmission)
MASTER：         SLAVE：
SCK(PB2)   ----->    SCK(PB2)
MISO(PA1)  <-----    MISO(PA1)
MOSI(PA7)  ----->    MOSI(PA7)
GND          <----->   GND
5. connect the PC to the STK board via the USB to TTL module, the connection
between the STK board and the USB to TTL module is as follows:
STK board     USB to TTL module
PB4(TX)  -->  RX
PB5(RX)  -->  TX
GND      -->  GND
6. Power on the master and slave
7. Press the slave reset button to run the slave program first, then press the
host user button to run the host program
8. Observe the serial assistant, if both master and slave serial assistant receive
"SPI transfer succeeded", the communication is successful;
If the master and slave serial assistant receive "SPI Transfer Error",the
communication fails.

================================================================================

Notes:
1. You must first press the slave reset button to make the slave program run first,
and then press the host user button to start running the host program, otherwise it
will cause the master-slave communication failure.
2. The IO control mode can be set to DMA mode, interrupt mode and polling mode by
the program in the master mode.
3. NSS pins only need to be connected when using the NSS hardware mode (this sample
uses the NSS software mode, no need to connect the NSS pins)
4. The LED pin on the board is PA1, which is the same as the SPI_MISO pin, and can
no longer use LEDs to indicate the status of communication success or failure.

================================================================================
