/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32H743

#define BOARD_NAME        OFCH743MINIV1.1
#define MANUFACTURER_ID   CUST

#define USE_GYRO
#define USE_GYRO_CLKIN
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_M25P16

#define MOTOR1_PIN           PE14
#define MOTOR2_PIN           PE11
#define MOTOR3_PIN           PE13
#define MOTOR4_PIN           PE9
#define UART1_TX_PIN         PB14
#define UART2_TX_PIN         PD5
#define UART3_TX_PIN         PD8
#define UART5_TX_PIN         PC12
#define UART1_RX_PIN         PB15
#define UART2_RX_PIN         PD6
#define UART3_RX_PIN         PD9
#define UART4_RX_PIN         PD0 // Telemetry
#define UART5_RX_PIN         PD2
#define UART6_RX_PIN         PC7 // SBUS
#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9
#define LED0_PIN             PE2
#define SPI1_SCK_PIN         PA5
#define SPI3_SCK_PIN         PB3
#define SPI1_SDI_PIN         PA6
#define SPI3_SDI_PIN         PB4
#define SPI1_SDO_PIN         PA7
#define SPI3_SDO_PIN         PB5
#define ADC_VBAT_PIN         PC0
#define ADC_CURR_PIN         PC1
#define PINIO1_PIN           PE3
#define FLASH_CS_PIN         PA15
#define GYRO_1_EXTI_PIN      PC4
#define GYRO_1_CS_PIN        PA4
#define GYRO_1_CLKIN_PIN     PA3
#define LED_STRIP_PIN        PD12
#define BEEPER_PIN           PC8

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP(0, PE14, 1, 0)  /* MOTOR1,      TIM1 CH4 */ \
    TIMER_PIN_MAP(1, PE11, 1, 1)  /* MOTOR2,      TIM1 CH2 */ \
    TIMER_PIN_MAP(2, PE13, 1, 2)  /* MOTOR3,      TIM1 CH3 */ \
    TIMER_PIN_MAP(3, PE9 , 1, 3)  /* MOTOR4,      TIM1 CH1 */ \
    TIMER_PIN_MAP(4, PA3 , 1, -1) /* GYRO1_CLKIN, TIM2 CH4 */ \
    TIMER_PIN_MAP(5, PC8 , 1, -1) /* BEEPER,      TIM3 CH2 */ \
    TIMER_PIN_MAP(6, PD12, 1, 4)  /* LED_STRIP,   TIM4 CH1 */

#define ADC1_DMA_OPT        8
#define ADC3_DMA_OPT        9

#define BARO_I2C_INSTANCE I2CDEV_1
#define MAG_I2C_INSTANCE I2CDEV_1

#define DEFAULT_BLACKBOX_DEVICE      BLACKBOX_DEVICE_FLASH
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define PINIO1_CONFIG 129
#define PINIO1_BOX    40
#define FLASH_SPI_INSTANCE  SPI3
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN        CW180_DEG
#define DEFAULT_DSHOT_BITBANG        DSHOT_BITBANG_ON

