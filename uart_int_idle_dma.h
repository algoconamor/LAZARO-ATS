/*
 * uart_int_idle_dma.h
 *
 *  Created on: 17/05/2026
 *      Author: Usuario
 */


#include "main.h"

#define trama_rx  trama_rx // nombre de la trama a usar
#define uartdatosreg USART1   //define puerto serial a analizar
#define uartdatos huart1
# define trama_size 2  //coloque el tamaño del buffer



extern char flag_rx;
extern uint16_t num_datos;
extern uint8_t trama_rx[];
extern  char procesa[];



#ifndef INC_UART_INT_IDLE_DMA_H_
#define INC_UART_INT_IDLE_DMA_H_


extern UART_HandleTypeDef uartdatos;

void uartdat_it_idle_dma_init();


#endif /* INC_UART_INT_IDLE_DMA_H_ */
