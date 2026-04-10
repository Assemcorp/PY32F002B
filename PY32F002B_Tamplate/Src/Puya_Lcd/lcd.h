/**
  ******************************************************************************
  * @file    lcd.h
  * @brief   LCD driver header
  * @author  AssemCorp Application Team - [emre.karabek@assemcorp.com]
  ******************************************************************************
  */
#ifndef LCD_H
#define LCD_H

#include "main.h"


#define firstLine     	0
#define secondLine     	1
#define firstCol     	0
// LCD commands
#define LCD_CLEAR              0x01
#define LCD_HOME               0x02
#define LCD_ENTRY_MODE_SET     0x04
#define LCD_DISPLAY_CONTROL    0x08
#define LCD_CURSOR_SHIFT       0x10
#define LCD_FUNCTION_SET       0x20
#define LCD_SET_CG_RAM_ADDR    0x40
#define LCD_SET_DD_RAM_ADDR    0x80

// Function prototypes
void LCD_Init(void);
void LCD_SendCommand(uint8_t command);
void LCD_SendData(uint8_t data);
void LCD_Clear(void);
void LCD_SetCursor(uint8_t row, uint8_t column);
void LCD_PrintString(char *str);
void LCD_Print(char *str);
void LCD_PrintNumber(int number);

#endif // LCD_H

