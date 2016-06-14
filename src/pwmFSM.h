/* ['Common headers' begin (DON'T REMOVE THIS LINE!)] */
#include "pwmFSM_CI.h"
/* ['Common headers' end (DON'T REMOVE THIS LINE!)] */

/* ['slow2Cycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_SLOW2CYCLE_INITIAL 0
#define ID_SLOW2CYCLE_FINAL 1
#define ID_SLOW2CYCLE_INCREASING 2

STATE_T slow2Cycle(  );
/* ['slow2Cycle' end (DON'T REMOVE THIS LINE!)] */

/* ['fast2Cycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_FAST2CYCLE_INITIAL 3
#define ID_FAST2CYCLE_FINAL 4
#define ID_FAST2CYCLE_INCREASING 5

STATE_T fast2Cycle(  );
/* ['fast2Cycle' end (DON'T REMOVE THIS LINE!)] */

/* ['slow1Cycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_SLOW1CYCLE_INITIAL 6
#define ID_SLOW1CYCLE_FINAL 7
#define ID_SLOW1CYCLE_INCREASING 8

STATE_T slow1Cycle(  );
/* ['slow1Cycle' end (DON'T REMOVE THIS LINE!)] */

/* ['fast1Cycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_FAST1CYCLE_INITIAL 9
#define ID_FAST1CYCLE_FINAL 10
#define ID_FAST1CYCLE_INCREASING 11

STATE_T fast1Cycle(  );
/* ['fast1Cycle' end (DON'T REMOVE THIS LINE!)] */

/* ['pwmCycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_PWMCYCLE_INITIAL 20
#define ID_PWMCYCLE_FASTBWCYCLE 21
#define ID_PWMCYCLE_FASTFWCYCLE 22
#define ID_PWMCYCLE_SLOWBWCYCLE 23
#define ID_PWMCYCLE_SLOWFWCYCLE 24
#define ID_PWMCYCLE_DIRCHANGE 25

void pwmCycle(  );
/* ['pwmCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['slowFwCycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_SLOWFWCYCLE_INITIAL 4
#define ID_SLOWFWCYCLE_FINAL 5
#define ID_SLOWFWCYCLE_INCREASING 6
#define ID_SLOWFWCYCLE_WAIT 7

STATE_T slowFwCycle(  );
/* ['slowFwCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['slowBwCycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_SLOWBWCYCLE_INITIAL 8
#define ID_SLOWBWCYCLE_FINAL 9
#define ID_SLOWBWCYCLE_INCREASING 10
#define ID_SLOWBWCYCLE_WAIT 11

STATE_T slowBwCycle(  );
/* ['slowBwCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['fastBwCycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_FASTBWCYCLE_INITIAL 16
#define ID_FASTBWCYCLE_FINAL 17
#define ID_FASTBWCYCLE_WAIT 18
#define ID_FASTBWCYCLE_INCREASING 19

STATE_T fastBwCycle(  );
/* ['fastBwCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['fastFwCycle' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_FASTFWCYCLE_INITIAL 12
#define ID_FASTFWCYCLE_FINAL 13
#define ID_FASTFWCYCLE_INCREASING 14
#define ID_FASTFWCYCLE_WAIT 15

STATE_T fastFwCycle(  );
/* ['fastFwCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['DirChange' begin (DON'T REMOVE THIS LINE!)] */
/* State IDs */
#define ID_DIRCHANGE_INITIAL 0
#define ID_DIRCHANGE_FINAL 1
#define ID_DIRCHANGE_WAITBEFORE 2
#define ID_DIRCHANGE_WAITAFTER 3

STATE_T DirChange(  );
/* ['DirChange' end (DON'T REMOVE THIS LINE!)] */
