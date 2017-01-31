/* ['Common headers' begin (DON'T REMOVE THIS LINE!)] */
#include "fm1FSM_CI.h"
/* ['Common headers' end (DON'T REMOVE THIS LINE!)] */

/* ['MirrorRectifier' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_MIRRORRECTIFIER_INIT 0
#define ID_MIRRORRECTIFIER_QUIET 1
#define ID_MIRRORRECTIFIER_FW 2
#define ID_MIRRORRECTIFIER_BW 3

void MirrorRectifier(  );
/* ['MirrorRectifier' end (DON'T REMOVE THIS LINE!)] */

/* ['MirrorDriving' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_MIRRORDRIVING_INIT 4
#define ID_MIRRORDRIVING_STABILIZE 5
#define ID_MIRRORDRIVING_WORK 6
#define ID_MIRRORDRIVING_STOP 7
#define ID_MIRRORDRIVING_DISSIPATE 8

void MirrorDriving(  );
/* ['MirrorDriving' end (DON'T REMOVE THIS LINE!)] */

/* ['MirrorEnabler' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_MIRRORENABLER_INIT 9
#define ID_MIRRORENABLER_DISABLED 10
#define ID_MIRRORENABLER_ENABLED 11

void MirrorEnabler(  );
/* ['MirrorEnabler' end (DON'T REMOVE THIS LINE!)] */
