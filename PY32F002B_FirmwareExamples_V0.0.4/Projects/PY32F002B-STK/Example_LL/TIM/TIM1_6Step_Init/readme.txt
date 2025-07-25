================================================================================
                                Sample Description
================================================================================

Function descriptions:
This sample demonstrates how TIM1 can be used to generate a "six-step PWM signal."
The commutation is triggered in the SysTick interrupt every 1ms to realize the
commutation of the brushless motor.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. compile and download the program to MCU and run it;
2. Observe PA5/PB2/PA3/PB1/PA4/PB0 waveforms with logic analyzer

================================================================================
Notes:
The commutation steps and waveforms are shown below:
                step 1  step 2  step 3 step 4   step 5  step 6
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