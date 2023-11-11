/*
 * @Author: Jiu_xiao mcmrzy@163.com
 * @Date: 2023-11-01 12:52:13
 * @LastEditors: Jiu_xiao mcmrzy@163.com
 * @LastEditTime: 2023-11-12 01:46:03
 * @FilePath: \WeatherClockV1.0\src\main.cpp
 * @Description: QQ:1924172518
 * 微信jiuxiaoweixin
 * Copyright (c) 2023 by Maoz, All Rights Reserved. 
 */
#include <Arduino.h>
#include <TFT_eSPI.h>
#include <lvgl.h>
#include "display.h"
#include "get.h"


void setup() {
    Serial.begin( 115200 ); 
    display_init();
    get_init();
    getCityandWeather();
}

void loop() {
  lv_timer_handler();
 // Serial.println("loop");
  //delay(1000);
}
