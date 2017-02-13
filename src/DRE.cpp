#include "DRE.h"

// --- DRE data structure declaration ---
t_dre2 dre2;
t_diag diag;

// --- DRE flow initialization functions ---



// upReq flow acquisition
// (setup input disabled for Button type)
// upReq flow synthesis
// (output disabled for Button type)


// downReq flow acquisition
// (setup input disabled for Button type)
// downReq flow synthesis
// (output disabled for Button type)


// mirrorPos flow acquisition
// (setup input disabled for Position type)
// mirrorPos flow synthesis
// (output disabled for Position type)


// upReqAcq flow acquisition
// (setup input disabled for Variable type)
// upReqAcq flow synthesis
// (output disabled for Variable type)


// downReqAcq flow acquisition
// (setup input disabled for Variable type)
// downReqAcq flow synthesis
// (output disabled for Variable type)


// upReqDI flow acquisition
void setup_upReqDI(void){
pinMode(PORT_upReqDI, INPUT_PULLUP);
};
// upReqDI flow synthesis
// (output disabled for DI_pu type)


// downReqDI flow acquisition
void setup_downReqDI(void){
pinMode(PORT_downReqDI, INPUT_PULLUP);
};
// downReqDI flow synthesis
// (output disabled for DI_pu type)


// mirrorMode flow acquisition
// (setup input disabled for Variable type)
// mirrorMode flow synthesis
// (output disabled for Variable type)


// mirrorAction flow acquisition
// (setup input disabled for Variable type)
// mirrorAction flow synthesis
// (output disabled for Variable type)


// pwmMirrorAction flow acquisition
// (setup input disabled for PWM type)
// pwmMirrorAction flow synthesis
void setup_pwmMirrorAction(void){
#ifndef _PWM_RES_SET_
#define _PWM_RES_SET_
//analogWriteResolution(CFG_PWM_RESOLUTION);
#endif
//analogWriteFrequency(PORT_pwmMirrorAction, PORT_pwmMirrorAction_FREQ);
};



// doDirFw flow acquisition
void setup_doDirFw_input(void){
pinMode(PORT_doDirFw, INPUT);
};

// doDirFw flow synthesis
void setup_doDirFw_output(void){
pinMode(PORT_doDirFw, INPUT);
};


// doDirBw flow acquisition
void setup_doDirBw_input(void){
pinMode(PORT_doDirBw, INPUT);
};

// doDirBw flow synthesis
void setup_doDirBw_output(void){
pinMode(PORT_doDirBw, INPUT);
};


// mirrorEnable flow acquisition
// (setup input disabled for Variable type)
// mirrorEnable flow synthesis
// (output disabled for Variable type)


// mirrorDirection flow acquisition
// (setup input disabled for Variable type)
// mirrorDirection flow synthesis
// (output disabled for Variable type)


// rectifiedPwmMirrorAction flow acquisition
// (setup input disabled for PWMDuty type)
// rectifiedPwmMirrorAction flow synthesis
// (output disabled for PWMDuty type)


// rectifiedMirrorDirection flow acquisition
// (setup input disabled for Variable type)
// rectifiedMirrorDirection flow synthesis
// (output disabled for Variable type)


// mirrorPosAcq flow acquisition

// mirrorPosAcq flow synthesis
// (output disabled for ADC type)


// appliedMirrorDirection flow acquisition
// (setup input disabled for Variable type)
// appliedMirrorDirection flow synthesis
// (output disabled for Variable type)


// mirrDrvTimer flow acquisition
// (setup input disabled for Timer type)
// mirrDrvTimer flow synthesis
// (output disabled for Timer type)


// --- DRE flow acquisition and flow synthesis functions ---


// upReq flow acquisition
// (input disabled for Button type)
// upReq flow synthesis
// (output disabled for Button type)


// downReq flow acquisition
// (input disabled for Button type)
// downReq flow synthesis
// (output disabled for Button type)


// mirrorPos flow acquisition
// (input disabled for Position type)
// mirrorPos flow synthesis
// (output disabled for Position type)


// upReqAcq flow acquisition
// (input disabled for Variable type)
// upReqAcq flow synthesis
// (output disabled for Variable type)


// downReqAcq flow acquisition
// (input disabled for Variable type)
// downReqAcq flow synthesis
// (output disabled for Variable type)


// upReqDI flow acquisition
BOOL adquirir_upReqDI(void){
#ifdef _DIAG_ACTIVE
if (diag.enable_upReqDI==TRUE) {
return diag.upReqDI;
} else {
#endif
return digitalRead(PORT_upReqDI);
#ifdef _DIAG_ACTIVE
}
#endif
};
// upReqDI flow synthesis
// (output disabled for DI_pu type)


// downReqDI flow acquisition
BOOL adquirir_downReqDI(void){
#ifdef _DIAG_ACTIVE
if (diag.enable_downReqDI==TRUE) {
return diag.downReqDI;
} else {
#endif
return digitalRead(PORT_downReqDI);
#ifdef _DIAG_ACTIVE
}
#endif
};
// downReqDI flow synthesis
// (output disabled for DI_pu type)


// mirrorMode flow acquisition
// (input disabled for Variable type)
// mirrorMode flow synthesis
// (output disabled for Variable type)


// mirrorAction flow acquisition
// (input disabled for Variable type)
// mirrorAction flow synthesis
// (output disabled for Variable type)


// pwmMirrorAction flow acquisition
// (input disabled for PWM type)
// pwmMirrorAction flow synthesis
void synthesize_pwmMirrorAction(t_pwm value){
analogWrite(PORT_pwmMirrorAction, value);
};


// doDirFw flow acquisition
BOOL adquirir_doDirFw(void){
#ifdef _DIAG_ACTIVE
if (diag.enable_doDirFw==TRUE) {
return diag.doDirFw;
} else {
#endif
return digitalRead(PORT_doDirFw);
#ifdef _DIAG_ACTIVE
}
#endif
};
// doDirFw flow synthesis
void sintetizar_doDirFw(BOOL valor){
#ifdef _DIAG_ACTIVE
if (diag.enable_doDirFw==TRUE) {
digitalWrite(PORT_doDirFw,diag.doDirFw);
} else {
#endif
digitalWrite(PORT_doDirFw,valor);
#ifdef _DIAG_ACTIVE
}
#endif
};


// doDirBw flow acquisition
BOOL adquirir_doDirBw(void){
#ifdef _DIAG_ACTIVE
if (diag.enable_doDirBw==TRUE) {
return diag.doDirBw;
} else {
#endif
return digitalRead(PORT_doDirBw);
#ifdef _DIAG_ACTIVE
}
#endif
};
// doDirBw flow synthesis
void sintetizar_doDirBw(BOOL valor){
#ifdef _DIAG_ACTIVE
if (diag.enable_doDirBw==TRUE) {
digitalWrite(PORT_doDirBw,diag.doDirBw);
} else {
#endif
digitalWrite(PORT_doDirBw,valor);
#ifdef _DIAG_ACTIVE
}
#endif
};


// mirrorEnable flow acquisition
// (input disabled for Variable type)
// mirrorEnable flow synthesis
// (output disabled for Variable type)


// mirrorDirection flow acquisition
// (input disabled for Variable type)
// mirrorDirection flow synthesis
// (output disabled for Variable type)


// rectifiedPwmMirrorAction flow acquisition
// (input disabled for PWMDuty type)
// rectifiedPwmMirrorAction flow synthesis
// (output disabled for PWMDuty type)


// rectifiedMirrorDirection flow acquisition
// (input disabled for Variable type)
// rectifiedMirrorDirection flow synthesis
// (output disabled for Variable type)


// mirrorPosAcq flow acquisition
uint16_t acquire_mirrorPosAcq(void){
return analogRead(PORT_mirrorPosAcq);
};
// mirrorPosAcq flow synthesis
// (output disabled for ADC type)


// appliedMirrorDirection flow acquisition
// (input disabled for Variable type)
// appliedMirrorDirection flow synthesis
// (output disabled for Variable type)


// mirrDrvTimer flow acquisition
// (input disabled for Timer type)
// mirrDrvTimer flow synthesis
// (output disabled for Timer type)

