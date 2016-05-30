//
//  TNPPosterInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPPosterInputForm : NSObject

//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;

//描述：主键id
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * posterId;

//描述： 用户对象id，可以是账号id或名片id
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * userObjId;

//描述： 用户对象id类型，
//类型：Integer
//取值：1 是账号id；2名片id
@property (nonatomic,copy) NSString * userObjType;

//描述： 消息标题
//类型：String
@property (nonatomic,copy) NSString * posterTitle;

//描述： 消息体内容json数据结构形式
//类型：String
@property (nonatomic,copy) NSString * posterContent;

//描述：数据来源
//类型：Integer
//取值：1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片

@property (nonatomic,copy) NSString * posterSource;

//描述： 消息状态
//类型：Integer
//取值：1 在线状态 0待审核状态 -1删除状态
@property (nonatomic,copy) NSString * posterStatus;

//描述： 展板ID
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * myPluginId;

//描述： 组件id：可以是具体活动id；或其他具体应用的id
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * componentDataId;

//描述： 用户名片ID
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * posterUserCardId;

//描述： 用户id
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * posterUserId;

//描述： 插件名称
//类型：String
@property (nonatomic,copy) NSString * myPluginName;

//描述： 绑定的原始的我的插件ID
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * orgMyPluginId;


//描述： 样式
//类型：String
@property (nonatomic,copy) NSString * styleContent;

//描述： 用户名片ID（cardFeedId）
//类型：String
@property (nonatomic,copy) NSString * cardFeedId;

//描述： 组件id：可以是具体活动id；或其他具体应用的id
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * feedId;

//描述：跳转链接
//类型：String
@property (nonatomic,copy) NSString * urlLink;

@end
