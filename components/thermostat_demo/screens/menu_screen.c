#include "screens.h"
#include "widgets.h"
#include <stdio.h>

extern lv_group_t * g; 
extern lv_indev_t * knob_indev;

void button_1_cb(lv_event_t * e);
void button_2_cb(lv_event_t * e);
void button_3_cb(lv_event_t * e);

lv_obj_t * menu_screen(void){

    //lv_group_set_default(g);

    lv_obj_t * main = lv_obj_create(NULL);
    
    lv_obj_t * central_panel = lv_obj_create(main);
    lv_obj_set_style_bg_color(central_panel, lv_color_hex(0x00CAFE),0);
    lv_obj_set_style_radius(central_panel,LV_RADIUS_CIRCLE,0);
    lv_obj_set_style_size(central_panel,CENTRAL_PANEL_RADIUS,0);
    lv_obj_center(central_panel);

    lv_obj_t * button_1 = create_simple_button(central_panel,"Button 1");
    lv_obj_set_pos(button_1, lv_pct(30),lv_pct(20));
    lv_obj_add_event_cb(button_1,button_1_cb,LV_EVENT_ALL, NULL);
    lv_group_add_obj(g,button_1);
    
    lv_obj_t * button_2 = create_simple_button(central_panel,"Button 2");
    lv_obj_set_pos(button_2, lv_pct(30),lv_pct(50));
    lv_obj_add_event_cb(button_2,button_2_cb,LV_EVENT_ALL, NULL);
    lv_group_add_obj(g,button_2);
    
    lv_obj_t * button_3 = create_simple_button(central_panel,"Button 3");
    lv_obj_set_pos(button_3, lv_pct(30),lv_pct(80));
    lv_obj_add_event_cb(button_3,button_3_cb,LV_EVENT_ALL, NULL);
    lv_group_add_obj(g,button_3);
    
    printf("Object count: %ld\n", lv_group_get_obj_count(g));
    
    return main;
}


void button_1_cb(lv_event_t * e){
    printf("Clicked button 1 -- ONE \n");
    printf("Event:%d\n", e->code);
}

void button_2_cb(lv_event_t * e){
    printf("Clicked button 2 -- TWO \n");
    printf("Event:%d\n", e->code);
}
void button_3_cb(lv_event_t * e){
    printf("Clicked button 3 -- THREE \n");
    printf("Event:%d\n", e->code);
}
