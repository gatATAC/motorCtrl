/* ['Common headers' begin (DON'T REMOVE THIS LINE!)] */
#include "pwmFSM_CI.h"
/* ['Common headers' end (DON'T REMOVE THIS LINE!)] */

/* ['slowFwCycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_SLOWFWCYCLE_INITIAL 0
#define ID_SLOWFWCYCLE_FINAL 1
#define ID_SLOWFWCYCLE_WAIT 2
#define ID_SLOWFWCYCLE_INCREASING 3

STATE_T slowFwCycle(  );
/* ['slowFwCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['fastFwCycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_FASTFWCYCLE_INITIAL 4
#define ID_FASTFWCYCLE_FINAL 5
#define ID_FASTFWCYCLE_INCREASING 6
#define ID_FASTFWCYCLE_WAIT 7

STATE_T fastFwCycle(  );
/* ['fastFwCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['DirChange' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_DIRCHANGE_INITIAL 8
#define ID_DIRCHANGE_FINAL 9
#define ID_DIRCHANGE_WAITBEFORE 10
#define ID_DIRCHANGE_WAITAFTER 11

STATE_T DirChange(  );
/* ['DirChange' end (DON'T REMOVE THIS LINE!)] */

/* ['pwmCycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_PWMCYCLE_INITIAL 12
#define ID_PWMCYCLE_DIRCHANGE 13
#define ID_PWMCYCLE_FASTFWCYCLE 14
#define ID_PWMCYCLE_SLOWFWCYCLE 15

void pwmCycle(  );
/* ['pwmCycle' end (DON'T REMOVE THIS LINE!)] */
