idf_component_register(SRCS "WT32S3_S1.c"
                    INCLUDE_DIRS "include"
                    REQUIRES driver esp_lcd esp_adc lvgl
                    PRIV_REQUIRES esp_timer spiffs esp_psram)