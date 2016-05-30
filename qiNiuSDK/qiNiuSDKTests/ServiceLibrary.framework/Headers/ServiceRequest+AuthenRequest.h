//
//  ServiceRequest+AuthenRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/2/23.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (AuthenRequest)


/** 提交修改名片修改信息
 
 private String feedId;//feedId
 private Integer cardType;//名片类型
 private String applyInfo;//申请信息（大的json串）
 */
- (void)addCardFieldsApplyWithTNP:(TNPCardFieldsApplyInput *)TNP
                              succeed:(void(^)(NSString *))succeed
                              failure:(void(^)(NSError *))failure;

/** 根据名片类型 获取认证的列表
 
 private Long userId;（选填）
 private String feedId;（必传）
 private Integer cardType;(必传)
 */
- (void)obtainCardAuthenResultListWithTNP:(TNPCardAuthenInput *)TNP
                          succeed:(void(^)(NSArray *))succeed
                          failure:(void(^)(NSError *))failure;

/** 获取用户资料夹
 
 */
- (void)obtainUserMaterialSucceed:(void(^)(NSArray *))succeed
                                  failure:(void(^)(NSError *))failure;

/** 根据名片类型 获取认证的列表
 
 auditId：资料id
 */
- (void)delUserMaterialWithTNP:(TNPMaterialDataInput *)TNP
                                  succeed:(void(^)(NSString *))succeed
                                  failure:(void(^)(NSError *))failure;

@end
