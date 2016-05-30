//
//  TNPContactFeedInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/6/30.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPContactFeedInputForm : NSObject

//描述：用户id
//类型：Long
//取值：正数
@property (nonatomic,copy) NSString * userId;
//描述：名片id
//类型：Long
//取值：正数
@property (nonatomic,copy) NSString * cardId;

//描述：名片类型
//类型：Integer
//取值：1 个人名片  2 组织名片 3 员工名片
@property (nonatomic,copy) NSString * cardType;
//描述：最后更新时间
//类型：Long
//取值：正数
@property (nonatomic,copy) NSString * version;

@end
