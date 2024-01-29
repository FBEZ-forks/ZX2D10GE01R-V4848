#include "screens.h"
#include "widgets.h"

extern lv_group_t * g;

lv_obj_t * rotary_screen(void){
    lv_obj_t * main = lv_obj_create(NULL);
    lv_obj_t * arc = lv_arc_create(main);
    lv_obj_set_size(arc, 150, 150);
    lv_arc_set_rotation(arc, 135);
    lv_arc_set_bg_angles(arc, 0, 270);
    lv_arc_set_value(arc, 40);
    lv_obj_center(arc);
    lv_group_add_obj(g,arc);
    return main;

}