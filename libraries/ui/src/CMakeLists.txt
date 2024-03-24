SET(SOURCES components/ui_comp_hour.c
    components/ui_comp_hourweather.c
    components/ui_comp_minute.c
    components/ui_comp.c
    screens/ui_Main.c
    screens/ui_SelectionMenu.c
    screens/ui_WIFIINFO.c
    screens/ui_Environment.c
    screens/ui_timeChange.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_sunny_png.c
    images/ui_img_evening_png.c
    fonts/ui_font_Font1.c
    fonts/ui_font_Font2.c
    fonts/ui_font_Large.c
    fonts/ui_font_Font3.c)

add_library(ui ${SOURCES})
