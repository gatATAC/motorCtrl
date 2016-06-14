#ifdef CFG_USE_RPI

#ifndef _PRJ_TTY_CMDS_H
#define _PRJ_TTY_CMDS_H
#include "prj_cfg.h"
#include "gttc_types.h"

#ifndef CFG_USE_I2C
void ttyCmdHandle(uint8_t times);
#else
// callback for received data
void receiveI2cData(int byteCount);
#endif

#endif // _PRJ_TTY_CMDS_H

#endif
