//
//  TNPUserCheckMobileVerfiyCodeAndRegisterInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserCheckMobileVerfiyCodeAndRegisterInputForm : NSObject
//描述：手机号
//类型：String
@property (nonatomic,copy) NSString * mobile;
//描述：短信验证码
//类型：String
@property (nonatomic,copy) NSString * mobileVerfiyCode;
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
//描述：注册来源 手机端注册添“toon”
//类型：String
@property (nonatomic,copy) NSString * fromWhere;

// Publish channel. e.g AppStore
@property (nonatomic,copy) NSString * channel;
//描述：区号
//类型：String
@property (nonatomic,copy) NSString * teleCode;

@end
