#ifndef _PROJECT_TYPES_H
#define _PROJECT_TYPES_H

#include <Arduino.h>
#include <gttc_types.h>

#include "prj_cfg.h"
#include "prj_input.h"
#include "prj_output.h"

#define CFG_MIRROR_DIRECTION_QUIET 0
#define CFG_MIRROR_DIRECTION_FW 1
#define CFG_MIRROR_DIRECTION_BW 2

#define CFG_MIRROR_DRIVER_STAB_TIME 100000L
#define CFG_MIRROR_DRIVER_DISSIP_TIME 100

#define TRUE (1==1)
#define FALSE (1==0)

typedef bool BOOL;
typedef uint16_t t_pwm;
typedef bool t_upreqacq;
typedef bool t_downreqacq;
typedef uint8_t t_mirrormode;
typedef uint16_t t_mirroraction;
typedef t_pwm t_pwmMirrorAction;
typedef bool t_mirrorenable;
typedef uint8_t t_mirrordirection;
typedef t_pwm t_pwm_duty;
typedef t_mirrordirection t_rectifiedmirrordirection;
typedef t_pwm_duty t_rectifiedpwmmirroraction;
typedef t_mirrordirection t_appliedmirrordirection;
typedef uint32_t t_timer;

#include "DRE.h"

#endif
