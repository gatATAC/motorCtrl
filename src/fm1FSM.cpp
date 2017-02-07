#include "DRE.h"
/* ['Common headers' begin (DON'T REMOVE THIS LINE!)] */
#include "fm1FSM.h"
/* ['Common headers' end (DON'T REMOVE THIS LINE!)] */

extern t_dre2 dre2;
extern t_diag diag;

#define rectifiedPwmMirrorAction (dre2.rectifiedPwmMirrorAction)
#define appliedMirrorDirection (dre2.appliedMirrorDirection)
#define mirrDrvTimer (dre2.mirrDrvTimer)
#define mirrorDirection (dre2.mirrorDirection)

/* ['MirrorRectifier' begin (DON'T REMOVE THIS LINE!)] */
void MirrorRectifier(  )
{
    /* set initial state */
    static STATE_T state = ID_MIRRORRECTIFIER_INIT;

    switch( state )
    {
        /* State ID: ID_MIRRORRECTIFIER_INIT */
        case ID_MIRRORRECTIFIER_INIT:
        {
            /* Transition ID: ID_MIRRORRECTIFIER_FROMINITTOQUIET */
            /* Actions: */
            /* ['<global>::setActuationQuiet' begin] */
            rectifiedPwmMirrorAction=(t_pwm)0;
            mirrorDirection=CFG_MIRROR_DIRECTION_QUIET;
            /* ['<global>::setActuationQuiet' end] */
            /* ['<global>::execMirrorDriving' begin] */
            MirrorDriving();
            /* ['<global>::execMirrorDriving' end] */
            state = ID_MIRRORRECTIFIER_QUIET;
            break;
        }
        /* State ID: ID_MIRRORRECTIFIER_QUIET */
        case ID_MIRRORRECTIFIER_QUIET:
        {
            if( mirrorAction>0 )
            {
                /* Transition ID: ID_MIRRORRECTIFIER_FROMQUIETTOFW */
                /* Actions: */
                /* ['<global>::setActuationModule' begin] */
                if (mirrorAction>=0){
                  rectifiedPwmMirrorAction=(t_pwm)mirrorAction;
                } else {
                  rectifiedPwmMirrorAction=(t_pwm)(-mirrorAction);
                }
                /* ['<global>::setActuationModule' end] */
                /* ['<global>::setActuationFw' begin] */
                mirrorDirection=CFG_MIRROR_DIRECTION_FW;
                /* ['<global>::setActuationFw' end] */
                /* ['<global>::execMirrorDriving' begin] */
                MirrorDriving();
                /* ['<global>::execMirrorDriving' end] */
                state = ID_MIRRORRECTIFIER_FW;
            }
            else if( mirrorAction<0 )
            {
                /* Transition ID: ID_MIRRORRECTIFIER_FROMQUIETTOBW */
                /* Actions: */
                /* ['<global>::setActuationModule' begin] */
                if (mirrorAction>=0){
                  rectifiedPwmMirrorAction=(t_pwm)mirrorAction;
                } else {
                  rectifiedPwmMirrorAction=(t_pwm)(-mirrorAction);
                }
                /* ['<global>::setActuationModule' end] */
                /* ['<global>::setActuationBw' begin] */
                mirrorDirection=CFG_MIRROR_DIRECTION_BW;
                /* ['<global>::setActuationBw' end] */
                /* ['<global>::execMirrorDriving' begin] */
                MirrorDriving();
                /* ['<global>::execMirrorDriving' end] */
                state = ID_MIRRORRECTIFIER_BW;
            }
            break;
        }
        /* State ID: ID_MIRRORRECTIFIER_BW */
        case ID_MIRRORRECTIFIER_BW:
        {
            if( mirrorAction>0 )
            {
                /* Transition ID: ID_MIRRORRECTIFIER_FROMBWTOFW */
                /* Actions: */
                /* ['<global>::setActuationModule' begin] */
                if (mirrorAction>=0){
                  rectifiedPwmMirrorAction=(t_pwm)mirrorAction;
                } else {
                  rectifiedPwmMirrorAction=(t_pwm)(-mirrorAction);
                }
                /* ['<global>::setActuationModule' end] */
                /* ['<global>::setActuationFw' begin] */
                mirrorDirection=CFG_MIRROR_DIRECTION_FW;
                /* ['<global>::setActuationFw' end] */
                /* ['<global>::execMirrorDriving' begin] */
                MirrorDriving();
                /* ['<global>::execMirrorDriving' end] */
                state = ID_MIRRORRECTIFIER_FW;
            }
            else if( mirrorAction==0 )
            {
                /* Transition ID: ID_MIRRORRECTIFIER_FROMBWTOQUIET */
                /* Actions: */
                /* ['<global>::setActuationQuiet' begin] */
                rectifiedPwmMirrorAction=(t_pwm)0;
                mirrorDirection=CFG_MIRROR_DIRECTION_QUIET;
                /* ['<global>::setActuationQuiet' end] */
                /* ['<global>::execMirrorDriving' begin] */
                MirrorDriving();
                /* ['<global>::execMirrorDriving' end] */
                state = ID_MIRRORRECTIFIER_QUIET;
            }
            else if( mirrorAction<0 )
            {
                /* Transition ID: ID_MIRRORRECTIFIER_BWLOOP */
                /* Actions: */
                /* ['<global>::setActuationModule' begin] */
                if (mirrorAction>=0){
                  rectifiedPwmMirrorAction=(t_pwm)mirrorAction;
                } else {
                  rectifiedPwmMirrorAction=(t_pwm)(-mirrorAction);
                }
                /* ['<global>::setActuationModule' end] */
                /* ['<global>::setActuationBw' begin] */
                mirrorDirection=CFG_MIRROR_DIRECTION_BW;
                /* ['<global>::setActuationBw' end] */
                /* ['<global>::execMirrorDriving' begin] */
                MirrorDriving();
                /* ['<global>::execMirrorDriving' end] */
            }
            break;
        }
        /* State ID: ID_MIRRORRECTIFIER_FW */
        case ID_MIRRORRECTIFIER_FW:
        {
            if( mirrorAction==0 )
            {
                /* Transition ID: ID_MIRRORRECTIFIER_FROMFWTOQUIET */
                /* Actions: */
                /* ['<global>::setActuationQuiet' begin] */
                rectifiedPwmMirrorAction=(t_pwm)0;
                mirrorDirection=CFG_MIRROR_DIRECTION_QUIET;
                /* ['<global>::setActuationQuiet' end] */
                /* ['<global>::execMirrorDriving' begin] */
                MirrorDriving();
                /* ['<global>::execMirrorDriving' end] */
                state = ID_MIRRORRECTIFIER_QUIET;
            }
            else if( mirrorAction>0 )
            {
                /* Transition ID: ID_MIRRORRECTIFIER_FWLOOP */
                /* Actions: */
                /* ['<global>::setActuationModule' begin] */
                if (mirrorAction>=0){
                  rectifiedPwmMirrorAction=(t_pwm)mirrorAction;
                } else {
                  rectifiedPwmMirrorAction=(t_pwm)(-mirrorAction);
                }
                /* ['<global>::setActuationModule' end] */
                /* ['<global>::setActuationFw' begin] */
                mirrorDirection=CFG_MIRROR_DIRECTION_FW;
                /* ['<global>::setActuationFw' end] */
                /* ['<global>::execMirrorDriving' begin] */
                MirrorDriving();
                /* ['<global>::execMirrorDriving' end] */
            }
            break;
        }
    }
}
/* ['MirrorRectifier' end (DON'T REMOVE THIS LINE!)] */

/* ['MirrorDriving' begin (DON'T REMOVE THIS LINE!)] */
void MirrorDriving(  )
{
    /* set initial state */
    static STATE_T state = ID_MIRRORDRIVING_INIT;

    switch( state )
    {
        /* State ID: ID_MIRRORDRIVING_INIT */
        case ID_MIRRORDRIVING_INIT:
        {
            /* Transition ID: ID_MIRRORDRIVING_TOSTAB */
            /* Actions: */
            /* ['<global>::stopActuation' begin] */
            t_pwm temp = (t_pwm)0;
            synthesize_pwmMirrorAction(temp);
            /* ['<global>::stopActuation' end] */
            /* ['<global>::applyDirection' begin] */
            appliedMirrorDirection=mirrorDirection;
            /* ['<global>::applyDirection' end] */
            /* ['<global>::resetMirrorDriverTimer' begin] */
            mirrDrvTimer=0L;
            /* ['<global>::resetMirrorDriverTimer' end] */
            state = ID_MIRRORDRIVING_STABILIZE;
            break;
        }
        /* State ID: ID_MIRRORDRIVING_STABILIZE */
        case ID_MIRRORDRIVING_STABILIZE:
        {
            if( (mirrorDirection!=CFG_MIRROR_DIRECTION_QUIET) && (mirrDrvTimer>=CFG_MIRROR_DRIVER_STAB_TIME) )
            {
                /* Transition ID: ID_MIRRORDRIVING_FROMSTABTOWORK */
                /* Actions: */
                /* ['<global>::applyActuation' begin] */
                synthesize_pwmMirrorAction(rectifiedPwmMirrorAction);
                /* ['<global>::applyActuation' end] */
                state = ID_MIRRORDRIVING_WORK;
            }
            else if( appliedMirrorDirection!=mirrorDirection )
            {
                /* Transition ID: ID_MIRRORDRIVING_DIRCHANGEDURINGSTAB */
                /* Actions: */
                /* ['<global>::stopActuation' begin] */
                t_pwm temp = (t_pwm)0;
                synthesize_pwmMirrorAction(temp);
                /* ['<global>::stopActuation' end] */
                /* ['<global>::applyDirection' begin] */
                appliedMirrorDirection=mirrorDirection;
                /* ['<global>::applyDirection' end] */
                /* ['<global>::resetMirrorDriverTimer' begin] */
                mirrDrvTimer=0L;
                /* ['<global>::resetMirrorDriverTimer' end] */
            }
            else if( (mirrorDirection==CFG_MIRROR_DIRECTION_QUIET) && (mirrDrvTimer>=CFG_MIRROR_DRIVER_STAB_TIME) )
            {
                /* Transition ID: ID_MIRRORDRIVING_FROMSTABTOSTOP */
                /* Actions: */
                /* ['<global>::stopActuation' begin] */
                t_pwm temp = (t_pwm)0;
                synthesize_pwmMirrorAction(temp);
                /* ['<global>::stopActuation' end] */
                state = ID_MIRRORDRIVING_STOP;
            }
            else
            {
                /* Transition ID: ID_MIRRORDRIVING_STABLOOP */
                /* Actions: */
                /* ['<global>::stopActuation' begin] */
                t_pwm temp = (t_pwm)0;
                synthesize_pwmMirrorAction(temp);
                /* ['<global>::stopActuation' end] */
            }
            break;
        }
        /* State ID: ID_MIRRORDRIVING_WORK */
        case ID_MIRRORDRIVING_WORK:
        {
            if( appliedMirrorDirection!=mirrorDirection )
            {
                /* Transition ID: ID_MIRRORDRIVING_TODISSIPATE */
                /* Actions: */
                /* ['<global>::stopActuation' begin] */
                t_pwm temp = (t_pwm)0;
                synthesize_pwmMirrorAction(temp);
                /* ['<global>::stopActuation' end] */
                /* ['<global>::resetMirrorDriverTimer' begin] */
                mirrDrvTimer=0L;
                /* ['<global>::resetMirrorDriverTimer' end] */
                state = ID_MIRRORDRIVING_DISSIPATE;
            }
            break;
        }
        /* State ID: ID_MIRRORDRIVING_DISSIPATE */
        case ID_MIRRORDRIVING_DISSIPATE:
        {
            if( mirrDrvTimer>=CFG_MIRROR_DRIVER_DISSIP_TIME )
            {
                /* Transition ID: ID_MIRRORDRIVING_ENDDISSIPATE */
                /* Actions: */
                /* ['<global>::stopActuation' begin] */
                t_pwm temp = (t_pwm)0;
                synthesize_pwmMirrorAction(temp);
                /* ['<global>::stopActuation' end] */
                /* ['<global>::applyActuation' begin] */
                synthesize_pwmMirrorAction(rectifiedPwmMirrorAction);
                /* ['<global>::applyActuation' end] */
                /* ['<global>::resetMirrorDriverTimer' begin] */
                mirrDrvTimer=0L;
                /* ['<global>::resetMirrorDriverTimer' end] */
                state = ID_MIRRORDRIVING_STABILIZE;
            }
            else
            {
                /* Transition ID: ID_MIRRORDRIVING_DISSIPATELOOP */
                /* Actions: */
                /* ['<global>::stopActuation' begin] */
                t_pwm temp = (t_pwm)0;
                synthesize_pwmMirrorAction(temp);
                /* ['<global>::stopActuation' end] */
            }
            break;
        }
        /* State ID: ID_MIRRORDRIVING_STOP */
        case ID_MIRRORDRIVING_STOP:
        {
            if( appliedMirrorDirection!=mirrorDirection )
            {
                /* Transition ID: ID_MIRRORDRIVING_FROMSTOPTOSTABILIZE */
                /* Actions: */
                /* ['<global>::stopActuation' begin] */
                t_pwm temp = (t_pwm)0;
                synthesize_pwmMirrorAction(temp);
                /* ['<global>::stopActuation' end] */
                /* ['<global>::applyDirection' begin] */
                appliedMirrorDirection=mirrorDirection;
                /* ['<global>::applyDirection' end] */
                /* ['<global>::resetMirrorDriverTimer' begin] */
                mirrDrvTimer=0L;
                /* ['<global>::resetMirrorDriverTimer' end] */
                state = ID_MIRRORDRIVING_STABILIZE;
            }
            break;
        }
    }
}
/* ['MirrorDriving' end (DON'T REMOVE THIS LINE!)] */

/* ['MirrorEnabler' begin (DON'T REMOVE THIS LINE!)] */
void MirrorEnabler(  )
{
    /* set initial state */
    static STATE_T state = ID_MIRRORENABLER_INIT;

    switch( state )
    {
        /* State ID: ID_MIRRORENABLER_INIT */
        case ID_MIRRORENABLER_INIT:
        {
            /* Transition ID: ID_MIRRORENABLER_FROMINITTODISABLE */
            /* Actions: */
            /* ['<global>::setActuationQuiet' begin] */
            rectifiedPwmMirrorAction=(t_pwm)0;
            mirrorDirection=CFG_MIRROR_DIRECTION_QUIET;
            /* ['<global>::setActuationQuiet' end] */
            /* ['<global>::execMirrorDriving' begin] */
            MirrorDriving();
            /* ['<global>::execMirrorDriving' end] */
            state = ID_MIRRORENABLER_DISABLED;
            break;
        }
        /* State ID: ID_MIRRORENABLER_DISABLED */
        case ID_MIRRORENABLER_DISABLED:
        {
            if( mirrorEnable==TRUE )
            {
                /* Transition ID: ID_MIRRORENABLER_TOENABLE */
                /* Actions: */
                /* ['<global>::execMirrorRectifier' begin] */
                MirrorRectifier();
                /* ['<global>::execMirrorRectifier' end] */
                state = ID_MIRRORENABLER_ENABLED;
            }
            break;
        }
        /* State ID: ID_MIRRORENABLER_ENABLED */
        case ID_MIRRORENABLER_ENABLED:
        {
            if( mirrorEnable==FALSE )
            {
                /* Transition ID: ID_MIRRORENABLER_TODISABLE */
                /* Actions: */
                /* ['<global>::setActuationQuiet' begin] */
                rectifiedPwmMirrorAction=(t_pwm)0;
                mirrorDirection=CFG_MIRROR_DIRECTION_QUIET;
                /* ['<global>::setActuationQuiet' end] */
                /* ['<global>::execMirrorDriving' begin] */
                MirrorDriving();
                /* ['<global>::execMirrorDriving' end] */
                state = ID_MIRRORENABLER_DISABLED;
            }
            else
            {
                /* Transition ID: ID_MIRRORENABLER_LOOP */
                /* Actions: */
                /* ['<global>::execMirrorRectifier' begin] */
                MirrorRectifier();
                /* ['<global>::execMirrorRectifier' end] */
            }
            break;
        }
    }
}
/* ['MirrorEnabler' end (DON'T REMOVE THIS LINE!)] */
