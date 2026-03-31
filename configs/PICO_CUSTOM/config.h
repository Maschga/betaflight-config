#pragma once

#define FC_TARGET_MCU RP2350A
#define BOARD_NAME PICO_CUSTOM
#define MANUFACTURER_ID RASP

// mpu6050
#define I2C_DEVICE I2CDEV_0
#define I2C0_SDA_PIN PA20
#define I2C0_SCL_PIN PA21

#define USE_GYRO
#define USE_I2C_GYRO
#define USE_GYRO_MPU6050
#define GYRO_I2C_INSTANCE I2CDEV_0

#define USE_ACC
#define USE_ACC_MPU6050

// motors
#define MOTOR1_PIN PA10
#define MOTOR2_PIN PA11
#define MOTOR3_PIN PA12
#define MOTOR4_PIN PA13

// receiver
#define PIOUART0_TX_PIN PA0
#define PIOUART0_RX_PIN PA1

// gps + magnetometer
#define USE_GPS
#define USE_GPS_PLUS_CODES
#define UART1_TX_PIN PA8
#define UART1_RX_PIN PA9
#define GPS_UART SERIAL_PORT_UART1

#define USE_MAG
#define I2C1_SDA_PIN PA6
#define I2C1_SCL_PIN PA7
#define MAG_I2C_INSTANCE I2CDEV_1
