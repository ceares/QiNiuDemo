//
//  TNPUserVerfiyInfo.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/8.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserVerfiyInfo : NSObject

//用户Id
@property(nonatomic, copy) NSString *userId;

//设备信息：ios=token android=uuid(设备唯一Id)
@property(nonatomic, copy) NSString *deviceId;

//登录或注册后的认证令牌
@property(nonatomic, copy) NSString *userToken;

//连接合法性验证
@property(nonatomic, copy) NSString *ticket;

//平台类型：android/ios
@property(nonatomic, copy) NSString *platform;

//平台版本，比如：ios是6.0  android 5.1
@property(nonatomic, copy) NSString *platformVersion;

//描述：app版本，比如：2.6
//类型：String
@property(nonatomic, copy) NSString *appVersion;

@end
