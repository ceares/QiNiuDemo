//
//  TNPChatTopicInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/10/12.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPChatTopicInputForm : NSObject

//栏目id
@property (nonatomic,copy) NSString * categoryId;

//话题记录id  默认最新时候id=0
@property (nonatomic,copy) NSString * recordId;

//查询动作 包括 0默认最新，1下划，2上划
@property (nonatomic,copy) NSString * operateType;

//返回记录数 默认为10条
@property (nonatomic,copy) NSString * pageSize;
@end
