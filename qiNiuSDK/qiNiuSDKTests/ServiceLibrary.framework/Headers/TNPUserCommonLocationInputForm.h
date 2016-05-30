//
//  TNPUserCommonLocationInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserCommonLocationInputForm : NSObject
//描述：常用位置id
//类型：Long
@property (nonatomic,copy) NSString * commonLocationId;

//描述：用户id
//类型：Long
@property (nonatomic,copy) NSString * userId;

//描述：常用位置名称
//类型：String
@property (nonatomic,copy) NSString * name;

//描述：地址 用户输入的
//类型：String
@property (nonatomic,copy) NSString * address;

//描述：位置详细地址 地图定位的
//类型：String
@property (nonatomic,copy) NSString * locationDetail;

//描述：位置坐标 经纬度 地图定位的
//类型：String
@property (nonatomic,copy) NSString * locationCoordinate;

//描述：位置截图地址
//类型：String
@property (nonatomic,copy) NSString * screenshotsUrl;

//描述：添加时间
//类型：Long
@property (nonatomic,copy) NSString * createTime;

//描述：修改时间
//类型：Long
@property (nonatomic,copy) NSString * updateTime;

//描述：状态  0 删除 1 正常
//类型：Integer
@property (nonatomic,copy) NSString * status;

//地理代码
@property (nonatomic,copy) NSString* adcodes;
//商业区
@property (nonatomic,copy) NSString* businessArea;
//国家代码
@property (nonatomic,copy) NSString* countrycode;

@end
