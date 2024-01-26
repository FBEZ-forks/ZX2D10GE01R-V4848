#include "screens.h"

lv_obj_t * welcome_screen(void){
    lv_obj_t * main = lv_obj_create(NULL);
    lv_scr_load(main);
    lv_obj_set_style_bg_color(main,lv_color_hex(0x00FFFF),0);
    lv_obj_t * label = lv_label_create(main);
    lv_label_set_text(label,"tiokanu");
    lv_obj_center(label);
    return main;
}