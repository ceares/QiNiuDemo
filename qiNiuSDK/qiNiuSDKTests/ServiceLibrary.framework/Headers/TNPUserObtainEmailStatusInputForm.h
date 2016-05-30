//
//  TNPUserObtainEmailStatusInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/7/24.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserObtainEmailStatusInputForm : NSObject
//描述：用户id
//类型：String
@property (nonatomic,copy) NSString * userId;
//描述：用户注册手机号
//类型：String
@property (nonatomic,copy) NSString * mobile;
//描述：区号
//类型：String
@property (nonatomic,copy) NSString * teleCode;

@end
