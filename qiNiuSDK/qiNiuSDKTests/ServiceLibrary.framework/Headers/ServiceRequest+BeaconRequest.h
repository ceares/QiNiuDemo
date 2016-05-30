//
//  ServiceRequest+BeaconRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/3/24.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (BeaconRequest)


/** 所有闪通相关的接口

 */
- (void)beaconRequestwithURL:(NSString *)urlStr
                     succeed:(void(^)(NSDictionary *))succeed
                     failure:(void(^)(NSError *))failure;

@end
