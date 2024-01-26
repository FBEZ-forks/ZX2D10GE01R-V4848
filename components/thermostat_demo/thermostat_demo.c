#include <stdio.h>
#include "thermostat_demo.h"
#include "screens.h"
#include "lvgl.h"


void thermostat_demo(void)
{
    lv_obj_t * welcome_scr = welcome_screen();
    lv_obj_t * menu_scr = menu_screen();
    lv_scr_load(menu_scr);
}
