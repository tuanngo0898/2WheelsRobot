#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>

#include "driverlib/pin_map.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/i2c.h"
#include "driverlib/interrupt.h"


#ifndef MPU6050_I2C_LIB
#define MPU6050_I2C_LIB

#define MPU6050_I2C                 SYSCTL_PERIPH_I2C1
#define MPU6050_I2C_GPIO            SYSCTL_PERIPH_GPIOA
#define MPU6050_I2C_SCL             GPIO_PA6_I2C1SCL
#define MPU6050_I2C_SDA             GPIO_PA7_I2C1SDA
#define MPU6050_I2C_GPIO_BASE       GPIO_PORTA_BASE
#define MPU6050_GPIO_SCL            GPIO_PIN_6
#define MPU6050_GPIO_SDA            GPIO_PIN_7
#define MPU6050_I2C_BASE            I2C1_BASE


void I2C_Init(void);
void I2C_Write_Data(uint8_t addr, uint8_t regAddr, uint8_t *data, uint8_t length);
void I2C_Write(uint8_t addr, uint8_t regAddr, uint8_t data);
void I2C_Read_Data(uint8_t addr, uint8_t regAddr, uint8_t *data, uint8_t length);
uint8_t I2C_Read(uint8_t addr, uint8_t regAddr);

#endif