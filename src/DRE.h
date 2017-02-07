#ifndef _DRE_H
#define _DRE_H

#include "ProjectTypes.h"
#include "ProjectFlows.h"


typedef struct {
// Button -- Does not need declaration upReq;
// Button -- Does not need declaration downReq;
// Position -- Does not need declaration mirrorPos;
t_upreqacq upReqAcq;
t_downreqacq downReqAcq;
BOOL upReqDI;
BOOL downReqDI;
t_mirrormode mirrorMode;
t_mirroraction mirrorAction;
t_pwm pwmMirrorAction;
BOOL doDirFw;
BOOL doDirBw;
t_mirrorenable mirrorEnable;
t_mirrordirection mirrorDirection;
t_pwm_duty rectifiedPwmMirrorAction;
t_rectifiedmirrordirection rectifiedMirrorDirection;
uint16_t mirrorPosAcq;
t_appliedmirrordirection appliedMirrorDirection;
t_timer mirrDrvTimer;

} t_dre2;

typedef struct {
// (null) No diag variables for upReq
// (null) No diag variables for downReq
// (null) No diag variables for mirrorPos
BOOL enable_upReqAcq;
t_upreqacq upReqAcq;
BOOL enable_downReqAcq;
t_downreqacq downReqAcq;
BOOL enable_upReqDI;
BOOL upReqDI;
BOOL enable_downReqDI;
BOOL downReqDI;
BOOL enable_mirrorMode;
t_mirrormode mirrorMode;
BOOL enable_mirrorAction;
t_mirroraction mirrorAction;
BOOL enable_pwmMirrorAction;
t_pwm pwmMirrorAction;
BOOL enable_doDirFw;
BOOL doDirFw;
BOOL enable_doDirBw;
BOOL doDirBw;
BOOL enable_mirrorEnable;
t_mirrorenable mirrorEnable;
BOOL enable_mirrorDirection;
t_mirrordirection mirrorDirection;
BOOL enable_rectifiedPwmMirrorAction;
t_pwm_duty rectifiedPwmMirrorAction;
BOOL enable_rectifiedMirrorDirection;
t_rectifiedmirrordirection rectifiedMirrorDirection;
BOOL enable_mirrorPosAcq;
uint16_t mirrorPosAcq;
BOOL enable_appliedMirrorDirection;
t_appliedmirrordirection appliedMirrorDirection;
BOOL enable_mirrDrvTimer;
t_timer mirrDrvTimer;
} t_diag;

// Initialization functions


// upReq flow acquisition
// (setup input disabled for Button type);
// upReq flow synthesis
// (output disabled for Button type);

// downReq flow acquisition
// (setup input disabled for Button type);
// downReq flow synthesis
// (output disabled for Button type);

// mirrorPos flow acquisition
// (setup input disabled for Position type);
// mirrorPos flow synthesis
// (output disabled for Position type);

// upReqAcq flow acquisition
// (setup input disabled for Variable type);
// upReqAcq flow synthesis
// (output disabled for Variable type);

// downReqAcq flow acquisition
// (setup input disabled for Variable type);
// downReqAcq flow synthesis
// (output disabled for Variable type);

// upReqDI flow acquisition
void setup_upReqDI(void);
// upReqDI flow synthesis
// (output disabled for DI_pu type);

// downReqDI flow acquisition
void setup_downReqDI(void);
// downReqDI flow synthesis
// (output disabled for DI_pu type);

// mirrorMode flow acquisition
// (setup input disabled for Variable type);
// mirrorMode flow synthesis
// (output disabled for Variable type);

// mirrorAction flow acquisition
// (setup input disabled for Variable type);
// mirrorAction flow synthesis
// (output disabled for Variable type);

// pwmMirrorAction flow acquisition
// (setup input disabled for PWM type);
// pwmMirrorAction flow synthesis
void setup_pwmMirrorAction(void);

// doDirFw flow acquisition
void setup_doDirFw_input(void);
// doDirFw flow synthesis
void setup_doDirFw_output(void);

// doDirBw flow acquisition
void setup_doDirBw_input(void);
// doDirBw flow synthesis
void setup_doDirBw_output(void);

// mirrorEnable flow acquisition
// (setup input disabled for Variable type);
// mirrorEnable flow synthesis
// (output disabled for Variable type);

// mirrorDirection flow acquisition
// (setup input disabled for Variable type);
// mirrorDirection flow synthesis
// (output disabled for Variable type);

// rectifiedPwmMirrorAction flow acquisition
// (setup input disabled for PWMDuty type);
// rectifiedPwmMirrorAction flow synthesis
// (output disabled for PWMDuty type);

// rectifiedMirrorDirection flow acquisition
// (setup input disabled for Variable type);
// rectifiedMirrorDirection flow synthesis
// (output disabled for Variable type);

// mirrorPosAcq flow acquisition

// mirrorPosAcq flow synthesis
// (output disabled for ADC type);

// appliedMirrorDirection flow acquisition
// (setup input disabled for Variable type);
// appliedMirrorDirection flow synthesis
// (output disabled for Variable type);

// mirrDrvTimer flow acquisition
// (setup input disabled for Timer type);
// mirrDrvTimer flow synthesis
// (output disabled for Timer type);

// Input / Output functions


// upReq flow acquisition
// (input disabled for Button type);
// upReq flow synthesis
// (output disabled for Button type);

// downReq flow acquisition
// (input disabled for Button type);
// downReq flow synthesis
// (output disabled for Button type);

// mirrorPos flow acquisition
// (input disabled for Position type);
// mirrorPos flow synthesis
// (output disabled for Position type);

// upReqAcq flow acquisition
// (input disabled for Variable type);
// upReqAcq flow synthesis
// (output disabled for Variable type);

// downReqAcq flow acquisition
// (input disabled for Variable type);
// downReqAcq flow synthesis
// (output disabled for Variable type);

// upReqDI flow acquisition
BOOL adquirir_upReqDI(void);
// upReqDI flow synthesis
// (output disabled for DI_pu type);

// downReqDI flow acquisition
BOOL adquirir_downReqDI(void);
// downReqDI flow synthesis
// (output disabled for DI_pu type);

// mirrorMode flow acquisition
// (input disabled for Variable type);
// mirrorMode flow synthesis
// (output disabled for Variable type);

// mirrorAction flow acquisition
// (input disabled for Variable type);
// mirrorAction flow synthesis
// (output disabled for Variable type);

// pwmMirrorAction flow acquisition
// (input disabled for PWM type);
// pwmMirrorAction flow synthesis
void synthesize_pwmMirrorAction(t_pwm value);

// doDirFw flow acquisition
BOOL adquirir_doDirFw(void);
// doDirFw flow synthesis
void sintetizar_doDirFw(BOOL valor);

// doDirBw flow acquisition
BOOL adquirir_doDirBw(void);
// doDirBw flow synthesis
void sintetizar_doDirBw(BOOL valor);

// mirrorEnable flow acquisition
// (input disabled for Variable type);
// mirrorEnable flow synthesis
// (output disabled for Variable type);

// mirrorDirection flow acquisition
// (input disabled for Variable type);
// mirrorDirection flow synthesis
// (output disabled for Variable type);

// rectifiedPwmMirrorAction flow acquisition
// (input disabled for PWMDuty type);
// rectifiedPwmMirrorAction flow synthesis
// (output disabled for PWMDuty type);

// rectifiedMirrorDirection flow acquisition
// (input disabled for Variable type);
// rectifiedMirrorDirection flow synthesis
// (output disabled for Variable type);

// mirrorPosAcq flow acquisition
uint16_t acquire_mirrorPosAcq(void);
// mirrorPosAcq flow synthesis
// (output disabled for ADC type);

// appliedMirrorDirection flow acquisition
// (input disabled for Variable type);
// appliedMirrorDirection flow synthesis
// (output disabled for Variable type);

// mirrDrvTimer flow acquisition
// (input disabled for Timer type);
// mirrDrvTimer flow synthesis
// (output disabled for Timer type);

#endif /* _DRE_H */
