#ifndef _PRJ_CFG_H
#define _PRJ_CFG_H


/////// Platform configuration /////////
#define CFG_USE_TEENSY 1
//#define CFG_USE_RPI 1

#define CYCLE_TIME_IN_MICROS 2000L
#define CYCLE_SECURITY_TIME_MICROS 100L
#define CFG_MAX_TIMER 20000000L

//////// Peripherals ///////////

//// Status LED
#define CFG_LED_STATUS 13

//// End of career switches 
#define CFG_USE_ENDSWITCH_1 1
#ifdef CFG_USE_ENDSWITCH_1
#define CFG_ENDSWITCH_1_PIN 20
#endif
#define CFG_USE_ENDSWITCH_2 1
#ifdef CFG_USE_ENDSWITCH_2
#define CFG_ENDSWITCH_2_PIN 21
#endif


//// Doubled input potentiometer slider
#define CFG_USE_SLIDER 1
#ifdef CFG_USE_SLIDER
#define CFG_SLIDER_DTA_PIN 22 // Pin DIO 20
//#define CFG_USE_SLIDER_DTB 1
#ifdef CFG_USE_SLIDER_DTB
#define CFG_SLIDER_DTB_PIN 9 // Pin DIO 23
#endif
#endif

//// BCD Encoder
//#define CFG_USE_BCDPOT 1
#ifdef CFG_USE_BCDPOT
#define CFG_BCDPOT_PIN_NUMBER 4
#define CFG_BCDPOT_PIN1 9
#define CFG_BCDPOT_PIN2 10
#define CFG_BCDPOT_PIN3 11
#define CFG_BCDPOT_PIN4 12
#endif

//// TM1638 or buttons and leds
//#define CFG_USE_TM1638 1
#ifdef CFG_USE_TM1638
// define a module on data pin 11, clock pin 2 and strobe pin 12
#define CFG_TM1638_DATA_PIN 0
#define CFG_TM1638_CLOCK_PIN 1
#define CFG_TM1638_STROBE_PIN 2
#else
//#define CFG_USE_LEDS 1
//#define CFG_USE_BUTTONS 1
#endif

//// LCD
#define CFG_USE_LCD 1
#ifdef CFG_USE_LCD
#ifdef CFG_USE_TM1638
#error "Not possible to use LCD and TM1638"
#endif
#define CFG_LCD_RS_PIN 8
#define CFG_LCD_ENB_PIN 9
#define CFG_LCD_D4_PIN 10
#define CFG_LCD_D5_PIN 5
#define CFG_LCD_D6_PIN 6
#define CFG_LCD_D7_PIN 7
#define CFG_LCD_KEYB_PIN 9 // DIO 23
#endif

//// I2C
//#define CFG_USE_I2C 1

//// RGB leds
//#define CFG_USE_RGB_LEDS 1

//// DC MOTOR CONTROL
//#define CFG_USE_MOTORCTRL 1
#ifdef CFG_USE_MOTORCTRL

#define CFG_MOTORCTRL_DIR_QUIET 0
#define CFG_MOTORCTRL_DIR_FW 1
#define CFG_MOTORCTRL_DIR_BW 2

#define CFG_MOTORCTRL_IN3_PIN 19
#define CFG_MOTORCTRL_IN4_PIN 18
#define CFG_MOTORCTRL_PWM_PIN 17
//#define CFG_MOTORCTRL_DEBUGPWM_PIN 5

#define CFG_MOTORCTRL_WAIT_TIME_BEFORE 1000000L
#define CFG_MOTORCTRL_WAIT_TIME_AFTER 1000000L
#define CFG_MOTORCTRL_PWM_INCR_TIME 20000L
#define CFG_MOTORCTRL_PWM_DUTY_STOP 0
#define CFG_MOTORCTRL_PWM_DUTY_MIN 30
#define CFG_MOTORCTRL_PWM_DUTY_MAX 245
#define CFG_MOTORCTRL_PWM_DUTY_HALF 128
#define CFG_MOTORCTRL_PWM_DUTY_DELTA (-1)

// Specific Teensy configuration for motor control
#ifdef CFG_USE_TEENSY
#define CFG_MOTORCTRL_FREQUENCY 100
#else
#define CFG_MOTORCTRL_PWM_FW_DIV 1024   // Connected to ENB
#define CFG_MOTORCTRL_PWM_BW_DIV 1024
#endif

#endif

//// STEPPING MOTOR USING STEPPER LIBRARY (BLOCKING)
//#define CFG_USE_STEPPER 1
#ifdef CFG_USE_STEPPER
/* Sanyo Denki funciona mejor a 5V con corrientes de 0.126 A, step angle 1.8 (200 steps x revolution).  La fuente a 5V 2.4A */
/* zapp automation funciona a 3.8V, corrientes (te�ricas) 0,67 A, step angle 1.8 (200 steps x revolution) */
/* zapp automation NEMA 17 funciona a 4.8V, corrientes (te�ricas) ? A, step angle 1.8 (200 steps x revolution) */
/* Minebea 6V 0.189A */
#define CFG_STEP_X_REVOLUTION 200 // para el zapp automation // 200 para el sanyo denki // 400 para el grande 
#define CFG_STEP_X_RPM 200 // para el zapp automation // 200 para el sanyo denki
#define CFG_STEP_IN1_PIN 16
#define CFG_STEP_IN2_PIN 15
#define CFG_STEP_IN3_PIN 19
#define CFG_STEP_IN4_PIN 18
#endif

//// STEPPING MOTOR USING ACCELSTEPPER LIBRARY (NOT BLOCKING)
#define CFG_USE_ACCELSTEPPER
#ifdef CFG_USE_ACCELSTEPPER
#define CFG_ACCELSTEPPER_IN1_PIN 16
#define CFG_ACCELSTEPPER_IN2_PIN 15
#define CFG_ACCELSTEPPER_IN3_PIN 19
#define CFG_ACCELSTEPPER_IN4_PIN 18
#define CFG_ACCELSTEPPER_STATUS_QUIET 0
#define CFG_ACCELSTEPPER_STATUS_MOVING 1
#define CFG_ACCELSTEPPER_POS 2000                     // 2000 para zapp (arbitrario)
#define CFG_ACCELSTEPPER_ACCEL 3000.0  // 1000 para zapp  // 2000 a 4000 para sanyo denki// 3000 para nanotec  // 5000 para minebea
#define CFG_ACCELSTEPPER_SPEED_SLIDERA_FACTOR (0.438)  // 0.3 para zapp  // 0.6 - 2 para Sanyo Denki La fuente a 5V 2.4A  // 2 para nanotec (grande) // 2 para minebea
#define CFG_ACCELSTEPPER_SPEED_SLIDERA_OFFSET (50.0)  // 550.0 para zapp // 860 para Sanyo Denki  // 400 para nanotec (grande) // 900 para minebea // 550.0 para zapp nema 17
#endif

#endif /* _PRJ_CFG_H */
