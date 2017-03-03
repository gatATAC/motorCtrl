#include "gttc_timer.h"
#include "prj_cfg.h"
#include "prj_output.h"
#include "prj_pinout.h"
#include "prj_dre.h"
#include <Arduino.h>

#ifdef CFG_USE_TM1638
#include <TM1638.h>
extern TM1638 module;
#endif

#ifdef CFG_USE_STEPPER
#include <Stepper.h>

// inicializa la libreria 'stepper' en los pines configurados
Stepper myStepper(CFG_STEP_X_REVOLUTION,  La fuente a 5V 2.4A
  CFG_STEP_IN1_PIN, CFG_STEP_IN2_PIN, CFG_STEP_IN3_PIN, CFG_STEP_IN4_PIN);
#endif

#ifdef CFG_USE_LCD
#include <LiquidCrystal.h>
#include "prj_lcd.h"
#endif

#ifdef CFG_USE_ACCELSTEPPER
#include <AccelStepper.h>

AccelStepper stepper1(AccelStepper::FULL4WIRE, CFG_ACCELSTEPPER_IN1_PIN, CFG_ACCELSTEPPER_IN2_PIN, CFG_ACCELSTEPPER_IN3_PIN, CFG_ACCELSTEPPER_IN4_PIN);
#endif

#ifdef CFG_USE_MOTORCTRL
void processMotorCtrl(void){
  if (dre.direction==CFG_MOTORCTRL_DIR_FW){
    digitalWrite (CFG_MOTORCTRL_IN3_PIN, HIGH);
  } else {
    digitalWrite (CFG_MOTORCTRL_IN3_PIN, LOW);
  }
  if (dre.direction==CFG_MOTORCTRL_DIR_BW){
    digitalWrite (CFG_MOTORCTRL_IN4_PIN, HIGH);
  } else {
    digitalWrite (CFG_MOTORCTRL_IN4_PIN, LOW);
  }
  if (dre.motorCtrlDuty>0){
    digitalWrite(CFG_LED_STATUS,HIGH);
  } else {
    digitalWrite(CFG_LED_STATUS,LOW);
  }
  //dre.motorCtrlDuty = 0;
  analogWrite(CFG_MOTORCTRL_PWM_PIN,dre.motorCtrlDuty);
}
#endif

void prjOutputInit(void){
#ifdef CFG_USE_RGB_LEDS
  analogWrite(redLightPin,dre.redLight);
  analogWrite(greenLightPin,dre.greenLight);
  analogWrite(blueLightPin,dre.blueLight);
#endif

#ifdef CFG_USE_STEPPER
myStepper.setSpeed(CFG_STEP_X_RPM);
#endif

#ifdef CFG_USE_ACCELSTEPPER
    stepper1.setAcceleration(CFG_ACCELSTEPPER_ACCEL);  // 1000 para zapp  // 4000 para sanyo denki
#endif

#ifdef CFG_USE_MOTORCTRL
  //analogWrite(CFG_MOTORCTRL_DEBUGPWM_PIN,10);
  processMotorCtrl();
#endif
}

#ifdef CFG_USE_RPI

#define RPI_LED_STATE_INIT 0
#define RPI_LED_STATE_BLINKING_ON 1
#define RPI_LED_STATE_BLINKING_OFF 2
#define RPI_LED_STATE_ON 3
#define RPI_LED_STATE_OFF 4

#define RPI_PERIOD_INIT 20
#define RPI_PERIOD_GOINGOFF 5

uint8_t rpiLedState = RPI_LED_STATE_INIT;
uint8_t rpiLedPeriod=RPI_PERIOD_INIT;
uint8_t currentRPiPeriod = 0;

void handleRPiStatusPin(void){
  switch (rpiLedState){
  case RPI_LED_STATE_INIT:
    if (dre.rpiStatus==RPI_STATUS_INIT){
      rpiLedState=RPI_LED_STATE_BLINKING_ON;
      rpiLedPeriod=RPI_PERIOD_INIT;
      currentRPiPeriod = 0;
      digitalWrite(LED_RPI_STATUS, HIGH);
    }
    break;
  case RPI_LED_STATE_BLINKING_ON:
    if (dre.rpiStatus==RPI_STATUS_READY){
      rpiLedState=RPI_LED_STATE_ON;
      currentRPiPeriod = 0;
     digitalWrite(LED_RPI_STATUS, HIGH);
    }
    else {
      if (dre.rpiStatus==RPI_STATUS_OFF){
        rpiLedState=RPI_LED_STATE_OFF;
        currentRPiPeriod = 0;
        digitalWrite(LED_RPI_STATUS, LOW);
      }
      else {
        if (currentRPiPeriod>=rpiLedPeriod){
          rpiLedState=RPI_LED_STATE_BLINKING_OFF;
          currentRPiPeriod = 0;
          digitalWrite(LED_RPI_STATUS, LOW);
        }
        else {
          currentRPiPeriod++;
        }
      }
    }
    break;
  case RPI_LED_STATE_BLINKING_OFF:
    if (dre.rpiStatus==RPI_STATUS_READY){
      rpiLedState=RPI_LED_STATE_ON;
      currentRPiPeriod = 0;
      digitalWrite(LED_RPI_STATUS, HIGH);
    }
    else {
      if (dre.rpiStatus==RPI_STATUS_OFF){
        rpiLedState=RPI_LED_STATE_OFF;
        currentRPiPeriod = 0;
        digitalWrite(LED_RPI_STATUS, LOW);
      }
      else {
        if (currentRPiPeriod>=rpiLedPeriod){
          rpiLedState=RPI_LED_STATE_BLINKING_ON;
          digitalWrite(LED_RPI_STATUS, HIGH);
          currentRPiPeriod = 0;
        }
        else {
          currentRPiPeriod++;
        }
      }
    }
    break;
  case RPI_LED_STATE_ON:
    if (dre.rpiStatus==RPI_STATUS_GOINGOFF){
      rpiLedState=RPI_LED_STATE_BLINKING_ON;
      rpiLedPeriod=RPI_PERIOD_GOINGOFF;
      currentRPiPeriod = 0;
      digitalWrite(LED_RPI_STATUS, LOW);
    }
    break;
  case RPI_LED_STATE_OFF:
    if (dre.rpiStatus==RPI_STATUS_INIT){
      rpiLedState=RPI_LED_STATE_BLINKING_ON;
      rpiLedPeriod=RPI_PERIOD_INIT;
      currentRPiPeriod = 0;
      digitalWrite(LED_RPI_STATUS, HIGH);
    }
    break;
  }
}

#endif

char buf[17];
uint8_t counter=0;
uint16_t ledMask=0x0000;
void prjOutput(void){

  Serial.println("ledmask!");
  counter=0;

  uint8_t i;
  ledMask=0x0000;
  for (i=0;i<NUM_LEDS;i++){
    if(dre.buttonState[i]) {
      dre.ledState[i]=2;
    } else {
      dre.ledState[i]=0;
    }
    if (dre.ledState[i]>0){
#ifdef CFG_USE_TM16382
      if (dre.ledState[i]>1){
        ledMask |= (0x0100 << i);
      }
      else {
        ledMask |= (0x0100 << i);
      }
#endif
    }
  }
#ifdef CFG_USE_TM1638
    module.setDisplayToDecNumber(CYCLE_TIME_MICROS, 0);
    module.setLEDs(ledMask);
#endif

#ifdef CFG_USE_RPI
  handleRPiStatusPin();
#endif

#ifdef CFG_USE_RGB_LEDS
  analogWrite(redLightPin,dre.redLight);
  analogWrite(greenLightPin,dre.greenLight);
  analogWrite(blueLightPin,dre.blueLight);
#endif
#ifdef CFG_USE_MOTORCTRL
  processMotorCtrl();
  //analogWrite(CFG_MOTORCTRL_DEBUGPWM_PIN,10);
#endif

#ifdef CFG_USE_STEPPER
  // Damos x pasos vueltas
myStepper.step(10);
#endif

#ifdef CFG_USE_ACCELSTEPPER
    long dist;
    bool stopped = false;

#ifdef CFG_USE_SLIDER
  dre.maxSpeed = (dre.sliderA*CFG_ACCELSTEPPER_SPEED_SLIDERA_FACTOR) + CFG_ACCELSTEPPER_SPEED_SLIDERA_OFFSET;
#else
  dre.maxSpeed = CFG_ACCELSTEPPER_SPEED_SLIDERA_OFFSET;
#endif
  stepper1.setMaxSpeed(dre.maxSpeed);
  if (dre.stepper1status==CFG_ACCELSTEPPER_STATUS_QUIET){
    stepper1.moveTo(dre.currentTarget);
    dre.stepper1status=CFG_ACCELSTEPPER_STATUS_MOVING;
  } else {
    dist=stepper1.distanceToGo();
    if (dist<10 && dist > -10){
      Serial.printf("dist: %d\n",dist);
      if (dist == 0) {
        //stepper1.moveTo(-stepper1.currentPosition());
        dre.stepper1status=CFG_ACCELSTEPPER_STATUS_QUIET;
        dre.currentTarget=-dre.currentTarget;
        stepper1.disableOutputs();
      } else {
        if (!dre.endswitch1 && dre.endswitch2){
          stepper1.run();
        } else {
          stepper1.disableOutputs();
        }
      }
    } else {
        if (!dre.endswitch1 && dre.endswitch2){
        stepper1.run();
      } else {
        stepper1.disableOutputs();
      }
    }
  }

#ifdef CFG_USE_LCD
  if (counter>=100){
    counter=0;
    lcd.setCursor(0,1);
    lcd.print(dre.endswitch1);
  } else {
    if (counter==25){
      lcd.setCursor(0,0);
      sprintf(buf,"%04d", int(dre.maxSpeed));
      lcd.print(buf);
//      sprintf(buf,"%04d %0+5d %+05d", int(dre.maxSpeed), stepper1.targetPosition(),stepper1.currentPosition());
    } else {
      if (counter==50){
        sprintf(buf," %0+5d", stepper1.targetPosition());
        lcd.print(buf);
      } else {
        if (counter == 75){
          sprintf(buf," %0+5d", stepper1.currentPosition());
          lcd.print(buf);
        } else {
          if (counter==90) {
          }
        }
      }
    }
    counter++;
  }
#endif
#endif

//  if (!dre.endswitch1) {
//    Serial.printf("maxspeed %f pos %d tgt %d tgt2 %d dist %d switch %d pot %d %d %d %d slide %d %d\n",dre.maxSpeed, stepper1.currentPosition(),dre.currentTarget, stepper1.targetPosition(), dist, dre.endswitch1, dre.potState[3],dre.potState[2],dre.potState[1],dre.potState[0],dre.sliderA, dre.sliderB);
//    Serial.printf("maxspeed %f pos %d tgt %d tgt2 %d dist %d switch %d pot %d %d %d %d slide %d\n",dre.maxSpeed, stepper1.currentPosition(),dre.currentTarget, stepper1.targetPosition(), dist, dre.endswitch1, dre.potState[3],dre.potState[2],dre.potState[1],dre.potState[0],dre.sliderA);
//    Serial.printf("maxspeed %f pos %d tgt %d tgt2 %d dist %d pot %d %d %d %d slide %d\n",dre.maxSpeed, stepper1.currentPosition(),dre.currentTarget, stepper1.targetPosition(), dist, dre.potState[3],dre.potState[2],dre.potState[1],dre.potState[0],dre.sliderA);
//  }


}
