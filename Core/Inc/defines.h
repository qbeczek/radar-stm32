/*
 * defines.h
 *
 *  Created on: 3 mar 2022
 *      Author: KUBA
 */

#ifndef INC_DEFINES_H_
#define INC_DEFINES_H_

#include "gpio.h"

/* DEFINE LED CONTROL */
#define green_led_on    HAL_GPIO_WritePin(LD2_GREEN_GPIO_Port, LD2_GREEN_Pin, GPIO_PIN_SET);
#define green_led_off   HAL_GPIO_WritePin(LD2_GREEN_GPIO_Port, LD2_GREEN_Pin, GPIO_PIN_RESET);
#define green_led_tog   HAL_GPIO_TogglePin(LD2_GREEN_GPIO_Port, LD2_GREEN_Pin);


#endif /* INC_DEFINES_H_ */
