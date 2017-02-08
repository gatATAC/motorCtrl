#ifndef _PRJ_LCD_H
#define _PRJ_LCD_H

#include "prj_cfg.h"
#ifdef CFG_USE_LCD
void prj_lcd_setup(void);
void prj_lcd_process(void);
#endif


extern LiquidCrystal lcd;

#endif
