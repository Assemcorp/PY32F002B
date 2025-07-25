================================================================================
                             Sample Description
================================================================================

Function descriptions:
This example demonstrates the use of TIM1 to generate a "six step PWM signal", 
which triggers commutation in the SysTick interrupt every 1ms to achieve 
commutation of a brushless motor

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program to MCU and run it
2. Use Logic analyzer to observe the waveform of pin PA5/PB2/PA3/PB1/PA4/PB0

================================================================================
Notes:
The commutation steps and waveforms are as follows:
                Step1   Step2   Step3   Step4   Step5   Step6
CH1               1       0       0      0        0       1        
CH1N              0       0       1      1        0       0        
CH2               0       0       0      1        1       0        
CH2N              1       1       0      0        0       0        
CH3               0       1       1      0        0       0        
CH3N              0       0       0      0        1       1        

CH1  (PA05)   |||||||_________________________________|||||||
CH1N (PB02)   _______________||||||||||||||||________________
                                  
CH2  (PA03)   _______________________||||||||||||||||________
CH2N (PB01)   |||||||||||||||________________________________
                                  
CH3  (PA04)   _______||||||||||||||||________________________
CH3N (PB00)   ________________________________|||||||||||||||

================================================================================