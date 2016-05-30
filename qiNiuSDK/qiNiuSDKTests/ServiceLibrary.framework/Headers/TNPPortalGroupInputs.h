//
//  TNPPortalGroupInputs.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/5/12.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPPortalGroupInputs : NSObject

/**门户feedId*/
@property (nonatomic,copy) NSString * comyFeedId;
/***关联的feedId**/
@property (nonatomic,strong) NSArray * groupFeedIds;
/****群组类型*/
@property (nonatomic,copy) NSString * type;

@property (nonatomic,copy) NSString * action;

@end
