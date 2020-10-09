#pragma once

#define PINOUT_MQ2_INPUT A3

#define PINOUT_RAIN_SENSOR_INPUT A0

#define PINOUT_LIGHT_SENSOR_INPUT A1

#define PINOUT_EARTH_HUMIDITY_SENSOR_INPUT A2

#define PINOUT_DHT22_INPUT 9

//#define PINOUT_NOVA_PM_SENSOR_PWM_25 2
//#define PINOUT_NOVA_PM_SENSOR_PWM_10 6

#define PINOUT_NOVA_PM_SENSOR_TX 6
#define PINOUT_NOVA_PM_SENSOR_RX 2

#define PINOUT_POWER_MOSFET_SWITCH 5

#define PINOUT_WIND_SPEED_SENSOR_INTERRUPT 3

#if ENABLED(SD_SUPPORT)
#define PINOUT_SD_CS 4
#endif

#if ENABLED(RADIO_SUPPORT)
#define PINOUT_RADIO_CE 7
#define PINOUT_RADIO_CSN 8
#endif