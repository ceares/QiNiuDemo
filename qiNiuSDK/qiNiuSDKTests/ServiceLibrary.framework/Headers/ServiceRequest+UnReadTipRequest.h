//
//  ServiceRequest+UnReadTipRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/24.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (UnReadTipRequest)

/** 获取app所有业务对象的未读提示信息接口
 
 传入字段：
 
 String  bizIds
 
 */
- (void)obtainUnReadTipInfoWithTNP:(TNPUnReadTipForm *)TNP
                       succeed:(void(^)(NSArray *))succeed
                       failure:(void(^)(NSError *))failure;

@end
