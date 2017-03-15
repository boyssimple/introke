//
//  APIConfig.h
//  Introke
//
//  Created by zhouMR on 16/10/10.
//  Copyright © 2016年 luowei. All rights reserved.
//

#ifndef APIConfig_h
#define APIConfig_h


#define SERVER_HOST @"http://service.ingkee.com"

#define IMAGE_HOST @"http://img.meelive.cn/"

//首页数据
#define API_LiveGetTop @"api/live/gettop?&gender=1&gps_info=106.539965%2C29.583996&loc_info=CN%2C%E9%87%8D%E5%BA%86%E5%B8%82%2C%E9%87%8D%E5%BA%86%E5%B8%82&is_new_user=0&lc=0000000000000050&cc=TG0001&cv=IK4.0.01_Iphone&proto=7&idfa=4DCE0D10-BEA3-40D4-A3C5-23273283B303&idfv=7FDE5E60-46E9-4203-9560-AAF2634E64C1&devi=98e479647e845d7096f425e2f3000e38b527b173&osversion=ios_10.200000&ua=iPhone8_1&imei=&imsi=&uid=242570396&sid=20SgJ0S5blWqOPCYKUIDfY4PJS0gi0rK4Xi0DpA0ri2fkn1g24ZId&conn=wifi&mtid=8404ecf267bab4c0efd984b2339ef783&mtxid=8a25938d7c95&logid=&count=5&multiaddr=1&s_sg=f8a57a0cce177113f439629e9ed10ffa&s_sc=100&s_st=1489547255"

//广告地址
#define API_Advertise @"advertise/get"

//热门话题
#define API_TopicIndex @"api/live/topicindex"

//附近的人
#define API_NearLocation @"api/live/near_recommend"//?uid=85149891&latitude=40.090562&longitude=116.413353

//欢哥直播地址
#define Live_Dahuan @"rtmp://live.hkstv.hk.lxdns.com:1935/live/dahuan"

#endif /* APIConfig_h */
