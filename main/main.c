#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "rom/gpio.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "WT32S3_S1.h"
#include "esp_timer.h"
#include "lvgl.h"

#define TAG "MAIN"

//extern void lv_demo_benchmark(void);

static void increase_lvgl_tick(void* arg) {
    lv_tick_inc(portTICK_PERIOD_MS);
}


void lvgl_task(void* arg) {
    WT32S3_S1_screen_init();

    // Tick interface for LVGL
    const esp_timer_create_args_t periodic_timer_args = {
        .callback = increase_lvgl_tick,
        .name = "periodic_gui"
    };
    esp_timer_handle_t periodic_timer;
    esp_timer_create(&periodic_timer_args, &periodic_timer);
    esp_timer_start_periodic(periodic_timer, portTICK_PERIOD_MS * 1000);


    //lv_demo_benchmark();

    for (;;) {
        lv_task_handler();
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}

void app_main(void) {
    xTaskCreatePinnedToCore(lvgl_task, NULL, 8 * 1024, NULL, 5, NULL, 1);
}
