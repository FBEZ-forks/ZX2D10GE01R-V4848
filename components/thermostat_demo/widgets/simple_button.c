#include "widgets.h"

lv_obj_t * create_simple_button(lv_obj_t * parent, char * label_text){
    lv_obj_t * button = lv_obj_create(parent);
    lv_obj_t * label = lv_label_create(button);
    lv_label_set_text(label,label_text );
    lv_obj_center(label);
    return button;
}