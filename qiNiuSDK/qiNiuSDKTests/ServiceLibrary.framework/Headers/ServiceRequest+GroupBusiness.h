//
//  ServiceRequest+GroupBusiness.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/10/10.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (GroupBusiness)
/**
zip测试
 */
- (void)groupFeedListTNP:(TNPActivityListInputForm *)TNP
            succeed:(void(^)(NSDictionary *))succeed
            failure:(void(^)(NSError *))failure;
@end
