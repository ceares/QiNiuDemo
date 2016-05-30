//
//  TNPUserCheckBirthdayInputForm.h
//  ServiceLibrary
//
//  Created by SONGQG on 15/5/21.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserCheckBirthdayInputForm : NSObject

//用户账号
@property(nonatomic,copy) NSString *mobile;

//用户生日格式：yyyyMMdd
@property(nonatomic,copy) NSString *birthday;
//描述：区号
//类型：String
@property (nonatomic,copy) NSString * teleCode;

@end
