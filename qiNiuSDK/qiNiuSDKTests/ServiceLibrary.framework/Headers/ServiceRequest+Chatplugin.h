//
//  ServiceRequest+Chatplugin.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/10/12.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (Chatplugin)
/** 查询获取聊伴类目
 
 */
- (void)obtainCategoryListSucceed:(void (^)(NSArray *))succeed
                    failure:(void (^)(NSError *))failure;

/** 查询聊伴话题列表
 
 //栏目id
 
 private Integer categoryId;
 
 //话题记录id  默认最新时候id=0
 
 private Integer recordId;
 
 //查询动作 包括 0默认最新，1下划，2上划
 
 private Integer operateType;
 
 */
- (void)obtainTopicContentListWithTNP:(TNPChatTopicInputForm *)TNP
                       succeed:(void(^)(NSDictionary *))succeed
                       failure:(void(^)(NSError *))failure;
@end
