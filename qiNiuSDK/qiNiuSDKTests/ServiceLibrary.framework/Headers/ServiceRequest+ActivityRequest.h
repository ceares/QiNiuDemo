//
//  ServiceRequest+ActivityRequest.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import "ServiceRequest.h"

@interface ServiceRequest (ActivityRequest)

/**
公开活动
 
 */
- (void)availableActivitiesOfFeedWithTNP:(TNPAvailableActivitiesOfFeedInputForm *)TNP
                                     succeed:(void (^)(NSArray *))succeed
                                     failure:(void (^)(NSError *))failure;


/**
 公开群活动
 
 */
- (void)availableActivitiesOfGroupWithTNP:(TNPAvailableActivitiesOfGroupInputForm *)TNP
                                     succeed:(void (^)(NSArray *))succeed
                                     failure:(void (^)(NSError *))failure;
@end
