//
//  ServiceRequest+OperationlogRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/23.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (OperationlogRequest)
/** 上传日志
 
 传入字段：
private  List<MultipartFile> file;   // 文件集合
 */
- (void)operationLogDoWithTNP:(TNPOperationInputForm *)TNP
                              succeed:(void(^)(NSDictionary *))succeed
                              failure:(void(^)(NSError *))failure;
@end
