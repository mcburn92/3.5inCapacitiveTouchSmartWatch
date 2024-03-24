// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: Test1

#include "../ui.h"


// COMPONENT HourWeather

lv_obj_t * ui_HourWeather_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_HourWeather;
    cui_HourWeather = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_HourWeather, 75);
    lv_obj_set_height(cui_HourWeather, 175);
    lv_obj_set_align(cui_HourWeather, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_HourWeather, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_HourWeather, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_HourWeather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_Image1;
    cui_Image1 = lv_img_create(cui_HourWeather);
    lv_img_set_src(cui_Image1, &ui_img_sunny_png);
    lv_obj_set_width(cui_Image1, 129);
    lv_obj_set_height(cui_Image1, 121);
    lv_obj_set_align(cui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(cui_Image1, 150);

    lv_obj_t * cui_WTime;
    cui_WTime = lv_label_create(cui_HourWeather);
    lv_obj_set_width(cui_WTime, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_WTime, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_WTime, LV_ALIGN_TOP_MID);
    lv_label_set_text(cui_WTime, "1200");
    lv_obj_set_style_text_color(cui_WTime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_WTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_WTime, &ui_font_Font3, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_WTemp;
    cui_WTemp = lv_label_create(cui_HourWeather);
    lv_obj_set_width(cui_WTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_WTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_WTemp, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(cui_WTemp, "42");
    lv_obj_set_style_text_color(cui_WTemp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_WTemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_WTemp, &ui_font_Font3, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_HOURWEATHER_NUM);
    children[UI_COMP_HOURWEATHER_HOURWEATHER] = cui_HourWeather;
    children[UI_COMP_HOURWEATHER_IMAGE1] = cui_Image1;
    children[UI_COMP_HOURWEATHER_WTIME] = cui_WTime;
    children[UI_COMP_HOURWEATHER_WTEMP] = cui_WTemp;
    lv_obj_add_event_cb(cui_HourWeather, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_HourWeather, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_HourWeather_create_hook(cui_HourWeather);
    return cui_HourWeather;
}

