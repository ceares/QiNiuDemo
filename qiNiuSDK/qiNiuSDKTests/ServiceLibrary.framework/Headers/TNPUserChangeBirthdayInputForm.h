//
//  TNPUserChangeBirthdayInputForm.h
//  ServiceLibrary
//
//  Created by SONGQG on 15/5/21.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserChangeBirthdayInputForm : NSObject

//用户ID
@property(nonatomic,copy) NSString *userId;

//用户生日格式：yyyyMMdd
@property(nonatomic,copy) NSString *birthday;

@end
