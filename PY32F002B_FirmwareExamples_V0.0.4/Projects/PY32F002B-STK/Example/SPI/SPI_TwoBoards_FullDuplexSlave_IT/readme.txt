================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example is a demonstration of using interrupts to communicate with the
serial peripheral interface (SPI) and external devices in a full duplex serial
mode. This interface is set as the main mode and provides communication clock
SCK for external slave devices. The master sends data through the MOSI pin and
receives data from the slave through the MISO pin. The data is synchronously
shifted along the SCK provided by the master, completing full duplex communication.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1.Select two PY32F002B blocks_ STK board, one as the master and one as the slave
2.Compile and download master program SPI_TwoBoards_FullDuplexMaster_IT_Init
3.Compile and download slave program SPI_TwoBoards_FullDuplexSlave_IT_Init
4.Connection between the master and slave pins (arrow pointing in the direction
of signal transmission)
MASTER：         SLAVE：
SCK(PB2)   ----->    SCK(PB2)
MISO(PA1)  <-----    MISO(PA1)
MOSI(PA7)  ----->    MOSI(PA7)
NSS(PA6)   ----->    NSS(PA6)
GND        <----->   GND
5.Connect the PC to the STK board through the USB to TTL module, and the
connection method between the STK board and the USB to TTL module is as follows:
STK board        USB to TTL module
PB4(TX)  -->  RX
PB5(RX)  -->  TX
GND      -->  GND
6.Powering on the master and slave machines
7.Press the slave reset button to run the slave program first, and then press
the master user button to run the master program
8.Observe the serial port assistant, and if both the master and slave serial
port assistants receive "SPI transfer succeeded", the communication is
successful; If the master and slave serial port assistants receive an
"SPI Transfer Error", communication fails.

================================================================================
Notes:
1.You must first press the slave reset button to run the slave program first,
and then press the master user button to start running the master program, otherwise
it will cause communication failure between the master and slave machines.
2.The NSS pin only needs to be connected when using NSS hardware mode
(this example uses NSS hardware mode)
3.The LED light pin on the board is PA1, which matches the SPI_ The MISO pins
are the same, and LED cannot be used to indicate the status of successful or
failed communication.
================================================================================