/**
  ******************************************************************************
  * @file    lcd.c
  * @brief   LCD driver implementation
  * @author  AssemCorp Application Team - [emre.karabek@assemcorp.com]
  ******************************************************************************
  */
#include "lcd.h"
#include "init.h"

static void LCD_Enable(void);
static void LCD_Send4Bits(uint8_t data);
void LCD_SendCommand(uint8_t cmd);
void LCD_SendData(uint8_t data);

static void LCD_GPIO_Init(void)
{
    __HAL_RCC_GPIOB_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Pin = LCD_RS_PIN | LCD_EN_PIN | LCD_D4_PIN | LCD_D5_PIN | LCD_D6_PIN | LCD_D7_PIN;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}

void LCD_Init(void)
{
    LCD_GPIO_Init();
    HAL_Delay(40);

    LCD_Send4Bits(0x03); HAL_Delay(5);
    LCD_Send4Bits(0x03); HAL_Delay(5);
    LCD_Send4Bits(0x03); HAL_Delay(1);
    LCD_Send4Bits(0x02); HAL_Delay(1);

    LCD_SendCommand(0x28); // 4-bit, 2 line, 5x8 font
    LCD_SendCommand(0x0C); // Display ON, Cursor OFF
    LCD_SendCommand(0x06); // Entry mode
    LCD_SendCommand(0x01); // Clear display
    HAL_Delay(2);
}

void LCD_SetCursor(uint8_t row, uint8_t col)
{
    uint8_t addr = (row == 0) ? 0x00 : 0x40;
    LCD_SendCommand(0x80 | (addr + col));
}

void LCD_Print(char *str)
{
    while (*str)
    {
        LCD_SendData((uint8_t)(*str));
        str++;
    }
}

static void LCD_Send4Bits(uint8_t data)
{
    HAL_GPIO_WritePin(LCD_D4_GPIO_PORT, LCD_D4_PIN, ((data >> 0) & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LCD_D5_GPIO_PORT, LCD_D5_PIN, ((data >> 1) & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LCD_D6_GPIO_PORT, LCD_D6_PIN, ((data >> 2) & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LCD_D7_GPIO_PORT, LCD_D7_PIN, ((data >> 3) & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    LCD_Enable();
}

static void LCD_Enable(void)
{
    HAL_GPIO_WritePin(LCD_EN_GPIO_PORT, LCD_EN_PIN, GPIO_PIN_SET);
    HAL_Delay(1);
    HAL_GPIO_WritePin(LCD_EN_GPIO_PORT, LCD_EN_PIN, GPIO_PIN_RESET);
    HAL_Delay(1);
}

void LCD_SendCommand(uint8_t cmd)
{
    HAL_GPIO_WritePin(LCD_RS_GPIO_PORT, LCD_RS_PIN, GPIO_PIN_RESET);
    LCD_Send4Bits(cmd >> 4);
    LCD_Send4Bits(cmd & 0x0F);
    HAL_Delay(2);
}

void LCD_SendData(uint8_t data)
{
    HAL_GPIO_WritePin(LCD_RS_GPIO_PORT, LCD_RS_PIN, GPIO_PIN_SET);
    LCD_Send4Bits(data >> 4);
    LCD_Send4Bits(data & 0x0F);
    HAL_Delay(2);
}
void LCD_PrintNumber(int number)
{
    char buffer[17]; // 16 karakter + null karakter
    sprintf(buffer, "%d", number);
    LCD_Print(buffer);
}

