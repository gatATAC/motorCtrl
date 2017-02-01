#include "DRE.h"
#include "prj_pinout.h"
// --- DRE data structure declaration ---
t_dre dre;
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
///void setup_upReqDI(void){
/// DI_pu_setup(PORT_upReqDI,value);
///};
// upReqDI flow synthesis
// (output disabled for DI_pu type)


// downReqDI flow acquisition
///void setup_downReqDI(void){
/// DI_pu_setup(PORT_downReqDI,value);
///};
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
// (setup input not implemented for PWM type)
// pwmMirrorAction flow synthesis
// (output not implemented for PWM type)


// doDirFw flow acquisition
///pinMode(PORT_doDirFw, INPUT);
// doDirFw flow synthesis
///pinMode(PORT_doDirFw, OUTPUT);


// doDirBw flow acquisition
///pinMode(PORT_doDirBw, INPUT);
// doDirBw flow synthesis
///pinMode(PORT_doDirBw, OUTPUT);


// mirrorEnable flow acquisition
// (setup input disabled for Variable type)
// mirrorEnable flow synthesis
// (output disabled for Variable type)


// mirrorDirection flow acquisition
// (setup input disabled for Variable type)
// mirrorDirection flow synthesis
// (output disabled for Variable type)


// rectifiedMirrorAction flow acquisition
// (setup input disabled for PWMDuty type)
// rectifiedMirrorAction flow synthesis
// (output disabled for PWMDuty type)


// rectifiedMirrorDirection flow acquisition
// (setup input disabled for Variable type)
// rectifiedMirrorDirection flow synthesis
// (output disabled for Variable type)



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
/*BOOL acquire_upReqDI(void){
#ifdef _DIAG_ACTIVE
if (diag.enable_upReqDI==TRUE) {
return diag.upReqDI;
} else {
#endif
return DI_pu_read(PORT_upReqDI,value);
#ifdef _DIAG_ACTIVE
}
#endif
};*/
// upReqDI flow synthesis
// (output disabled for DI_pu type)


// downReqDI flow acquisition
/*BOOL acquire_downReqDI(void){
#ifdef _DIAG_ACTIVE
if (diag.enable_downReqDI==TRUE) {
return diag.downReqDI;
} else {
#endif
return DI_pu_read(PORT_downReqDI,value);
#ifdef _DIAG_ACTIVE
}
#endif
};*/
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
/*BOOL acquire_pwmMirrorAction(t_pwm *value){
	return PWM_read(CANAL_pwmMirrorActionK,PORT_pwmMirrorAction,value);
};*/
// pwmMirrorAction flow synthesis
/*void synthesize_pwmMirrorAction(t_pwm *value){
	PWM_write(PORT_pwmMirrorAction, CANAL_pwmMirrorAction, value);
};&quot;
*/

// doDirFw flow acquisition
/*BOOL adquirir_doDirFw(void){
#ifdef _DIAG_ACTIVE
if (diag.enable_doDirFw==TRUE) {
return diag.doDirFw;
} else {
#endif
return digitalRead(PORT_doDirFw,valor);
#ifdef _DIAG_ACTIVE
}
#endif
};*/
// doDirFw flow synthesis
/*void sintetizar_doDirFw(BOOL valor){
#ifdef _DIAG_ACTIVE
if (diag.enable_doDirFw==TRUE) {
digitalWrite(PORT_doDirFw,diag.doDirFw);
} else {
#endif
digitalWrite(PORT_doDirFw,valor);
#ifdef _DIAG_ACTIVE
}
#endif
};*/


// doDirBw flow acquisition
/*BOOL adquirir_doDirBw(void){
#ifdef _DIAG_ACTIVE
if (diag.enable_doDirBw==TRUE) {
return diag.doDirBw;
} else {
#endif
return digitalRead(PORT_doDirBw,valor);
#ifdef _DIAG_ACTIVE
}
#endif
};*/
// doDirBw flow synthesis
/*void sintetizar_doDirBw(BOOL valor){
#ifdef _DIAG_ACTIVE
if (diag.enable_doDirBw==TRUE) {
digitalWrite(PORT_doDirBw,diag.doDirBw);
} else {
#endif
digitalWrite(PORT_doDirBw,valor);
#ifdef _DIAG_ACTIVE
}
#endif
};*/


// mirrorEnable flow acquisition
// (input disabled for Variable type)
// mirrorEnable flow synthesis
// (output disabled for Variable type)


// mirrorDirection flow acquisition
// (input disabled for Variable type)
// mirrorDirection flow synthesis
// (output disabled for Variable type)


// rectifiedMirrorAction flow acquisition
// (input disabled for PWMDuty type)
// rectifiedMirrorAction flow synthesis
// (output disabled for PWMDuty type)


// rectifiedMirrorDirection flow acquisition
// (input disabled for Variable type)
// rectifiedMirrorDirection flow synthesis
// (output disabled for Variable type)
