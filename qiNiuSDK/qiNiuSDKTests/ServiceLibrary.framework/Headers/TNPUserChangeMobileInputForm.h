//
//  TNPUserChangeMobileInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserChangeMobileInputForm : NSObject

//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;
//描述：用户新手机号
//类型：String
@property (nonatomic,copy) NSString * changeToMobile;
//描述：短信验证码
//类型：String
@property (nonatomic,copy) NSString * mobileVerfiyCode;
//描述：区号
//类型：String
@property (nonatomic,copy) NSString * teleCode;

@end
