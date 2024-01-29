#include "widgets.h"

lv_obj_t * create_simple_button(lv_obj_t * parent, char * label_text){
    lv_obj_t * button = lv_obj_create(parent);
    lv_obj_t * label = lv_label_create(button);
    //lv_obj_remove_style_all(button);
    lv_label_set_text(label,label_text);
    lv_obj_set_style_text_color(button,lv_color_hex(0xBB00FF),LV_PART_ANY | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(button,lv_color_hex(0xFFAAFF),LV_PART_ANY | LV_STATE_FOCUSED);
    lv_obj_center(label);
    lv_obj_set_size(button,DEFAULT_BUTTON_SIZE*4, DEFAULT_BUTTON_SIZE);
    //lv_obj_set_style_bg_color(label, lv_color_hex(0x00FFAA),0);
    return button;
}