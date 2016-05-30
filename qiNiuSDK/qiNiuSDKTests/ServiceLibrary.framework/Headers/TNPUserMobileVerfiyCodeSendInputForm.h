//
//  TNPUserMobileVerfiyCodeSendInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserMobileVerfiyCodeSendInputForm : NSObject
//描述：手机号
//类型：String
@property (nonatomic,copy) NSString * mobile;//手机号
//描述：区号
//类型：String
@property (nonatomic,copy) NSString * teleCode;

@end
