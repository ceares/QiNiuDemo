//
//  TNPChatTransmissionInputForm.h
//  ServiceLibrary
//
//  Created by ZhuBruce on 15-5-18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPChatTransmissionInputForm : NSObject

//描述：发送方用户id
//类型：Long
//取值：正数
@property (nonatomic, copy) NSString* fromUserId;
//描述：发送方名片ID
//类型：Long
//取值：正数
@property (nonatomic, copy) NSString*  fromCardId;

//描述：发送方名片名称
@property (nonatomic, copy) NSString*  fromCardName;

//描述：接收者用户id
//类型：Long
//取值：正数
@property (nonatomic, copy) NSString*  receiveUserId;

//描述：接收者id(单聊传入接收者cardId,群聊传入groupId)
//类型：Long
//取值：正数
@property (nonatomic, copy) NSString*  receiverId;

//描述：接收者名称
@property (nonatomic, copy) NSString*  receiverName;

//描述：消息类型
//取值：文本:text;语音:voice;图片image; 名片:card; 地理位置:location;收藏:collection; 常用资讯:information;
@property (nonatomic, copy) NSString*  msgType;

//描述：单聊、群聊标志位
//类型：Integer
//取值：0 ：单聊   1：群聊
@property (nonatomic, copy) NSString*  msgFlag;

//描述：消息体内容
@property (nonatomic, copy) NSString*  content;

@end
