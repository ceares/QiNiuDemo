//
//  TNPGroupTopicInputForm.h
//  ServiceLibrary
//
//  Created by chunxu on 15/5/19.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGroupTopicInputForm : NSObject
@property (nonatomic,copy) NSString * groupId;//群聊id
@property (nonatomic,copy) NSString * topicName;//话题名称
@property (nonatomic,copy) NSString * lastUpdateTime;//最近更新时间
@end
