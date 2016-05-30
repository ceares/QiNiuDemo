//
//  TNPUserRegisterInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserRegisterInputForm : NSObject

//描述：注册手机号  必填参数
//类型：String
@property (nonatomic,copy) NSString* mobile;
//描述：推送设备信息
//类型：String
@property (nonatomic,copy) NSString * deviceToken;
//描述：只针对android:imei号
//类型：String
@property (nonatomic,copy) NSString* imei;
//描述：mac地址
//类型：String
@property (nonatomic,copy) NSString* macAddress;
//描述：针对ios的idfa获取
//类型：String
@property (nonatomic,copy) NSString* idfa;
//描述：针对ios的uuid获取：有方法
//类型：String
@property (nonatomic,copy) NSString* uuid;
//描述：设备名称：比如华为，iphone等
//类型：String
@property (nonatomic,copy) NSString* deviceName;
//描述：app版本,比如：linli-1.0.0
//类型：String
@property (nonatomic,copy) NSString* appVersion;
//描述：注册来源 手机端注册添“toon”
//类型：String
@property (nonatomic,copy) NSString* fromWhere;
//描述： 渠道 分发渠道
//类型：String
@property (nonatomic,copy) NSString* channel;
//描述： 分发代码
//类型：String
@property (nonatomic,copy) NSString* code;
//描述：区号
//类型：String
@property (nonatomic,copy) NSString * teleCode;
//描述：注册后登录类型（密码登录还是验证码登录）
//类型：String
@property (nonatomic,copy) NSString * type;
//描述：注册时设置密码
//类型：String
@property (nonatomic,copy) NSString * password;

@end
