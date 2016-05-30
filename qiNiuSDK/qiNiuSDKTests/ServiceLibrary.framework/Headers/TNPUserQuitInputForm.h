//
//  TNPUserQuitInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserQuitInputForm : NSObject
//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;
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
//描述：用户token
//类型：String
@property (nonatomic,copy) NSString * token;


@end
