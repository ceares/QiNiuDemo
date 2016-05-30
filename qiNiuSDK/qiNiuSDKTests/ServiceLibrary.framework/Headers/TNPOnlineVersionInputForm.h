//
//  TNPOnlineVersionInputForm.h
//  ServiceLibrary
//
//  Created by SONGQG on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPOnlineVersionInputForm : NSObject

@property (nonatomic,copy) NSString * userId;

//描述：平台类型
//类型：String
//取值：android 1 ios 2
@property (nonatomic,copy) NSString * platform;
//描述：渠道号码
//类型：String
@property (nonatomic,copy) NSString * chNO;
//描述：版本号码
//类型：String
@property (nonatomic,copy) NSString * version;

//描述： 二维码的宽度 单位为像素
//类型：String
@property (nonatomic,copy) NSString * width;
//描述： 二维码的高度
//类型：String
@property (nonatomic,copy) NSString * height;



@end
