================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates that I2C(as master and as slave) communicates with polling
mode.Press the user key of the slave board first and then press the user key of the
host board,the master I2C will send "LED ON" data to the slave I2C.When the master
I2C successfully sends data and the slave I2C successfully receives data, the LED
lights on the host board and slave board respectively.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Comment out the macro definition of main.h "#define SLAVE_BOARD", compile and
download the program to MCU(as master), and run it; Release main.h macro definition
"#define SLAVE_BOARD", compile download program to MCU(as slave), and run;
2. Reset the slave and then the master
3. After the reset is completed, first press the user button of the slave board and
then press the user button of the host board, Communication will start
4. When the master I2C successfully sends data and the slave I2C successfully receives
data, the LED lights on the host board and slave board respectively. Otherwise,
the LED light is blinking

================================================================================
Notes:
PA9     ------> I2C_SCL
PA10    ------> I2C_SDA
================================================================================