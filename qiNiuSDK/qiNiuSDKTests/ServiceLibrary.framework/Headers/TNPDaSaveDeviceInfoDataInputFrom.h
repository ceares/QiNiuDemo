//
//  TNPDaSaveDeviceInfoDataInputFrom.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/19.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPDaSaveDeviceInfoDataInputFrom : NSObject

//操作ID operationId	字符	唯一标识记录的UUID
@property (nonatomic,copy) NSString * oi;
//操作类型operationType	字符	1.启动toon 5.登录toon 2.退出toon 6.杀死toon进程
@property (nonatomic,copy) NSString * ot;
//启动标识 startFalg	字符	客户端生成的UUID，在一个启动退出过程中保持唯一
@property (nonatomic,copy) NSString * sf;
//设备号 devicesNumber	字符	优先取imei号，如果为空取mac
@property (nonatomic,copy) NSString * dn;
//用户ID userId	字符	非登陆情况下为空
@property (nonatomic,copy) NSString * ui;
//设备型号 devicesCategory	字符	机型
@property (nonatomic,copy) NSString * dc;
//操作系统 operatingSystem	字符	运行应用的操作系统
@property (nonatomic,copy) NSString * os;
//操作系统版本 operSysVersion	字符	运行应用的操作系统版本号
@property (nonatomic,copy) NSString * ov;
//TOON版本 toonVersion	字符
@property (nonatomic,copy) NSString * tv;
//TOON-Bulid版本 bulidVersion	字符
@property (nonatomic,copy) NSString * bv;
//分辨率 resolution	字符	运行应用的设备屏幕分辨率
@property (nonatomic,copy) NSString * rs;
//网络情况（联网方式）network	字符	1:WIFI 2:4G 3:3G 4:GPRS 5:其他
@property (nonatomic,copy) NSString * nw;
//运营商 operators	字符	1中国移动 2中国电信 3中国联通 4其他
@property (nonatomic,copy) NSString * op;
//渠道 channel	字符	产品来源
@property (nonatomic,copy) NSString * ch;
//激活 isActivation	字符	1第一次启动 0 非第一次启动
@property (nonatomic,copy) NSString * at;
//数据版本 dataVersion	字符	当前取值为 4 注：后续弱改动版本号另行通知
@property (nonatomic,copy) NSString * dv;
//Ip地址 ip		ip地址，服务器自动获取
@property (nonatomic,copy) NSString * ip;
//接收时间 receiveTime		接收时间，服务器自动获取
@property (nonatomic,copy) NSString * rt;

@end
