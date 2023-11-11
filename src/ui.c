/*
 * @Author: Jiu_xiao mcmrzy@163.com
 * @Date: 2023-11-01 13:15:08
 * @LastEditors: Jiu_xiao mcmrzy@163.com
 * @LastEditTime: 2023-11-01 14:28:57
 * @FilePath: \WeatherClockV1.0\src\ui.c
 * @Description: QQ:1924172518
 * 微信jiuxiaoweixin
 * Copyright (c) 2023 by Maoz, All Rights Reserved. 
 */
// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_root;
lv_obj_t *ui_City;
lv_obj_t *ui_weatherlogo;
lv_obj_t *ui_Temperature;
lv_obj_t *ui_Time;
lv_obj_t *ui_hour;
lv_obj_t *ui_minuate;
lv_obj_t *ui_second;
lv_obj_t *ui_weatherbox;
lv_obj_t *ui_weather;
lv_obj_t *ui_week;
lv_obj_t *ui_Date;
lv_obj_t *ui_temp;
lv_obj_t *ui_Label15;
lv_obj_t *ui_Bar1;
lv_obj_t *ui_Bar2;
lv_obj_t *ui_Label16;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Label2;
lv_obj_t *ui_Image8;
lv_obj_t *ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}
