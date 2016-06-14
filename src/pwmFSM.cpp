#include "prj_cfg.h"
#if CFG_USE_MOTORCTRL
/* ['Common headers' begin (DON'T REMOVE THIS LINE!)] */
#include "pwmFSM.h"
/* ['Common headers' end (DON'T REMOVE THIS LINE!)] */

/* ['slow2Cycle' begin (DON'T REMOVE THIS LINE!)] */
STATE_T slow2Cycle(  )
{
    /* set initial state */
    static STATE_T state = ID_SLOW2CYCLE_INITIAL;

    switch( state )
    {
        /* State ID: ID_SLOW2CYCLE_INITIAL */
        case ID_SLOW2CYCLE_INITIAL:
        {
            if( true )
            {
                /* Transition ID: ID_SLOW2CYCLE_INIT */
                /* Actions: */
                /* ['<global>::shutDownPwms' begin] */
                dre.dutyFw=10;
                dre.dutyBw=10;
                /* ['<global>::shutDownPwms' end] */
                state = ID_SLOW2CYCLE_INCREASING;
            }
            return ID_SLOW2CYCLE_INITIAL;
        }
        /* State ID: ID_SLOW2CYCLE_INCREASING */
        case ID_SLOW2CYCLE_INCREASING:
        {
            if( dre.dutyBw<128 )
            {
                /* Transition ID: ID_SLOW2CYCLE_STEP */
                /* Actions: */
                /* ['<global>::incrDutyBw' begin] */
                incrPwm(dre.dutyBw);
                /* ['<global>::incrDutyBw' end] */
            }
            else if( dre.dutyBw>=128 )
            {
                /* Transition ID: ID_SLOW2CYCLE_END */
                state = ID_SLOW2CYCLE_FINAL;
            }
            return ID_SLOW2CYCLE_INCREASING;
        }
        /* State ID: ID_SLOW2CYCLE_FINAL */
        case ID_SLOW2CYCLE_FINAL:
        {
            state = ID_SLOW2CYCLE_INITIAL;
            return ID_SLOW2CYCLE_FINAL;
        }
    }
}
/* ['slow2Cycle' end (DON'T REMOVE THIS LINE!)] */

/* ['fast2Cycle' begin (DON'T REMOVE THIS LINE!)] */
STATE_T fast2Cycle(  )
{
    /* set initial state */
    static STATE_T state = ID_FAST2CYCLE_INITIAL;

    switch( state )
    {
        /* State ID: ID_FAST2CYCLE_INITIAL */
        case ID_FAST2CYCLE_INITIAL:
        {
            if( true )
            {
                /* Transition ID: ID_FAST2CYCLE_INIT */
                /* Actions: */
                /* ['<global>::shutDownPwms' begin] */
                dre.dutyFw=10;
                dre.dutyBw=10;
                /* ['<global>::shutDownPwms' end] */
                state = ID_FAST2CYCLE_INCREASING;
            }
            return ID_FAST2CYCLE_INITIAL;
        }
        /* State ID: ID_FAST2CYCLE_INCREASING */
        case ID_FAST2CYCLE_INCREASING:
        {
            if( dre.dutyFw<255 )
            {
                /* Transition ID: ID_FAST2CYCLE_STEP */
                /* Actions: */
                /* ['<global>::incrDutyBw' begin] */
                incrPwm(dre.dutyBw);
                /* ['<global>::incrDutyBw' end] */
            }
            else if( dre.dutyBw>=255 )
            {
                /* Transition ID: ID_FAST2CYCLE_END */
                state = ID_FAST2CYCLE_FINAL;
            }
            return ID_FAST2CYCLE_INCREASING;
        }
        /* State ID: ID_FAST2CYCLE_FINAL */
        case ID_FAST2CYCLE_FINAL:
        {
            state = ID_FAST2CYCLE_INITIAL;
            return ID_FAST2CYCLE_FINAL;
        }
    }
}
/* ['fast2Cycle' end (DON'T REMOVE THIS LINE!)] */

/* ['slow1Cycle' begin (DON'T REMOVE THIS LINE!)] */
STATE_T slow1Cycle(  )
{
    /* set initial state */
    static STATE_T state = ID_SLOW1CYCLE_INITIAL;

    switch( state )
    {
        /* State ID: ID_SLOW1CYCLE_INITIAL */
        case ID_SLOW1CYCLE_INITIAL:
        {
            if( true )
            {
                /* Transition ID: ID_SLOW1CYCLE_INIT */
                /* Actions: */
                /* ['<global>::shutDownPwms' begin] */
                dre.dutyFw=10;
                dre.dutyBw=10;
                /* ['<global>::shutDownPwms' end] */
                state = ID_SLOW1CYCLE_INCREASING;
            }
            return ID_SLOW1CYCLE_INITIAL;
        }
        /* State ID: ID_SLOW1CYCLE_INCREASING */
        case ID_SLOW1CYCLE_INCREASING:
        {
            if( dre.dutyFw<128 )
            {
                /* Transition ID: ID_SLOW1CYCLE_STEP */
                /* Actions: */
                /* ['<global>::incrDutyFw' begin] */
                incrPwm(dre.dutyFw);
                /* ['<global>::incrDutyFw' end] */
            }
            else if( dre.dutyFw>=128 )
            {
                /* Transition ID: ID_SLOW1CYCLE_END */
                state = ID_SLOW1CYCLE_FINAL;
            }
            return ID_SLOW1CYCLE_INCREASING;
        }
        /* State ID: ID_SLOW1CYCLE_FINAL */
        case ID_SLOW1CYCLE_FINAL:
        {
            state = ID_SLOW1CYCLE_INITIAL;
            return ID_SLOW1CYCLE_FINAL;
        }
    }
}
/* ['slow1Cycle' end (DON'T REMOVE THIS LINE!)] */

/* ['fast1Cycle' begin (DON'T REMOVE THIS LINE!)] */
STATE_T fast1Cycle(  )
{
    /* set initial state */
    static STATE_T state = ID_FAST1CYCLE_INITIAL;

    switch( state )
    {
        /* State ID: ID_FAST1CYCLE_INITIAL */
        case ID_FAST1CYCLE_INITIAL:
        {
            if( true )
            {
                /* Transition ID: ID_FAST1CYCLE_INIT */
                /* Actions: */
                /* ['<global>::shutDownPwms' begin] */
                dre.dutyFw=10;
                dre.dutyBw=10;
                /* ['<global>::shutDownPwms' end] */
                state = ID_FAST1CYCLE_INCREASING;
            }
            return ID_FAST1CYCLE_INITIAL;
        }
        /* State ID: ID_FAST1CYCLE_INCREASING */
        case ID_FAST1CYCLE_INCREASING:
        {
            if( dre.dutyFw>=255 )
            {
                /* Transition ID: ID_FAST1CYCLE_END */
                state = ID_FAST1CYCLE_FINAL;
            }
            else if( dre.dutyFw<255 )
            {
                /* Transition ID: ID_FAST1CYCLE_STEP */
                /* Actions: */
                /* ['<global>::incrDutyFw' begin] */
                incrPwm(dre.dutyFw);
                /* ['<global>::incrDutyFw' end] */
            }
            return ID_FAST1CYCLE_INCREASING;
        }
        /* State ID: ID_FAST1CYCLE_FINAL */
        case ID_FAST1CYCLE_FINAL:
        {
            state = ID_FAST1CYCLE_INITIAL;
            return ID_FAST1CYCLE_FINAL;
        }
    }
}
/* ['fast1Cycle' end (DON'T REMOVE THIS LINE!)] */

/* ['pwmCycle' begin (DON'T REMOVE THIS LINE!)] */
void pwmCycle(  )
{
    /* set initial state */
    static STATE_T state = ID_PWMCYCLE_INITIAL;

    switch( state )
    {
        /* State ID: ID_PWMCYCLE_INITIAL */
        case ID_PWMCYCLE_INITIAL:
        {
            /* Transition ID: ID_PWMCYCLE_BOOT */
            /* Actions: */
            /* ['<global>::resetStepDone' begin] */
            dre.pwm_step_done=false;
            /* ['<global>::resetStepDone' end] */
            state = ID_PWMCYCLE_SLOWFWCYCLE;
            break;
        }
        /* State ID: ID_PWMCYCLE_SLOWFWCYCLE */
        case ID_PWMCYCLE_SLOWFWCYCLE:
        {
            /* call substate function */
            STATE_T slowfwcycle_retval = slowFwCycle(  );
            if( dre.pwm_step_done )
            {
                /* Transition ID: ID_PWMCYCLE_TOFASTFW */
                /* Actions: */
                /* ['<global>::resetStepDone' begin] */
                dre.pwm_step_done=false;
                /* ['<global>::resetStepDone' end] */
                state = ID_PWMCYCLE_FASTFWCYCLE;
            }
            break;
        }
        /* State ID: ID_PWMCYCLE_FASTFWCYCLE */
        case ID_PWMCYCLE_FASTFWCYCLE:
        {
            /* call substate function */
            STATE_T fastfwcycle_retval = fastFwCycle(  );
            if( dre.pwm_step_done )
            {
                /* Transition ID: ID_PWMCYCLE_TOFASTBW */
                /* Actions: */
                /* ['<global>::resetStepDone' begin] */
                dre.pwm_step_done=false;
                /* ['<global>::resetStepDone' end] */
                state = ID_PWMCYCLE_FASTBWCYCLE;
            }
            break;
        }
        /* State ID: ID_PWMCYCLE_FASTBWCYCLE */
        case ID_PWMCYCLE_FASTBWCYCLE:
        {
            /* call substate function */
            STATE_T fastbwcycle_retval = fastBwCycle(  );
            if( dre.pwm_step_done )
            {
                /* Transition ID: ID_PWMCYCLE_TOSLOWBW */
                /* Actions: */
                /* ['<global>::resetStepDone' begin] */
                dre.pwm_step_done=false;
                /* ['<global>::resetStepDone' end] */
                state = ID_PWMCYCLE_SLOWBWCYCLE;
            }
            break;
        }
        /* State ID: ID_PWMCYCLE_SLOWBWCYCLE */
        case ID_PWMCYCLE_SLOWBWCYCLE:
        {
            /* call substate function */
            STATE_T slowbwcycle_retval = slowBwCycle(  );
            if( dre.pwm_step_done )
            {
                /* Transition ID: ID_PWMCYCLE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::resetStepDone' begin] */
                dre.pwm_step_done=false;
                /* ['<global>::resetStepDone' end] */
                state = ID_PWMCYCLE_DIRCHANGE;
            }
            break;
        }
        /* State ID: ID_PWMCYCLE_DIRCHANGE */
        case ID_PWMCYCLE_DIRCHANGE:
        {
            /* call substate function */
            STATE_T dirchange_retval = DirChange(  );
            if( dre.pwm_step_done )
            {
                /* Transition ID: ID_PWMCYCLE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::resetStepDone' begin] */
                dre.pwm_step_done=false;
                /* ['<global>::resetStepDone' end] */
                state = ID_PWMCYCLE_SLOWFWCYCLE;
            }
            break;
        }
    }
}
/* ['pwmCycle' end (DON'T REMOVE THIS LINE!)] */
#endif

/* ['slowFwCycle' begin (DON'T REMOVE THIS LINE!)] */
STATE_T slowFwCycle(  )
{
    /* set initial state */
    static STATE_T state = ID_SLOWFWCYCLE_INITIAL;

    switch( state )
    {
        /* State ID: ID_SLOWFWCYCLE_INITIAL */
        case ID_SLOWFWCYCLE_INITIAL:
        {
            /* Transition ID: ID_SLOWFWCYCLE_INIT */
            /* Actions: */
            /* ['<global>::shutDownPwms' begin] */
            dre.dutyFw=CFG_MOTORCTRL_PWM_DUTY_STOP_FW;
            dre.dutyBw=CFG_MOTORCTRL_PWM_DUTY_STOP_BW;
            /* ['<global>::shutDownPwms' end] */
            /* ['<global>::setPwmDuty' begin] */
            dre.dutyFw=CFG_MOTORCTRL_PWM_DUTY_MAX_FW;
            /* ['<global>::setPwmDuty' end] */
            state = ID_SLOWFWCYCLE_INCREASING;
            return ID_SLOWFWCYCLE_INITIAL;
        }
        /* State ID: ID_SLOWFWCYCLE_INCREASING */
        case ID_SLOWFWCYCLE_INCREASING:
        {
            if( dre.dutyFw<=CFG_MOTORCTRL_PWM_DUTY_HALF )
            {
                /* Transition ID: ID_SLOWFWCYCLE_END */
                /* Actions: */
                /* ['<global>::setStepDone' begin] */
                dre.pwm_step_done=true;
                /* ['<global>::setStepDone' end] */
                state = ID_SLOWFWCYCLE_FINAL;
            }
            else
            {
                /* Transition ID: ID_SLOWFWCYCLE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::resetWaitTime' begin] */
                dre.pwm_wait_timer = 0L;
                /* ['<global>::resetWaitTime' end] */
                state = ID_SLOWFWCYCLE_WAIT;
            }
            return ID_SLOWFWCYCLE_INCREASING;
        }
        /* State ID: ID_SLOWFWCYCLE_FINAL */
        case ID_SLOWFWCYCLE_FINAL:
        {
            state = ID_SLOWFWCYCLE_INITIAL;
            return ID_SLOWFWCYCLE_FINAL;
        }
        /* State ID: ID_SLOWFWCYCLE_WAIT */
        case ID_SLOWFWCYCLE_WAIT:
        {
            if( (dre.pwm_wait_timer >= CFG_MOTORCTRL_PWM_INCR_TIME) )
            {
                /* Transition ID: ID_SLOWFWCYCLE_STEP */
                /* Actions: */
                /* ['<global>::incrDutyFw' begin] */
                incrPwm(dre.dutyFw,CFG_MOTORCTRL_PWM_DUTY_MIN_FW,CFG_MOTORCTRL_PWM_DUTY_MAX_FW,CFG_MOTORCTRL_PWM_DUTY_DELTA);
                /* ['<global>::incrDutyFw' end] */
                state = ID_SLOWFWCYCLE_INCREASING;
            }
            else
            {
                /* Transition ID: ID_SLOWFWCYCLE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::incrementTimer' begin] */
                dre.pwm_wait_timer+=CYCLE_TIME_IN_MICROS;

                if (dre.pwm_wait_timer>CFG_MAX_TIMER){

                    dre.pwm_wait_timer=CFG_MAX_TIMER;

                }
                /* ['<global>::incrementTimer' end] */
            }
            return ID_SLOWFWCYCLE_WAIT;
        }
    }
}
/* ['slowFwCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['slowBwCycle' begin (DON'T REMOVE THIS LINE!)] */
STATE_T slowBwCycle(  )
{
    /* set initial state */
    static STATE_T state = ID_SLOWBWCYCLE_INITIAL;

    switch( state )
    {
        /* State ID: ID_SLOWBWCYCLE_INITIAL */
        case ID_SLOWBWCYCLE_INITIAL:
        {
            /* Transition ID: ID_SLOWBWCYCLE_INIT */
            /* Actions: */
            /* ['<global>::shutDownPwms' begin] */
            dre.dutyFw=CFG_MOTORCTRL_PWM_DUTY_STOP_FW;
            dre.dutyBw=CFG_MOTORCTRL_PWM_DUTY_STOP_BW;
            /* ['<global>::shutDownPwms' end] */
            /* ['<global>::setPwmDuty' begin] */
            dre.dutyBw=CFG_MOTORCTRL_PWM_DUTY_MAX_BW;
            /* ['<global>::setPwmDuty' end] */
            state = ID_SLOWBWCYCLE_INCREASING;
            return ID_SLOWBWCYCLE_INITIAL;
        }
        /* State ID: ID_SLOWBWCYCLE_INCREASING */
        case ID_SLOWBWCYCLE_INCREASING:
        {
            if( dre.dutyBw<=CFG_MOTORCTRL_PWM_DUTY_HALF )
            {
                /* Transition ID: ID_SLOWBWCYCLE_END */
                /* Actions: */
                /* ['<global>::setStepDone' begin] */
                dre.pwm_step_done=true;
                /* ['<global>::setStepDone' end] */
                state = ID_SLOWBWCYCLE_FINAL;
            }
            else
            {
                /* Transition ID: ID_SLOWBWCYCLE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::resetWaitTime' begin] */
                dre.pwm_wait_timer = 0L;
                /* ['<global>::resetWaitTime' end] */
                state = ID_SLOWBWCYCLE_WAIT;
            }
            return ID_SLOWBWCYCLE_INCREASING;
        }
        /* State ID: ID_SLOWBWCYCLE_FINAL */
        case ID_SLOWBWCYCLE_FINAL:
        {
            state = ID_SLOWBWCYCLE_INITIAL;
            return ID_SLOWBWCYCLE_FINAL;
        }
        /* State ID: ID_SLOWBWCYCLE_WAIT */
        case ID_SLOWBWCYCLE_WAIT:
        {
            if( (dre.pwm_wait_timer >= CFG_MOTORCTRL_PWM_INCR_TIME) )
            {
                /* Transition ID: ID_SLOWBWCYCLE_STEP */
                /* Actions: */
                /* ['<global>::incrDutyBw' begin] */
                incrPwm(dre.dutyBw,CFG_MOTORCTRL_PWM_DUTY_MIN_BW,CFG_MOTORCTRL_PWM_DUTY_MAX_BW,CFG_MOTORCTRL_PWM_DUTY_DELTA);
                /* ['<global>::incrDutyBw' end] */
                state = ID_SLOWBWCYCLE_INCREASING;
            }
            else
            {
                /* Transition ID: ID_SLOWBWCYCLE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::incrementTimer' begin] */
                dre.pwm_wait_timer+=CYCLE_TIME_IN_MICROS;

                if (dre.pwm_wait_timer>CFG_MAX_TIMER){

                    dre.pwm_wait_timer=CFG_MAX_TIMER;

                }
                /* ['<global>::incrementTimer' end] */
            }
            return ID_SLOWBWCYCLE_WAIT;
        }
    }
}
/* ['slowBwCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['fastBwCycle' begin (DON'T REMOVE THIS LINE!)] */
STATE_T fastBwCycle(  )
{
    /* set initial state */
    static STATE_T state = ID_FASTBWCYCLE_INITIAL;

    switch( state )
    {
        /* State ID: ID_FASTBWCYCLE_INITIAL */
        case ID_FASTBWCYCLE_INITIAL:
        {
            /* Transition ID: ID_FASTBWCYCLE_INIT */
            /* Actions: */
            /* ['<global>::shutDownPwms' begin] */
            dre.dutyFw=CFG_MOTORCTRL_PWM_DUTY_STOP_FW;
            dre.dutyBw=CFG_MOTORCTRL_PWM_DUTY_STOP_BW;
            /* ['<global>::shutDownPwms' end] */
            /* ['<global>::setPwmDuty' begin] */
            dre.dutyBw=CFG_MOTORCTRL_PWM_DUTY_MAX_BW;
            /* ['<global>::setPwmDuty' end] */
            state = ID_FASTBWCYCLE_INCREASING;
            return ID_FASTBWCYCLE_INITIAL;
        }
        /* State ID: ID_FASTBWCYCLE_INCREASING */
        case ID_FASTBWCYCLE_INCREASING:
        {
            if( dre.dutyBw<=CFG_MOTORCTRL_PWM_DUTY_MIN_BW )
            {
                /* Transition ID: ID_FASTBWCYCLE_END */
                /* Actions: */
                /* ['<global>::setStepDone' begin] */
                dre.pwm_step_done=true;
                /* ['<global>::setStepDone' end] */
                state = ID_FASTBWCYCLE_FINAL;
            }
            else
            {
                /* Transition ID: ID_FASTBWCYCLE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::resetWaitTime' begin] */
                dre.pwm_wait_timer = 0L;
                /* ['<global>::resetWaitTime' end] */
                state = ID_FASTBWCYCLE_WAIT;
            }
            return ID_FASTBWCYCLE_INCREASING;
        }
        /* State ID: ID_FASTBWCYCLE_WAIT */
        case ID_FASTBWCYCLE_WAIT:
        {
            if( (dre.pwm_wait_timer >= CFG_MOTORCTRL_PWM_INCR_TIME) )
            {
                /* Transition ID: ID_FASTBWCYCLE_STEP */
                /* Actions: */
                /* ['<global>::incrDutyBw' begin] */
                incrPwm(dre.dutyBw,CFG_MOTORCTRL_PWM_DUTY_MIN_BW,CFG_MOTORCTRL_PWM_DUTY_MAX_BW,CFG_MOTORCTRL_PWM_DUTY_DELTA);
                /* ['<global>::incrDutyBw' end] */
                state = ID_FASTBWCYCLE_INCREASING;
            }
            else
            {
                /* Transition ID: ID_FASTBWCYCLE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::incrementTimer' begin] */
                dre.pwm_wait_timer+=CYCLE_TIME_IN_MICROS;

                if (dre.pwm_wait_timer>CFG_MAX_TIMER){

                    dre.pwm_wait_timer=CFG_MAX_TIMER;

                }
                /* ['<global>::incrementTimer' end] */
            }
            return ID_FASTBWCYCLE_WAIT;
        }
        /* State ID: ID_FASTBWCYCLE_FINAL */
        case ID_FASTBWCYCLE_FINAL:
        {
            state = ID_FASTBWCYCLE_INITIAL;
            return ID_FASTBWCYCLE_FINAL;
        }
    }
}
/* ['fastBwCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['fastFwCycle' begin (DON'T REMOVE THIS LINE!)] */
STATE_T fastFwCycle(  )
{
    /* set initial state */
    static STATE_T state = ID_FASTFWCYCLE_INITIAL;

    switch( state )
    {
        /* State ID: ID_FASTFWCYCLE_INITIAL */
        case ID_FASTFWCYCLE_INITIAL:
        {
            /* Transition ID: ID_FASTFWCYCLE_INIT */
            /* Actions: */
            /* ['<global>::shutDownPwms' begin] */
            dre.dutyFw=CFG_MOTORCTRL_PWM_DUTY_STOP_FW;
            dre.dutyBw=CFG_MOTORCTRL_PWM_DUTY_STOP_BW;
            /* ['<global>::shutDownPwms' end] */
            /* ['<global>::setPwmDuty' begin] */
            dre.dutyFw=CFG_MOTORCTRL_PWM_DUTY_MAX_FW;
            /* ['<global>::setPwmDuty' end] */
            state = ID_FASTFWCYCLE_INCREASING;
            return ID_FASTFWCYCLE_INITIAL;
        }
        /* State ID: ID_FASTFWCYCLE_INCREASING */
        case ID_FASTFWCYCLE_INCREASING:
        {
            if( dre.dutyFw<=CFG_MOTORCTRL_PWM_DUTY_MIN_FW )
            {
                /* Transition ID: ID_FASTFWCYCLE_END */
                /* Actions: */
                /* ['<global>::setStepDone' begin] */
                dre.pwm_step_done=true;
                /* ['<global>::setStepDone' end] */
                state = ID_FASTFWCYCLE_FINAL;
            }
            else
            {
                /* Transition ID: ID_FASTFWCYCLE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::resetWaitTime' begin] */
                dre.pwm_wait_timer = 0L;
                /* ['<global>::resetWaitTime' end] */
                state = ID_FASTFWCYCLE_WAIT;
            }
            return ID_FASTFWCYCLE_INCREASING;
        }
        /* State ID: ID_FASTFWCYCLE_FINAL */
        case ID_FASTFWCYCLE_FINAL:
        {
            state = ID_FASTFWCYCLE_INITIAL;
            return ID_FASTFWCYCLE_FINAL;
        }
        /* State ID: ID_FASTFWCYCLE_WAIT */
        case ID_FASTFWCYCLE_WAIT:
        {
            if( (dre.pwm_wait_timer >= CFG_MOTORCTRL_PWM_INCR_TIME) )
            {
                /* Transition ID: ID_FASTFWCYCLE_STEP */
                /* Actions: */
                /* ['<global>::incrDutyFw' begin] */
                incrPwm(dre.dutyFw,CFG_MOTORCTRL_PWM_DUTY_MIN_FW,CFG_MOTORCTRL_PWM_DUTY_MAX_FW,CFG_MOTORCTRL_PWM_DUTY_DELTA);
                /* ['<global>::incrDutyFw' end] */
                state = ID_FASTFWCYCLE_INCREASING;
            }
            else
            {
                /* Transition ID: ID_FASTFWCYCLE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::incrementTimer' begin] */
                dre.pwm_wait_timer+=CYCLE_TIME_IN_MICROS;

                if (dre.pwm_wait_timer>CFG_MAX_TIMER){

                    dre.pwm_wait_timer=CFG_MAX_TIMER;

                }
                /* ['<global>::incrementTimer' end] */
            }
            return ID_FASTFWCYCLE_WAIT;
        }
    }
}
/* ['fastFwCycle' end (DON'T REMOVE THIS LINE!)] */

/* ['DirChange' begin (DON'T REMOVE THIS LINE!)] */
STATE_T DirChange(  )
{
    /* set initial state */
    static STATE_T state = ID_DIRCHANGE_INITIAL;

    switch( state )
    {
        /* State ID: ID_DIRCHANGE_INITIAL */
        case ID_DIRCHANGE_INITIAL:
        {
            /* Transition ID: ID_DIRCHANGE_TRANSITION_CONNECTION */
            /* Actions: */
            /* ['<global>::resetWaitTime' begin] */
            dre.pwm_wait_timer = 0L;
            /* ['<global>::resetWaitTime' end] */
            /* ['<global>::shutDownPwms' begin] */
            dre.dutyFw=CFG_MOTORCTRL_PWM_DUTY_STOP_FW;
            dre.dutyBw=CFG_MOTORCTRL_PWM_DUTY_STOP_BW;
            /* ['<global>::shutDownPwms' end] */
            state = ID_DIRCHANGE_WAITBEFORE;
            return ID_DIRCHANGE_INITIAL;
        }
        /* State ID: ID_DIRCHANGE_WAITBEFORE */
        case ID_DIRCHANGE_WAITBEFORE:
        {
            if( (dre.pwm_wait_timer >= CFG_MOTORCTRL_WAIT_TIME_BEFORE) )
            {
                /* Transition ID: ID_DIRCHANGE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::resetWaitTime' begin] */
                dre.pwm_wait_timer = 0L;
                /* ['<global>::resetWaitTime' end] */
                /* ['<global>::changeDir' begin] */
                if (dre.last_direction==CFG_MOTORCTRL_DIR_FW){

                    dre.direction=CFG_MOTORCTRL_DIR_BW;

                } else {

                    dre.direction=CFG_MOTORCTRL_DIR_FW;

                }

                dre.last_direction=dre.direction;

                /* ['<global>::changeDir' end] */
                state = ID_DIRCHANGE_WAITAFTER;
            }
            else
            {
                /* Transition ID: ID_DIRCHANGE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::incrementTimer' begin] */
                dre.pwm_wait_timer+=CYCLE_TIME_IN_MICROS;

                if (dre.pwm_wait_timer>CFG_MAX_TIMER){

                    dre.pwm_wait_timer=CFG_MAX_TIMER;

                }
                /* ['<global>::incrementTimer' end] */
            }
            return ID_DIRCHANGE_WAITBEFORE;
        }
        /* State ID: ID_DIRCHANGE_WAITAFTER */
        case ID_DIRCHANGE_WAITAFTER:
        {
            if( (dre.pwm_wait_timer >= CFG_MOTORCTRL_WAIT_TIME_AFTER) )
            {
                /* Transition ID: ID_DIRCHANGE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::setStepDone' begin] */
                dre.pwm_step_done=true;
                /* ['<global>::setStepDone' end] */
                state = ID_DIRCHANGE_FINAL;
            }
            else
            {
                /* Transition ID: ID_DIRCHANGE_TRANSITION_CONNECTION */
                /* Actions: */
                /* ['<global>::incrementTimer' begin] */
                dre.pwm_wait_timer+=CYCLE_TIME_IN_MICROS;

                if (dre.pwm_wait_timer>CFG_MAX_TIMER){

                    dre.pwm_wait_timer=CFG_MAX_TIMER;

                }
                /* ['<global>::incrementTimer' end] */
            }
            return ID_DIRCHANGE_WAITAFTER;
        }
        /* State ID: ID_DIRCHANGE_FINAL */
        case ID_DIRCHANGE_FINAL:
        {
            state = ID_DIRCHANGE_INITIAL;
            return ID_DIRCHANGE_FINAL;
        }
    }
}
/* ['DirChange' end (DON'T REMOVE THIS LINE!)] */
