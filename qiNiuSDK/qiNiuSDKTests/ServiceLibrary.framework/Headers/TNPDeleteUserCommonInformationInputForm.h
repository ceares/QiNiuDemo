//
//  TNPDeleteUserCommonInformationInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPDeleteUserCommonInformationInputForm : NSObject
//描述：常用咨询ID
//类型：Long
@property (nonatomic,copy) NSString * commonInformationId;

//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;
@end
