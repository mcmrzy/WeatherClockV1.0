/*
 * @Author: Jiu_xiao mcmrzy@163.com
 * @Date: 2023-11-12 02:02:50
 * @LastEditors: Jiu_xiao mcmrzy@163.com
 * @LastEditTime: 2023-11-12 04:07:42
 * @FilePath: \WeatherClockV1.0\src\display.cpp
 * @Description: QQ:1924172518
 * 微信jiuxiaoweixin
 * Copyright (c) 2023 by Maoz, All Rights Reserved. 
 */
/*
 * @Author: Jiu_xiao mcmrzy@163.com
 * @Date: 2023-10-31 17:36:21
 * @LastEditors: Jiu_xiao mcmrzy@163.com
 * @LastEditTime: 2023-11-01 16:44:09
 * @FilePath: \WeatherClockV1.0\src\display.cpp
 * @Description: QQ:1924172518
 * 微信jiuxiaoweixin
 * Copyright (c) 2023 by Maoz, All Rights Reserved. 
 */
#include "display.h"

static const uint16_t screenWidth  = 160;
static const uint16_t screenHeight = 128;
static int timecount=0;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];






TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char * buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif

//lv_timer_t * task1 = NULL;
//void task1_cb(lv_timer_t * tmr);
lv_timer_t * lvgl_task1 = NULL;
void lvgl_task1_cb(lv_timer_t * tmr);
void lvgl_gui_test(void);



/* Display flushing */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp );
}




void display_init(){
        lv_init();
#if LV_USE_LOG != 0
    lv_log_register_print_cb( my_print ); /* register print function for debugging */
#endif

    tft.begin();          /* TFT init */
    tft.setRotation( 1 ); /* Landscape orientation, flipped */
    
    analogWrite(TFT_BL, 128);
    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 10 );

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );

    lv_timer_t * lvgl_task1 = NULL;
    lvgl_gui_task();

    
    
    ui_init();
    
    
}







 
void lvgl_task1_cb(lv_timer_t * tmr)
{   
    
    if(timecount==60){
        getCityandWeather();
        timecount=0;
    }
    struct tm time_info;
    getLocalTime(&time_info);
    int month = time_info.tm_mon + 1;
    int day = time_info.tm_mday;
    int weekday = time_info.tm_wday;
    int hour = time_info.tm_hour;
    int minutes = time_info.tm_min;
    int second = time_info.tm_sec;
    switch_weekday(weekday);
    lv_label_set_text_fmt(ui_weather,"%s",Weather);//天气
    lv_label_set_text_fmt(ui_Temperature,"当前气温%d℃",temperature);
    lv_label_set_text_fmt(ui_City,"%s",city);//左上角城市
    lv_label_set_text_fmt(ui_Date,"%02d月%d日",month,day);
	lv_label_set_text_fmt(ui_hour, "%02d",hour);
    lv_label_set_text_fmt(ui_minuate, "%02d",minutes);
    lv_label_set_text_fmt(ui_second, "%02d",second);
    
    timecount++;
    
}
 
void lvgl_gui_task(void)
{
    lvgl_task1 = lv_timer_create(lvgl_task1_cb, 1000, 0);      // 运行周期为lvgl的1000个滴答时钟
}

void switch_weekday(int weekday){
    switch (weekday)
    {
    case 0:
        lv_label_set_text(ui_week,"周日");
        break;
    case 1:
        lv_label_set_text(ui_week,"周一");
        break;
    case 2:
        lv_label_set_text(ui_week,"周二");
        break;
    case 3:
        lv_label_set_text(ui_week,"周三");
        break;
    case 4:
        lv_label_set_text(ui_week,"周四");
        break;
    case 5:
        lv_label_set_text(ui_week,"周五");
        break;
    case 6:
        lv_label_set_text(ui_week,"周六");
        break;
    
    default:
        break;
    }
}
