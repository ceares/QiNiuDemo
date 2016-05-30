//
//  TNPBroadcastInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPBroadcastInputForm : NSObject
//描述:活动ID 类型:String 规则：*_activityId
@property (nonatomic,copy) NSString * feedId;

//描述:名片ID 类型:String 规则：*_cardId
@property (nonatomic,copy) NSString * cardFeedId;

//描述:传播大类  字段组装方式1#2,3#4 类型:String
@property (nonatomic,copy) NSString * broadcastCategory;

//描述:传播子类 字段组装方式4#5,6#7   类型:String
@property (nonatomic,copy) NSString * broadcastSubCategory;
@end
