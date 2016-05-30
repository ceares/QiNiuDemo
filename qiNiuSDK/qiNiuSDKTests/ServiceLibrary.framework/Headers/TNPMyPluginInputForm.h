//
//  TNPMyPluginInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPMyPluginInputForm : NSObject


//描述： 用户ID
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * userId;

//描述： 我的插件的主键ID
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * myPluginId;
//描述： 展板名称
//类型：String
@property (nonatomic,copy) NSString * myPluginName;
//描述：原始的插件ID
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * orgMyPluginId;

//描述： 公开状态
//类型：Integer
//取值：1公开；0不公开
@property (nonatomic,copy) NSString * publicStatus;


//描述： 授权管理人id
//类型：String
//取值：举例213|2,214|2
@property (nonatomic,copy) NSString * adminIds;


//描述： 授权可查看人员id
//类型：String
//取值：举例213|2,214|2
@property (nonatomic,copy) NSString * showIds;


//描述： 新增授权可查看人员id
//类型：String
//取值：举例213|2,214|2
@property (nonatomic,copy) NSString * addShowIds;


//描述： 删除可查看人员id
//类型：String
//取值：举例213|2,214|2
@property (nonatomic,copy) NSString * delShowIds;

//描述： 数据来源
//类型：Integer
//取值： 1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片

@property (nonatomic,copy) NSString * componentId;

//描述： 插件id
//类型：Integer
@property (nonatomic,copy) NSString * pluginId;

//描述： 用户对象id，可以是账号id或名片id
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * userObjId;


//描述： 用户对象id类型
//类型：Integer
//取值： 1 是账号id；2名片id
@property (nonatomic,copy) NSString * userObjType;


//描述： 用户对象id类型，
//类型：Integer
//取值： 1 是账号id；2名片id
@property (nonatomic,copy) NSString * orgUserObjType;

//描述： 用户对象id，可以是账号id或名片id
//类型：Long
@property (nonatomic,copy) NSString * orgUserObjId;

//描述： 状态
//类型：Integer
//取值：1 在线状态 0删除状态
@property (nonatomic,copy) NSString * status;

//描述： 排序
//类型：Integer
@property (nonatomic,copy) NSString * sort;
//描述： 名片ID
//类型：Long
@property (nonatomic,copy) NSString *cardFeedId;

//描述： 组件id：可以是活动id；或其他的应用的id
//类型：Long
@property (nonatomic,copy) NSString *feedId;
@end
