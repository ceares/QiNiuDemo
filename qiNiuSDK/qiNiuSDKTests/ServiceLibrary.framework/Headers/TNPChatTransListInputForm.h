//
//  TNPChatTransListInputForm.h
//  ServiceLibrary
//
//  Created by chunxu on 15/5/19.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPChatTransListInputForm : NSObject
//沟通消息存在一次推送多条 TNPChatTransmissionInputForm
@property (nonatomic, strong) NSArray *chatTransmissionList;

@end
