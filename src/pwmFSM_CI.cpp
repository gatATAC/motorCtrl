/* ['Common headers' begin (DON'T REMOVE THIS LINE!)] */
#include "pwmFSM_CI.h"
/* ['Common headers' end (DON'T REMOVE THIS LINE!)] */

/* ['Common definitions for 'Code items generator'' begin (DON'T REMOVE THIS LINE!)] */
/* Generic code items' definitions */
void incrPwm( uint8_t& duty, uint8_t minVar, uint8_t maxVar, uint8_t deltaVar )
{
    /* ['<global>::incrPwm' begin] */
        duty=duty+deltaVar;

        if (duty<minVar){
            duty=maxVar;
        }

        if (duty>maxVar){

            duty=minVar;

        }
    /* ['<global>::incrPwm' end] */
}
/* ['Common definitions for 'Code items generator'' end (DON'T REMOVE THIS LINE!)] */

/* ['Common definitions for 'Hierarchical State Chart generator'' begin (DON'T REMOVE THIS LINE!)] */
/* Code items' definitions */
/* ['Common definitions for 'Hierarchical State Chart generator'' end (DON'T REMOVE THIS LINE!)] */
