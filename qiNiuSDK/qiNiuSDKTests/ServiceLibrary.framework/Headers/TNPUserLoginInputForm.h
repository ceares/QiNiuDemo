//
//  TNPUserLoginInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserLoginInputForm : NSObject
//描述：登录帐号
//类型：String
@property (nonatomic,copy) NSString * mobile;
//描述：密码
//类型：String
@property (nonatomic,copy) NSString * password;
//描述：登录模式
//类型：String
@property (nonatomic,copy) NSString * loginType;
//描述：推送设备信息
//类型：String
@property (nonatomic,copy) NSString * deviceToken;
//描述：只针对android:imei号
//类型：String
@property (nonatomic,copy) NSString * imei;
//描述：mac地址
//类型：String
@property (nonatomic,copy) NSString * macAddress;
//描述：针对ios的idfa获取
//类型：String
@property (nonatomic,copy) NSString * idfa;
//描述：针对ios的uuid获取：有方法
//类型：String
@property (nonatomic,copy) NSString * uuid;
//描述：设备名称：比如华为，iphone等
//类型：String
@property (nonatomic,copy) NSString * deviceName;
//描述：app版本,比如：linli-1.0.0
//类型：String
@property (nonatomic,copy) NSString * appVersion;
//描述：渠道
//类型：String
@property (nonatomic,copy) NSString * channel;
//描述：分发代码
//类型：String
@property (nonatomic,copy) NSString * code;
//描述：区号
//类型：String
@property (nonatomic,copy) NSString * teleCode;

@end
