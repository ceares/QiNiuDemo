//
//  TNPUserEmailVerfiyCodeSendInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserEmailVerfiyCodeSendInputForm : NSObject
//描述：帐号
//类型：String
@property (nonatomic,copy) NSString * mobile;
//描述：区号
//类型：String
@property (nonatomic,copy) NSString * teleCode;

@end
