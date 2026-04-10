#include "init.h"
#include "py32f002b_hal_tim.h"
#include "py32f002b_hal_gpio_ex.h"

TIM_HandleTypeDef htim1;

void APP_ClockConfig(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  RCC_OscInitStruct.OscillatorType      = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState            = RCC_HSI_ON;
  RCC_OscInitStruct.HSIDiv              = RCC_HSI_DIV1;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_24MHz;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) { Error_Handler(); }

  RCC_ClkInitStruct.ClockType      = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                   | RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource   = RCC_SYSCLKSOURCE_HSISYS;
  RCC_ClkInitStruct.AHBCLKDivider  = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK) { Error_Handler(); }
}

void APP_GpioConfig(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /* Configure GPIO pins : 2,1,0 */
  GPIO_InitStruct.Pin = GPIO_PIN_2 | GPIO_PIN_1 | GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/**
 * @brief  Configures LED pins as output.
 */
void APP_GpioConfig_Led(GPIO_TypeDef *port, uint16_t pin)
{
  if (port == GPIOB)
    __HAL_RCC_GPIOB_CLK_ENABLE();
  if (port == GPIOA)
    __HAL_RCC_GPIOA_CLK_ENABLE();

  GPIO_InitTypeDef GPIO_InitStruct = {0};
  GPIO_InitStruct.Pin = pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(port, &GPIO_InitStruct);
}

/**
 * @brief  Configures button pins as input.
 */
void APP_GpioConfig_Button(GPIO_TypeDef *port, uint16_t pin)
{
  if (port == GPIOB)
    __HAL_RCC_GPIOB_CLK_ENABLE();
  if (port == GPIOA)
    __HAL_RCC_GPIOA_CLK_ENABLE();

  GPIO_InitTypeDef GPIO_InitStruct = {0};
  GPIO_InitStruct.Pin = pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(port, &GPIO_InitStruct);
}

/**
 * @brief  Turns on the LED(s).
 */
void LED_On(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
  HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_SET);
}

/**
 * @brief  Turns off the LED(s).
 */
void LED_Off(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
  HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_RESET);
}

/**
 * @brief  Reads the button state.
 * @retval 1 if pressed, 0 otherwise
 */
uint8_t Button_Read(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
  return (HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_SET) ? 1 : 0;
}

/**
 * @brief  Configures LCD pins as output.
 */
void APP_LCD_GpioConfig(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /* Configure LCD pins */
  GPIO_InitStruct.Pin = LCD_RS_PIN | LCD_EN_PIN | LCD_D4_PIN | LCD_D5_PIN | LCD_D6_PIN | LCD_D7_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}

void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}

