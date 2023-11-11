/*
 * @Author: Jiu_xiao mcmrzy@163.com
 * @Date: 2023-10-29 04:23:59
 * @LastEditors: Jiu_xiao mcmrzy@163.com
 * @LastEditTime: 2023-11-12 04:06:32
 * @FilePath: \WeatherClockV1.0\include\get.h
 * @Description: QQ:1924172518
 * 微信jiuxiaoweixin
 * Copyright (c) 2023 by Maoz, All Rights Reserved. 
 */
#include <ArduinoJson.h>
#include <HTTPClient.h>//获取http
#include <WiFi.h>


void getCityandWeather();//获取天气函数
void get_init();

extern String city;//所在地名称
extern int Weather_now_code;//气象代码
extern int temperature;//气温
extern String Weather;//天气实况
 