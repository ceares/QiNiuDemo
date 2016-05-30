//
//  ServiceRequest+MWAPRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/4/22.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (MWAPRequest)


/*
  *  根据传入的 URL 请求数据
  *  @param str         请求 URL 地址
  *  @param params      请求参数
  *  @param succeed
  *  @param failure
 */
- (void)mwapRequestWithURLStr:(NSString *)str
                       params:(NSDictionary *)params
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

@end
