#include "prj_cfg.h"
#ifdef CFG_USE_MOTORCTRL
/* ['Common headers' begin (DON'T REMOVE THIS LINE!)] */
#include "pwmFSM.h"
/* ['Common headers' end (DON'T REMOVE THIS LINE!)] */

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
            /* ['<global>::shutDownPwm' begin] */
            dre.motorCtrlDuty=CFG_MOTORCTRL_PWM_DUTY_STOP;
            /* ['<global>::shutDownPwm' end] */
            /* ['<global>::setPwmDuty' begin] */
            dre.motorCtrlDuty=CFG_MOTORCTRL_PWM_DUTY_MAX;
            /* ['<global>::setPwmDuty' end] */
            state = ID_SLOWFWCYCLE_INCREASING;
            return ID_SLOWFWCYCLE_INITIAL;
        }
        /* State ID: ID_SLOWFWCYCLE_INCREASING */
        case ID_SLOWFWCYCLE_INCREASING:
        {
            if( dre.motorCtrlDuty<=CFG_MOTORCTRL_PWM_DUTY_HALF )
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
                /* ['<global>::incrDuty' begin] */
                incrPwm(dre.motorCtrlDuty,CFG_MOTORCTRL_PWM_DUTY_MIN,CFG_MOTORCTRL_PWM_DUTY_MAX,CFG_MOTORCTRL_PWM_DUTY_DELTA);
                /* ['<global>::incrDuty' end] */
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
            /* ['<global>::shutDownPwm' begin] */
            dre.motorCtrlDuty=CFG_MOTORCTRL_PWM_DUTY_STOP;
            /* ['<global>::shutDownPwm' end] */
            /* ['<global>::setPwmDuty' begin] */
            dre.motorCtrlDuty=CFG_MOTORCTRL_PWM_DUTY_MAX;
            /* ['<global>::setPwmDuty' end] */
            state = ID_FASTFWCYCLE_INCREASING;
            return ID_FASTFWCYCLE_INITIAL;
        }
        /* State ID: ID_FASTFWCYCLE_INCREASING */
        case ID_FASTFWCYCLE_INCREASING:
        {
            if( dre.motorCtrlDuty<=CFG_MOTORCTRL_PWM_DUTY_MIN )
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
                /* ['<global>::incrDuty' begin] */
                incrPwm(dre.motorCtrlDuty,CFG_MOTORCTRL_PWM_DUTY_MIN,CFG_MOTORCTRL_PWM_DUTY_MAX,CFG_MOTORCTRL_PWM_DUTY_DELTA);
                /* ['<global>::incrDuty' end] */
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
            /* ['<global>::shutDownPwm' begin] */
            dre.motorCtrlDuty=CFG_MOTORCTRL_PWM_DUTY_STOP;
            /* ['<global>::shutDownPwm' end] */
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
