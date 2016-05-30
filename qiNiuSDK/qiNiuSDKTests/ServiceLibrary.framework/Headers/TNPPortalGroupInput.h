//
//  TNPPortalGroupInput.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/5/10.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPPortalGroupInput : NSObject

/***0删除；1正常*/
@property (nonatomic,copy) NSString * action;
/***关联ID*/
@property (nonatomic,copy) NSString * cgId;
/**门户feedId*/
@property (nonatomic,copy) NSString * comyFeedId;
@property (nonatomic,copy) NSString * createTime;
/***关联的feedId**/
@property (nonatomic,copy) NSString * groupFeedId;
/****群组类型*/
@property (nonatomic,copy) NSString * type;
@property (nonatomic,copy) NSString * updateTime;


@end
