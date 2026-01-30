/**
 * @file drv_bsp.h
 * @author zomnk
 * @brief f405驱动板的板级支持包
 * @version 0.1
 * @date 2026-01-26
 *
 * @copyright USTC-RoboWalker (c) 2022
 *
 */

#ifndef DRV_BSP_H
#define DRV_BSP_H

/* Includes ------------------------------------------------------------------*/

#include "stm32f4xx_hal.h"

/* Exported macros -----------------------------------------------------------*/

//初始化LED和BEEP被按位或的参数
#define BSP_LED_1_ON (1 << 0)
#define BSP_LED_2_ON (1 << 1)
#define BSP_BEEP_ON  (1 << 2)

/* Exported types ------------------------------------------------------------*/

/**
 * @brief 板上LED工作状态
 *
 */
enum Enum_BSP_LED_Status
{
    BSP_LED_Status_ENABLED = 1,
    BSP_LED_Status_DISABLED = 0,
};

/**
 * @brief 板上BEEP工作状态
 *
 */
enum Enum_BSP_BEEP_Status
{
    BSP_BEEP_Status_ENABLED = 1,
    BSP_BEEP_Status_DISABLED = 0,
};

/* Exported variables --------------------------------------------------------*/

/* Exported function declarations --------------------------------------------*/

void BSP_Init(uint32_t Status, float IMU_Heater_Rate = 0, float Buzzer_Rate = 0);

void BSP_LED_1(Enum_BSP_LED_Status Status);
void BSP_LED_2(Enum_BSP_LED_Status Status);
void BSP_BEEP(Enum_BSP_BEEP_Status Status);

#endif

/************************ COPYRIGHT(C) USTC-ROBOWALKER **************************/
