//
//  TNPGetUserCommonPositionListInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/14.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGetUserCommonPositionListInputForm : NSObject
//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;//用户ID
//描述：增量更新时间
//类型：long
@property (nonatomic,copy) NSString * editTime;//增量更新时间
//地理代码
@property (nonatomic,copy) NSString* adcodes;
//商业区
@property (nonatomic,copy) NSString* businessArea;
//国家代码
@property (nonatomic,copy) NSString* countrycode;

@end
