#include "screens.h"
#include "widgets.h"

lv_obj_t * menu_screen(void){
    lv_obj_t * main = lv_obj_create(NULL);
    lv_obj_t * central_panel = lv_obj_create(main);
    lv_obj_set_style_bg_color(central_panel, lv_color_hex(0x00CAFE),0);
    lv_obj_set_style_radius(central_panel,LV_RADIUS_CIRCLE,0);
    lv_obj_set_style_size(central_panel,CENTRAL_PANEL_RADIUS,0);
    lv_obj_center(central_panel);
    lv_obj_t * button_1 = create_simple_button(central_panel,"Button 1");
    lv_obj_set_pos(button_1, lv_pct(30),lv_pct(20));
    lv_obj_t * button_2 = create_simple_button(central_panel,"Button 2");
    lv_obj_set_pos(button_2, lv_pct(30),lv_pct(50));
    lv_obj_t * button_3 = create_simple_button(central_panel,"Button 3");
    lv_obj_set_pos(button_3, lv_pct(30),lv_pct(80));
    return main;
}