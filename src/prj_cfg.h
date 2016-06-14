#ifndef _PRJ_CFG_H
#define _PRJ_CFG_H

#define CFG_USE_TEENSY

//#define CFG_USE_RPI 1

//#define CFG_USE_TM1638 1
//#define CFG_USE_LEDS 1
//#define CFG_USE_BUTTONS 1
//#define CFG_USE_I2C 1
//#define CFG_USE_LCD 1
#define CYCLE_TIME_IN_MICROS 2000L
#define CYCLE_SECURITY_TIME_MICROS 100L
#define CFG_MAX_TIMER 20000000L
//#define CFG_USE_RGB_LEDS 1

#define CFG_USE_MOTORCTRL 1
#ifdef CFG_USE_MOTORCTRL

#define CFG_MOTORCTRL_DIR_QUIET 0
#define CFG_MOTORCTRL_DIR_FW 1
#define CFG_MOTORCTRL_DIR_BW 2

#define CFG_MOTORCTRL_PWM_FW_PIN 5
#define CFG_MOTORCTRL_PWM_BW_PIN 6

#define CFG_MOTORCTRL_IN3_PIN 0
#define CFG_MOTORCTRL_IN4_PIN 1

#define CFG_MOTORCTRL_WAIT_TIME_BEFORE 1000000L
#define CFG_MOTORCTRL_WAIT_TIME_AFTER 1000000L
#define CFG_MOTORCTRL_PWM_INCR_TIME 20000L
#define CFG_MOTORCTRL_PWM_DUTY_STOP_FW 0
#define CFG_MOTORCTRL_PWM_DUTY_STOP_BW 10
#define CFG_MOTORCTRL_PWM_DUTY_MIN_FW 30
#define CFG_MOTORCTRL_PWM_DUTY_MIN_BW 30
#define CFG_MOTORCTRL_PWM_DUTY_MAX_FW 245
#define CFG_MOTORCTRL_PWM_DUTY_MAX_BW 245
#define CFG_MOTORCTRL_PWM_DUTY_HALF 128
#define CFG_MOTORCTRL_PWM_DUTY_DELTA (-1)

#ifdef CFG_USE_TEENSY
#define CFG_MOTORCTRL_FREQUENCY 100
#else
#define CFG_MOTORCTRL_PWM_FW_DIV 1024   // Connected to ENB
#define CFG_MOTORCTRL_PWM_BW_DIV 1024
#endif

#endif

#endif /* _PRJ_CFG_H */
