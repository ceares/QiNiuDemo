//
//  ServiceRequest+RecumbentforumRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/2/22.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (RecumbentforumRequest)

/** 获取话题列表接口
 */
- (void)gettopicSucceed:(void(^)(NSArray *))succeed
                    failure:(void(^)(NSError *))failure;


/** 获取聊天室接口
 
 必传字段：
 topicid
 */
- (void)getchatroomWithTNP:(TNPRecumbentforumGetchatroomInputForm *)TNP
                    succeed:(void(^)(NSDictionary *))succeed
                    failure:(void(^)(NSError *))failure;


/** 创建新聊天室接口
 
 必传字段：
 topicid	话题id
 feedid	feedid
 userid	userid
 toonKey	toonKey(内部已封装)
 */
- (void)createchatroomWithTNP:(TNPRecumbentforumCreatechatroomInputForm *)TNP
                   succeed:(void(^)(NSDictionary *))succeed
                   failure:(void(^)(NSError *))failure;

@end
