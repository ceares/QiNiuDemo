//
//  ServiceRequest+Msgremote.h
//  ServiceLibrary
//
//  Created by syswin on 15/10/15.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (Msgremote)
/** 查询聊伴话题列表
 
 传入字段：
 
 String  userId
 
 String msgId
 
 */
- (void)obtainMsgRemoteWithTNP:(TNPMsgRemote *)TNP
                              succeed:(void(^)(NSArray *))succeed
                              failure:(void(^)(NSError *))failure;

/** 保存消息接口
 
 传入字段：
 
 String  userId
 
 String msgId
 
 */
- (void)saveMsgRemoteWithTNP:(TNPMsgRemoteListInputForm *)TNP
                       succeed:(void(^)(NSDictionary *))succeed
                       failure:(void(^)(NSError *))failure;

/** 批量删除消息接口
 
 传入字段：
 
 String  userId
 
 String msgId
 
 */
- (void)delMsgRemoteWithTNP:(TNPMsgRemoteListInputForm *)TNP
                       succeed:(void(^)(NSDictionary *))succeed
                       failure:(void(^)(NSError *))failure;
@end
