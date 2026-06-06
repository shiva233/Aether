/**
  ******************************************************************************
  * @file           : mx_gpio_default.h
  * @brief          : Header for mx_gpio_default.c file.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the mx_stm32c5xx_hal_drivers_license.md file
  * in the same directory as the generated code.
  * If no mx_stm32c5xx_hal_drivers_license.md file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MX_GPIO_DEFAULT_H
#define MX_GPIO_DEFAULT_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Includes ------------------------------------------------------------------*/
#include "stm32_hal.h"
#include "mx_def.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/******************************************************************************/
/* Exported defines for gpio_default in HAL layer (SW instance MyGPIO_1) */
/******************************************************************************/

/* Primary aliases for GPIO PC13 pin */
#define MUTE_BTN_PORT                                   HAL_GPIOC
#define MUTE_BTN_PIN                                    HAL_GPIO_PIN_13

/* Primary aliases for GPIO PC14-OSC32_IN(OSC32_IN) pin */
#define BM83_MFB_PORT                                   HAL_GPIOC
#define BM83_MFB_PIN                                    HAL_GPIO_PIN_14

/* Primary aliases for GPIO PC15-OSC32_OUT(OSC32_OUT) pin */
#define BM83_RESET_PORT                                 HAL_GPIOC
#define BM83_RESET_PIN                                  HAL_GPIO_PIN_15

/* Primary aliases for GPIO PE2 pin */
#define PAIR_BTN_PORT                                   HAL_GPIOE
#define PAIR_BTN_PIN                                    HAL_GPIO_PIN_2

/* Exported macros -----------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
/******************************************************************************/
/* Exported functions for gpio_default in HAL layer (SW instance MyGPIO_1) */
/******************************************************************************/
/**
  * @brief mx_gpio_default init function
  * This function configures the hardware resources used in this example
  * @retval 0  GPIO group correctly initialized
  * @retval -1 Issue detected during GPIO group initialization
  */
system_status_t mx_gpio_default_init(void);

/**
  * @brief  De-initialize gpio_default instance.
  */
system_status_t mx_gpio_default_deinit(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MX_GPIO_DEFAULT_H */
