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
t_pwm_duty rectifiedMirrorAction;
t_rectifiedmirrordirection rectifiedMirrorDirection;
t_rectifiedpwmmirroraction rectifiedPwmMirrorAction;
} t_dre;

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
BOOL enable_rectifiedMirrorAction;
t_pwm_duty rectifiedMirrorAction;
BOOL enable_rectifiedMirrorDirection;
t_rectifiedmirrordirection rectifiedMirrorDirection;

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
// (setup input not implemented for PWM type);
// pwmMirrorAction flow synthesis
// (output not implemented for PWM type);

// doDirFw flow acquisition
///pinMode(PORT_doDirFw, INPUT);;
// doDirFw flow synthesis
///pinMode(PORT_doDirFw, OUTPUT);;

// doDirBw flow acquisition
///pinMode(PORT_doDirBw, INPUT);;
// doDirBw flow synthesis
///pinMode(PORT_doDirBw, OUTPUT);;

// mirrorEnable flow acquisition
// (setup input disabled for Variable type);
// mirrorEnable flow synthesis
// (output disabled for Variable type);

// mirrorDirection flow acquisition
// (setup input disabled for Variable type);
// mirrorDirection flow synthesis
// (output disabled for Variable type);

// rectifiedMirrorAction flow acquisition
// (setup input disabled for PWMDuty type);
// rectifiedMirrorAction flow synthesis
// (output disabled for PWMDuty type);

// rectifiedMirrorDirection flow acquisition
// (setup input disabled for Variable type);
// rectifiedMirrorDirection flow synthesis
// (output disabled for Variable type);

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
BOOL acquire_upReqDI(void);
// upReqDI flow synthesis
// (output disabled for DI_pu type);

// downReqDI flow acquisition
BOOL acquire_downReqDI(void);
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
BOOL acquire_pwmMirrorAction(t_pwm *value);
// pwmMirrorAction flow synthesis
void synthesize_pwmMirrorAction(t_pwm *value);

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

// rectifiedMirrorAction flow acquisition
// (input disabled for PWMDuty type);
// rectifiedMirrorAction flow synthesis
// (output disabled for PWMDuty type);

// rectifiedMirrorDirection flow acquisition
// (input disabled for Variable type);
// rectifiedMirrorDirection flow synthesis
// (output disabled for Variable type);


#endif /* _DRE_H */
