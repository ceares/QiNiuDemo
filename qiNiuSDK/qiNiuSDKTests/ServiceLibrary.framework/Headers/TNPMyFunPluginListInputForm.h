//
//  TNPMyFunPluginListInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/25.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPMyFunPluginListInputForm : NSObject

//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;
//描述：请求来源
//类型：int
//取值：1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
@property (nonatomic,copy) NSString * source;

//描述：活动FeedID或群组FeedID等（frame提供） 必填
//类型：String
@property (nonatomic,copy) NSString * feedId;

//描述： 我的插件的列表信息
@property (nonatomic,strong) NSArray * myFunPluginList;

@end
