//
//  TNPGroupChatInputForm.h
//  ServiceLibrary
//
//  Created by chunxu on 15/5/19.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGroupChatInputForm : NSObject

@property (nonatomic,copy) NSString * groupId; // 群聊id
@property (nonatomic,strong) NSArray * groupIds; // 群聊id列表
@property (nonatomic,copy) NSString * groupName; // 群聊名称
@property (nonatomic,copy) NSString * userId;// 用户id
@property (nonatomic,copy) NSString * feedId; // feedId
@property (nonatomic,copy) NSString * feedIds; // 兼容3.1.2之前的版本
@property (nonatomic,strong)NSArray * joinFeedId;// 参与者feedid 3.1.2之后的版本
@property (nonatomic,copy) NSString * lastUpdateTime ;// 最近更新时间
@property (nonatomic,copy) NSString * appVersion;//app版本
@property (nonatomic,copy) NSString * invitSeource ; // 邀请来源
@property (nonatomic,copy) NSString * dndStatus; //免打扰开关 0 关 1开
@property (nonatomic,copy) NSString * headImage;//群聊头像（群组创建群聊使用）
@property (nonatomic,copy) NSString * groupType ;//群聊类型，1普通群聊 2群组、活动创建群聊
@property (nonatomic,copy) NSString * businessType;//1热点讨论会

@end
