//
//  ActivityAfficheForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/17.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ActivityAfficheForm : NSObject
//标题
@property (nonatomic,copy) NSString * title;
//内容
@property (nonatomic,copy) NSString * content;
//用户ID
@property (nonatomic,copy) NSString * userId;
//名片id
@property (nonatomic,copy) NSString * cardId;
//名片类型
@property (nonatomic,copy) NSString * cardType;
//绑定活动id
@property (nonatomic,copy) NSString * activityId;
//活动FeedID
@property (nonatomic,copy) NSString * feedId;
//名片feedid
@property (nonatomic,copy) NSString * cardfeedId;
//时间戳
@property (nonatomic,copy) NSString * version;
@end
