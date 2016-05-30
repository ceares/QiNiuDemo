//
//  ServiceRequest+SrgsRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/3/3.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (SrgsRequest)


//将 tnp参数到 URL 中
- (void)srgsWithURL:(NSString *)url withTNP:(TNPSrgsInputForm *)TNP
            succeed:(void(^)(NSDictionary *))succeed
            failure:(void(^)(NSError *))failure;


@end
