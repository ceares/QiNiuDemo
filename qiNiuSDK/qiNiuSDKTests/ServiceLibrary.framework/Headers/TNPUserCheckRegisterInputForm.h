//
//  TNPUserCheckRegisterInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserCheckRegisterInputForm : NSObject
//描述：手机号
//类型：String
@property (nonatomic,copy) NSString * mobile;
//描述：设备id
//类型：String
@property (nonatomic,copy) NSString * uuid;
//描述：区号
//类型：String
@property (nonatomic,copy) NSString * teleCode;

@end
