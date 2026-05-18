/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define INDICADOR_Pin GPIO_PIN_13
#define INDICADOR_GPIO_Port GPIOC
#define CONT_RED_Pin GPIO_PIN_13
#define CONT_RED_GPIO_Port GPIOB
#define INICIO_PLANTA_Pin GPIO_PIN_15
#define INICIO_PLANTA_GPIO_Port GPIOB
#define CONT_MOTOR_Pin GPIO_PIN_8
#define CONT_MOTOR_GPIO_Port GPIOA
#define aux_Pin GPIO_PIN_11
#define aux_GPIO_Port GPIOA
#define CAL_Pin GPIO_PIN_12
#define CAL_GPIO_Port GPIOA
#define red_Pin GPIO_PIN_15
#define red_GPIO_Port GPIOA
#define planta_Pin GPIO_PIN_3
#define planta_GPIO_Port GPIOB
#define config_Pin GPIO_PIN_4
#define config_GPIO_Port GPIOB
#define info_Pin GPIO_PIN_5
#define info_GPIO_Port GPIOB
#define selec_Pin GPIO_PIN_8
#define selec_GPIO_Port GPIOB
#define atras_Pin GPIO_PIN_9
#define atras_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
