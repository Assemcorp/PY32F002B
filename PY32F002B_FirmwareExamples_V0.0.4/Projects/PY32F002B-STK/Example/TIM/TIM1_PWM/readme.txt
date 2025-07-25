================================================================================
                             Sample Description
================================================================================

Function descriptions:
This routine outputs 4 PWM channels, with a duty cycle of 20% for channel 1, 
40% for channel 2, 60% for channel 3, and 80% for channel 4
The cycle of this routine is 24000000/2000/1200=10Hz.

================================================================================

Test environment:
Test board: PY32F002B_STK
MDK Version: 5.28
IAR Version: 9.20

================================================================================

Example execution steps:
1. Compile and download the program;
2. Use logic or oscilloscope to connect the four channels PA5 (TIM1_CH1)，
PB0 (TIM1_CH2), PA4 (TIM1_CH3), and PA7 (TIM1_CH4)
3. Upon inspection, it was found that the cycle is 10Hz and the duty cycle is 
20%, 40%, 60%, and 80% respectively

================================================================================
Notes:
PA5------>CH1 20%
PB0------>CH2 40%
PA4------>CH3 60%
PA7------>CH4 80%
================================================================================