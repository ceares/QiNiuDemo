//
//  ServiceRequest+punctualitytrystRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/29.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (punctualitytrystRequest)

/** 判断是否已注册应用接口
 
 必填参数：
 //描述：用户id 类型:Long
 private String userId;
 */
- (void)existRegisterSucceed:(void(^)(NSDictionary *))succeed
                     failure:(void(^)(NSError *))failure;

/** 新增资料接口
 
 必填参数：
 //描述：用户id 类型:Long
 private String userId;
 
 //描述：名片feedId 类型:String
 private String feedId;
 
 //描述：名片头像 类型：String
 
 private String avatarId;
 
 //描述：性别 类型:Integer  取值范围：0：男 1：女
 private String sex;
 
 //描述：年龄 类型：Integer 取值范围 1-150 之间的数字
 private String age;
 */
- (void)registCardInfoWithTNP:(TrystInfoForm *)TNP
                     succeed:(void(^)())succeed
                     failure:(void(^)(NSError *))failure;

@end
