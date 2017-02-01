#include "ProjectTypes.h"
/* ['Common headers' begin (DON'T REMOVE THIS LINE!)] */
#include <stdio.h>
#include <stdlib.h>
/* ['Common headers' end (DON'T REMOVE THIS LINE!)] */

/* ['Common declarations for 'Code items generator'' begin (DON'T REMOVE THIS LINE!)] */
/* Generic code items' declarations */
typedef bool t_upreqacq;

extern t_upreqacq upReqAcq;
extern t_downreqacq downReqAcq;
extern BOOL upReqDI;
extern BOOL downReqDI;
extern t_mirrormode mirrorMode;
extern t_mirroraction mirrorAction;
extern t_pwm pwmMirrorAction;
extern BOOL doDirFw;
extern BOOL doDirBw;
extern t_mirrorenable mirrorEnable;
extern t_mirrordirection mirrorDirection;
extern t_pwm_duty rectifiedMirrorAction;
extern t_rectifiedmirrordirection rectifiedMirrorDirection;
/* ['Common declarations for 'Code items generator'' end (DON'T REMOVE THIS LINE!)] */

/* ['Common declarations for 'Hierarchical State Chart generator'' begin (DON'T REMOVE THIS LINE!)] */
/* State ID data type */
typedef unsigned long STATE_T;

/* Declaration of code items used in state charts */
/* ['Common declarations for 'Hierarchical State Chart generator'' end (DON'T REMOVE THIS LINE!)] */
