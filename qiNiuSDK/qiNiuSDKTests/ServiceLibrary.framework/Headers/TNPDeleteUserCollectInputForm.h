//
//  TNPDeleteUserCollectInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPDeleteUserCollectInputForm : NSObject
//描述：收藏ID
//类型：long
@property (nonatomic,copy) NSString * collectId;

//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;
@end