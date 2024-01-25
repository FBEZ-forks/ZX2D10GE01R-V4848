set(LV_DEMO_DIR ../components/lvgl/demos)
file(GLOB_RECURSE LV_DEMOS_SOURCES ${LV_DEMO_DIR}/*.c)
file(GLOB_RECURSE LV_DEMOS_BENCHMARK ${LV_DEMO_DIR}/benchmark/*.c)

idf_component_register(
    SRCS "main.c" "screen.c" ${LV_DEMOS_SOURCES} ${LV_DEMOS_BENCHMARK}
    INCLUDE_DIRS "." ${LV_DEMO_DIR} ${LV_DEMO_DIR}/benchmark)

message(LV_DEMOS_SOURCES="${LV_DEMOS_SOURCES}")
set_source_files_properties(
    ${LV_DEMOS_SOURCES}
    PROPERTIES COMPILE_OPTIONS
    "-DLV_LVGL_H_INCLUDE_SIMPLE;-Wno-format;"
    )
