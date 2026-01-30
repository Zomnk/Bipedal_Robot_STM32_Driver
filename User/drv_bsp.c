/**
 * @file drv_bsp.c
 * @author zomnk
 * @brief f405驱动板的板级支持包
 * @version 0.1
 * @date 2026-01-26
 *
 * @copyright USTC-RoboWalker (c) 2022
 *
 */

/* Includes ------------------------------------------------------------------*/

#include "drv_bsp.h"

/* Private macros ------------------------------------------------------------*/

/* Private types -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function declarations ---------------------------------------------*/

/* Function prototypes -------------------------------------------------------*/

/**
 * @brief 初始化全部板级支持包引脚
 *
 * @param Status 各个状态的按位或
 */
void BSP_Init(uint32_t Status, float IMU_Heater_Rate, float Buzzer_Rate)
{
    BSP_LED_1(static_cast<Enum_BSP_LED_Status>((Status & BSP_LED_1_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
    BSP_LED_2(static_cast<Enum_BSP_LED_Status>((Status & BSP_LED_2_ON) == 0 ? BSP_LED_Status_DISABLED : BSP_LED_Status_ENABLED));
}

/**
 * @brief 1号LED
 *
 * @param Status 状态
 */
void BSP_LED_1(Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, static_cast<GPIO_PinState>(Status));
}

/**
 * @brief 2号LED
 *
 * @param Status 状态
 */
void BSP_LED_2(Enum_BSP_LED_Status Status)
{
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, static_cast<GPIO_PinState>(Status));
}

/**
 * @brief BEEP
 *
 * @param Status 状态
 */
void BSP_BEEP(Enum_BSP_BEEP_Status Status)
{
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, static_cast<GPIO_PinState>(Status));
}

/************************ COPYRIGHT(C) USTC-ROBOWALKER **************************/
