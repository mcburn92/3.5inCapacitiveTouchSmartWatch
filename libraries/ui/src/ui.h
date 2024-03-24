// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: Test1

#ifndef _TEST1_UI_H
#define _TEST1_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"

// SCREEN: ui_Main
void ui_Main_screen_init(void);
void ui_event_Main(lv_event_t * e);
extern lv_obj_t * ui_Main;
extern lv_obj_t * ui_Container2;
extern lv_obj_t * ui_Hour;
extern lv_obj_t * ui_Colon;
extern lv_obj_t * ui_Minute;
// SCREEN: ui_SelectionMenu
void ui_SelectionMenu_screen_init(void);
void ui_event_SelectionMenu(lv_event_t * e);
extern lv_obj_t * ui_SelectionMenu;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
void ui_event_Label5(lv_event_t * e);
extern lv_obj_t * ui_Label5;
void ui_event_Button4(lv_event_t * e);
extern lv_obj_t * ui_Button4;
extern lv_obj_t * ui_Label10;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Label4;
// SCREEN: ui_WIFIINFO
void ui_WIFIINFO_screen_init(void);
void ui_event_WIFIINFO(lv_event_t * e);
extern lv_obj_t * ui_WIFIINFO;
extern lv_obj_t * ui_Label8;
// SCREEN: ui_Environment
void ui_Environment_screen_init(void);
void ui_event_Environment(lv_event_t * e);
extern lv_obj_t * ui_Environment;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_HourWeather;
extern lv_obj_t * ui_HourWeather11;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_WTime1;
extern lv_obj_t * ui_WTemp1;
extern lv_obj_t * ui_HourWeather1;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_WTime2;
extern lv_obj_t * ui_WTemp2;
extern lv_obj_t * ui_HourWeather2;
extern lv_obj_t * ui_Image4;
extern lv_obj_t * ui_WTime3;
extern lv_obj_t * ui_WTemp3;
extern lv_obj_t * ui_HourWeather3;
extern lv_obj_t * ui_Image5;
extern lv_obj_t * ui_WTime4;
extern lv_obj_t * ui_WTemp4;
extern lv_obj_t * ui_HourWeather4;
extern lv_obj_t * ui_Image6;
extern lv_obj_t * ui_WTime5;
extern lv_obj_t * ui_WTemp5;
extern lv_obj_t * ui_HourWeather5;
extern lv_obj_t * ui_Image7;
extern lv_obj_t * ui_WTime6;
extern lv_obj_t * ui_WTemp6;
extern lv_obj_t * ui_HourWeather6;
extern lv_obj_t * ui_Image8;
extern lv_obj_t * ui_WTime7;
extern lv_obj_t * ui_WTemp7;
extern lv_obj_t * ui_HourWeather7;
extern lv_obj_t * ui_Image9;
extern lv_obj_t * ui_WTime8;
extern lv_obj_t * ui_WTemp8;
extern lv_obj_t * ui_HourWeather8;
extern lv_obj_t * ui_Image10;
extern lv_obj_t * ui_WTime9;
extern lv_obj_t * ui_WTemp9;
extern lv_obj_t * ui_HourWeather9;
extern lv_obj_t * ui_Image11;
extern lv_obj_t * ui_WTime10;
extern lv_obj_t * ui_WTemp10;
extern lv_obj_t * ui_Panel6;
extern lv_obj_t * ui_Panel4;
void ui_event_AQIBar(lv_event_t * e);
extern lv_obj_t * ui_AQIBar;
extern lv_obj_t * ui_AQIVal;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_Panel1;
void ui_event_TempBar(lv_event_t * e);
extern lv_obj_t * ui_TempBar;
extern lv_obj_t * ui_TEMP;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Panel3;
void ui_event_HumidBar(lv_event_t * e);
extern lv_obj_t * ui_HumidBar;
extern lv_obj_t * ui_Humid;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_Panel5;
void ui_event_COBar(lv_event_t * e);
extern lv_obj_t * ui_COBar;
extern lv_obj_t * ui_CO2;
extern lv_obj_t * ui_Label12;
// SCREEN: ui_timeChange
void ui_timeChange_screen_init(void);
void ui_event_timeChange(lv_event_t * e);
extern lv_obj_t * ui_timeChange;
void ui_event_Slider2(lv_event_t * e);
extern lv_obj_t * ui_Slider2;
void ui_event_Slider3(lv_event_t * e);
extern lv_obj_t * ui_Slider3;
extern lv_obj_t * ui_Hour1;
extern lv_obj_t * ui_Minute1;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_sunny_png);    // assets/Sunny.png
LV_IMG_DECLARE(ui_img_evening_png);    // assets/Evening.png



LV_FONT_DECLARE(ui_font_Font1);
LV_FONT_DECLARE(ui_font_Font2);
LV_FONT_DECLARE(ui_font_Large);
LV_FONT_DECLARE(ui_font_Font3);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
