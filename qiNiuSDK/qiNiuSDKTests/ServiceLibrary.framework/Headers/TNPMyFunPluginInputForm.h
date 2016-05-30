//
//  TNPMyFunPluginInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPMyFunPluginInputForm : NSObject

@property (nonatomic, copy) NSString* userId;

//描述：用户名片ID
//类型：Long
@property (nonatomic, copy) NSString* userCardId;

//描述：评论内容
//类型：String
@property (nonatomic, copy) NSString* commentContent;

//描述：活动FeedID或群组FeedID等（frame提供） 必填
//类型：String
@property (nonatomic, copy) NSString* feedId;

//描述：数据来源
//类型：int
//取值：1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
@property (nonatomic, copy) NSString* source;

//描述：主键id
//类型：Long
@property (nonatomic, copy) NSString* myFunId;

//描述：自定义的icon
//类型：String
@property (nonatomic, copy) NSString* pluginIcon;

//描述：成员状态是否公开
//类型：int
//取值：
@property (nonatomic, copy) NSString* memberPublicStatus;

//描述：游客公开状态
//类型：int
//取值：
@property (nonatomic, copy) NSString* guestPublicStatus;

//描述：pluginId
//类型：Long
@property (nonatomic, copy) NSString* pluginId;

//描述：自定义应用名称
//类型：String
@property (nonatomic, copy) NSString* appName;

//描述：自定义应用icon
//类型：String
@property (nonatomic, copy) NSString* appIcon;

//描述：排序位置
//类型：int
//取值：
@property (nonatomic, copy) NSString* sort;

//描述：是否公开
//类型：int
//取值：1公开 0不公开
@property (nonatomic, copy) NSString* publicStatus;

//描述：本次操作新增的管理人员信息
//类型：String
@property (nonatomic, copy) NSString* addAdminIds;

//描述：本次操作新增的使用人员信息
//类型：String
@property (nonatomic, copy) NSString* addShowIds;

//描述：本次操作删除的管理员人员信息
//类型：String
@property (nonatomic, copy) NSString* delAdminIds;

//描述：本次操作删除的使用人员信息
//类型：String
@property (nonatomic, copy) NSString* delShowIds;

//描述：本次操作删除的使用人员信息
//类型：Integer
//取值：企业可以有三种形式添加插件     1.添加插件给自己用   2.添加插件给所有员工  3.添加插件给部分员工  (企业添加插件时才传该参数)
@property (nonatomic, copy) NSString* useScope;
//描述：服务id
//类型：Long
@property (nonatomic, copy) NSString* serviceId;

//描述：插件类型
//类型：Integer
//取值：1  内容型插件  2 非内容型插件
@property (nonatomic, copy) NSString* pluginType;

//描述：轻链接 指向的内容
//类型：String
//取值：（前端传入 json格式   linkType： 1 为feedId   0为其他链接    content：对应的feedId或者url）  轻链接操作时才传此值
@property (nonatomic, copy) NSString* linkContent;
@end
