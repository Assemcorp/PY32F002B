/**
  ******************************************************************************
  * @file    main.c
  * @brief   Main program body
  * @author  AssemCorp Application Team 2026 - [emre.karabek@assemcorp.com]
  ******************************************************************************
  */
#include "main.h"
#include "init.h"
#include "py32f002b_hal_tim.h"
#include "py32f002b_hal_gpio_ex.h"

int main(void)
{
  /* Reset of all peripherals, Initializes the Systick. */
  HAL_Init();
  
  APP_ClockConfig();
#ifdef USE_GPIO
  APP_GpioConfig();
#endif
#ifdef USE_LCD
  APP_LCD_GpioConfig();
  LCD_Init();
#endif

  /* infinite loop */
  while (1)
  {
#ifdef USE_LCD
    LCD_SetCursor(0, 0);
    LCD_Print("    ASSEMCORP   ");
    LCD_SetCursor(1, 0);
    LCD_Print("PUYA PIN CONFIG.");
#endif

#ifdef USE_UART
    // Example UART Task
    // HAL_UART_Transmit(&UartHandle, (uint8_t *)"UART Loop\r\n", 11, 1000);
    // HAL_Delay(1000);
#endif

#ifdef USE_GPIO
    HAL_Delay(500);
#endif

#ifdef USE_INPUT
    // Example Input Task
    // if (Button_Read(GPIOA, GPIO_PIN_7)) { ... }
#endif
  }
}

void APP_ErrorHandler(void)
{
  while (1)
  {
  }
}

#ifdef  USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line)
{
  while (1)
  {
  }
}
#endif
