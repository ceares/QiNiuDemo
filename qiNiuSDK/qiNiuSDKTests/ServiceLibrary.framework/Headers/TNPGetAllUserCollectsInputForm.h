//
//  TNPGetAllUserCollectsInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGetAllUserCollectsInputForm : NSObject

//描述：增量更新时间
//类型：String
@property (nonatomic,copy) NSString * updateTime;
//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;
//描述：收藏类型
//类型：String
@property (nonatomic,copy) NSString * type;
@end
