//
//  TNPGroupFeedListFrom.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGroupFeedListFrom : NSObject
//描述：活动feedId列表  类型：List
@property (nonatomic,strong)NSArray * feedIdList;

//描述：查询标识 类型：Integer 取值范围：1, 查询群组id对应群组人数list 2，查询群组id对应群聊id列表
@property (nonatomic,copy)NSString * queryType;

@end
