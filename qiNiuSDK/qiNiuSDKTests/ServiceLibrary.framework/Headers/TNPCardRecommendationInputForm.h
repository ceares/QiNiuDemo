//
//  TNPCardRecommendationInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/10.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardRecommendationInputForm : NSObject
//描述：名片feedId
//类型：String
@property (nonatomic,copy) NSString * feedId;

//描述：用户id
//类型：Long
@property (nonatomic,copy) NSString * userId;

//描述：推荐的名片feedId
//类型：String
@property (nonatomic,copy) NSString * recommendFeedId;

//描述：推荐原因
//类型：String
@property (nonatomic,copy) NSString * recommendReason;

//描述：推荐状态
//类型：Integer
//取值：1 正常 2 待确认 3 已拒绝
@property (nonatomic,copy) NSString * recommendStatus;

//描述：排序的feedId
//类型：String
@property (nonatomic,copy) NSString * feedIds;

//描述：操作者feedId（通知用）
//类型：String
@property (nonatomic,copy) NSString * operatorFeedId;

//描述：更新时间（用于增量更新）
//类型：Long
@property (nonatomic,copy) NSString * version;

@end
