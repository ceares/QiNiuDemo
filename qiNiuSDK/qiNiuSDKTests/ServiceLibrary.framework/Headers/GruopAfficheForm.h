//
//  GruopAfficheForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/17.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GruopAfficheForm : NSObject
//标题
@property (nonatomic,copy) NSString * title;
//内容
@property (nonatomic,copy) NSString * content;
//用户ID  类型Long
@property (nonatomic,copy) NSString * userId;
//名片id	  类型Long
@property (nonatomic,copy) NSString * cardId;
//名片类型  类型Integer
@property (nonatomic,copy) NSString * cardType;
//绑定群组id 类型Long
@property (nonatomic,copy) NSString * groupId;
//群组FeedID
@property (nonatomic,copy) NSString * feedId;
//名片feedid
@property (nonatomic,copy) NSString * cardfeedId;
//时间戳  Long
@property (nonatomic,copy) NSString * version;
@end
