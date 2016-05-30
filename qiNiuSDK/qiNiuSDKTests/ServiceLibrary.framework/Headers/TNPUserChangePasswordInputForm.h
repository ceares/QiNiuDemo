//
//  TNPUserChangePasswordInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserChangePasswordInputForm : NSObject
//描述：用户ID
//类型：Long
@property(nonatomic,copy) NSString *userId;
//描述：新密码
//类型：String
@property(nonatomic,copy) NSString *password;
//描述：旧密码
//类型：String
@property(nonatomic,copy) NSString *oldPassword;
//描述：修改方式，0为短信验证码修改不需要发送oldPassword；1为修改密码，需要发送oldPassword
//类型：long
@property(nonatomic,copy) NSString *type;
//描述：登录密码启用开关 0 关 1 开
//类型：Integer
@property(nonatomic,copy) NSString *loginProtectStatus;

@end
