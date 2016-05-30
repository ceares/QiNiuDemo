//
//  ServiceRequest+ContentRequest.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/26.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (ContentRequest)

/** 自动关注陈总

 */
- (void)followMeTNP:(TNPFollowMeInputForm *)TNP
                 succeed:(void(^)(NSDictionary *))succeed
                 failure:(void(^)(NSError *))failure;
@end
