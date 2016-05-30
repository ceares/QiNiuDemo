//
//  TNPUserChangeEmailInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserChangeEmailInputForm : NSObject
//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;
//描述：用户邮箱
//类型：String
@property (nonatomic,copy) NSString * email;

@end
