/*
 * uart_int_idle_dma.c
 *
 *  Created on: 17/05/2026
 *      Author: Usuario
 */


//COMO USAR



//en el uart_int_dma.h   definir puerto a usar
/*
 // si tiene otra variable para la trama definala sino no.
 #define trama_rx  Trama_RX // nombre de la trama a usar
#define uartdatosreg USART1   //define puerto serial a analizar
#define uartdatos huart1
*/





//en el void main antes del while(1) poner
/*
uartdat_it_idle_dma_init();
 */

//en el while poner
      /*
      if(flag_rx==1)
       {
		  procesarx();
		  flag_rx=0;
		 uartdat_it_idle_dma_init();
		 }

*/
// y debe haber un procedimiento llamado procesa_rx()  en el main
//que procesa los datos recibidos



/* USER CODE END Includes */
#include <uart_int_idle_dma.h>
#include "main.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"


uint8_t trama_rx[trama_size];
char flag_rx=0;
uint16_t num_datos;
char procesa[trama_size];



void  uartdat_it_idle_dma_init()
{
    memset(trama_rx,0,trama_size);//limpia el  buffer
    HAL_UARTEx_ReceiveToIdle_DMA(&uartdatos, (uint8_t*)trama_rx, trama_size);//inica la recepcion por idle
}


//procedimiento de  idle para recepcion serial
void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef *huart, uint16_t Size)
{
	if (huart->Instance == uartdatosreg)//si es el uart de datos
	{
	  num_datos=Size;
	  flag_rx=1;
   }

}
