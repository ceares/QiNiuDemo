//
//  TNPSheetInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPSheetInputForm : NSObject

//描述：用户ID
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * userId;

//描述： 自定义名称
//类型：String
@property (nonatomic,copy) NSString * myPluginName;

//描述： 表格id
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * sheetId;


//描述： 样式
//类型：String
@property (nonatomic,copy) NSString * styleContent;


//描述：用户名片FeedID，当插件为用户级插件时，名片FeedID为空（frame提供） 必填
//类型：String
@property (nonatomic,copy) NSString * cardFeedId;

//描述：活动FeedID或群组FeedID等（frame提供） 必填
//类型：String
@property (nonatomic,copy) NSString * feedId;


//描述： 自定义表格内容
//类型：String
@property (nonatomic,copy) NSString * sheetContent;


//描述： 数据来源
//类型：Integer
//取值：1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
@property (nonatomic,copy) NSString * sheetSource;


//描述： 自定义表格状态：
//类型：Integer
//取值：1 在线状态 0删除状态
@property (nonatomic,copy) NSString * sheetStatus;

//描述： 我的插件ID
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * myPluginId;

//描述： 绑定的原始的我的插件iD
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * orgMyPluginId;

//描述： 创建自定义表格用户id
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * sheetUserId;

//描述：跳转链接
//类型：String
@property (nonatomic,copy) NSString * urlLink;

@end
