/******************************************************************************
 * File Name:   radar_config_task.h
 *
 * Description: This file contains the function prototypes and constants used
 *   in radar_config_task.c.
 *
 * Related Document: See README.md
 *
 * ===========================================================================
 * Copyright (C) 2021 Infineon Technologies AG. All rights reserved.
 * ===========================================================================
 *
 * ===========================================================================
 * Infineon Technologies AG (INFINEON) is supplying this file for use
 * exclusively with Infineon's sensor products. This file can be freely
 * distributed within development tools and software supporting such
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES, FOR ANY REASON
 * WHATSOEVER.
 * ===========================================================================
 */

#pragma once

#include "FreeRTOS.h"
#include "task.h"

/*******************************************************************************
 * Macros
 ******************************************************************************/
#define RADAR_CONFIG_TASK_NAME       "RADAR CONFIG TASK"
#define RADAR_CONFIG_TASK_PRIORITY   (5)
#define RADAR_CONFIG_TASK_STACK_SIZE (1024 * 2)

/*******************************************************************************
 * Global Variables
 ******************************************************************************/
extern TaskHandle_t radar_config_task_handle;

/*******************************************************************************
 * Functions
 ******************************************************************************/
void radar_config_task(void *pvParameters);

/* [] END OF FILE */
