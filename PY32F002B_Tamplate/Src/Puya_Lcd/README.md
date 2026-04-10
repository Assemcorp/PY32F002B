# PUYA LCD Project
# Emre Karabek - AssemCorp

## Overview
This project implements a 2x16 LCD screen interface using a microcontroller. It includes a library for controlling the LCD, allowing for easy integration into applications.

## Project Structure
```
PUYA_Lcd
├── Inc
│   ├── main.h
│   └── lcd.h
├── Src
│   ├── main.c
│   └── lcd.c
├── README.md
```

## File Descriptions

### Inc/main.h
This header file contains the main definitions for the project, including necessary includes and global variable declarations.

### Inc/lcd.h
This header file defines the interface for the LCD library. It includes function prototypes for:
- Initializing the LCD
- Sending commands to the LCD
- Sending data to the LCD
- Controlling the display

It also defines constants for the LCD commands and pin configurations.

### Src/main.c
This is the entry point of the application. It initializes the HAL library, configures the GPIO pins, and contains the main loop that interacts with the LCD.

### Src/lcd.c
This file implements the functions declared in `lcd.h`. It includes the initialization of the LCD, sending commands and data to the LCD, and controlling the display based on the specified pin configurations.

## Setup Instructions
1. Ensure that the STM32 HAL library is properly installed and configured in your development environment.
2. Connect the LCD pins to the specified GPIO pins on the microcontroller:
   - RS - B9
   - EN - B8
   - DN4 - B7
   - DN5 - B6
   - DN6 - B5
   - DN7 - B4
3. Compile the project and upload it to the microcontroller.

## Usage Example
After initializing the LCD in your main application, you can use the provided functions to display text and control the LCD as needed.

## License
This project is licensed under the BSD 3-Clause License. See the LICENSE file for more details.