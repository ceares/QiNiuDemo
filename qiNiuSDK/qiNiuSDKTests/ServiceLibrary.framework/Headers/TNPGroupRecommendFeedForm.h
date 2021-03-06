//
//  TNPGroupRecommendFeedForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/14.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGroupRecommendFeedForm : NSObject

@property (nonatomic,copy)NSString * relationId;

//feed改造对应groupId，规则：g_groupId 类型String
@property (nonatomic,copy)NSString * fromFeedId;

//feed改造对应groupId，规则：g_groupId 类型String
@property (nonatomic,copy)NSString * feedId;

//feed改造对应名片 群组 活动，规则：*_cardId g_groupId a_activityId  类型String
@property (nonatomic,copy)NSString * toFeedId;

//描述：推荐类型1:名片2:活动3:群组
@property (nonatomic,copy)NSString * recommendType;

//描述：状态（0:删除1:待审核2:审核已通过3:审核未通过）
@property (nonatomic,copy)NSString * status;

//描述：推荐原因(非必输)	 类型：String
@property (nonatomic,copy)NSString * recomReason;

//推荐主体ID
@property (nonatomic,copy)NSString * recomId;

//描述：获取推荐列表的类型  类型：Integer  说明：1:通讯录的推荐 2:周边的推荐
@property (nonatomic,copy)NSString * defaultRecomType;

@end
