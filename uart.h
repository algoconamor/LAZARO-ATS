/*
 * uart.h
 *
 *  Created on: 26/04/2026
 *      Author: Usuario
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "main.h"



void uartx_write(UART_HandleTypeDef *huart,uint8_t ch);
void uartx_write_text(UART_HandleTypeDef *huart, uint8_t *info);
uint8_t uartx_read(UART_HandleTypeDef *huart);
void uartx_read_text(UART_HandleTypeDef *huart,uint8_t  *info,const uint8_t final,uint8_t cuanto);


#endif /* INC_UART_H_ */
