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

#define CFG_MOTORCTRL_IN3_PIN 8
#define CFG_MOTORCTRL_IN4_PIN 7
#define CFG_MOTORCTRL_PWM_PIN 6
#define CFG_MOTORCTRL_DEBUGPWM_PIN 5

#define CFG_MOTORCTRL_WAIT_TIME_BEFORE 1000000L
#define CFG_MOTORCTRL_WAIT_TIME_AFTER 1000000L
#define CFG_MOTORCTRL_PWM_INCR_TIME 20000L
#define CFG_MOTORCTRL_PWM_DUTY_STOP 0
#define CFG_MOTORCTRL_PWM_DUTY_MIN 30
#define CFG_MOTORCTRL_PWM_DUTY_MAX 245
#define CFG_MOTORCTRL_PWM_DUTY_HALF 128
#define CFG_MOTORCTRL_PWM_DUTY_DELTA (-1)

#define CFG_LED_STATUS 13

#ifdef CFG_USE_TEENSY
#define CFG_MOTORCTRL_FREQUENCY 100
#else
#define CFG_MOTORCTRL_PWM_FW_DIV 1024   // Connected to ENB
#define CFG_MOTORCTRL_PWM_BW_DIV 1024
#endif

#endif

#define CFG_USE_BCDPOT 1
#ifdef CFG_USE_BCDPOT
#define CFG_BCDPOT_PIN_NUMBER 4
#endif

#define CFG_USE_SLIDER 1
#ifdef CFG_USE_SLIDER
#define CFG_SLIDER_DTB_PIN 23
#define CFG_SLIDER_DTA_PIN 22
#endif

//#define CFG_USE_STEPPER 1
#ifdef CFG_USE_STEPPER
/* Sanyo Denki funciona mejor a 5V con corrientes de 0.126 A, step angle 0.8 (200 steps x revolution) */
/* zapp automation funciona a 3.8V, corrientes (teóricas) 0,67 A, step angle 0.8 (200 steps x revolution) */
#define CFG_STEP_X_REVOLUTION 200 // para el zapp automation // 200 para el sanyo denki // 400 para el grande 
#define CFG_STEP_X_RPM 200 // para el zapp automation // 200 para el sanyo denki
#define CFG_STEP_IN1_PIN 14
#define CFG_STEP_IN2_PIN 15
#define CFG_STEP_IN3_PIN 16
#define CFG_STEP_IN4_PIN 17
#endif

#define CFG_USE_ACCELSTEPPER
#ifdef CFG_USE_ACCELSTEPPER
#define CFG_ACCELSTEPPER_STATUS_QUIET 0
#define CFG_ACCELSTEPPER_STATUS_MOVING 1
#define CFG_ACCELSTEPPER_POS 2000                     // 2000 para zapp (arbitrario)
#define CFG_ACCELSTEPPER_ACCEL 3000.0  // 1000 para zapp  // 2000 a 4000 para sanyo denki

#define CFG_ACCELSTEPPER_SPEED_SLIDERA_FACTOR (0.6)  // 0.3 para zapp  // 0.6 para Sanyo Denki
#define CFG_ACCELSTEPPER_SPEED_SLIDERA_OFFSET (860.0)  // 550.0 para zapp // 860 para Sanyo Denki

#endif

#define CFG_USE_ENDSWITCH_1 1
#ifdef CFG_USE_ENDSWITCH_1
#define CFG_ENDSWITCH1_PIN 15
#endif

#endif /* _PRJ_CFG_H */
