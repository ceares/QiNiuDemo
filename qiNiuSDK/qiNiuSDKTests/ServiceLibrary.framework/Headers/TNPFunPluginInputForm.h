//
//  TNPFunPluginInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFunPluginInputForm : NSObject

//描述： 数据来源
//类型：int
//取值：1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
@property (nonatomic,copy) NSString * source;
//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;

//描述：命名空间
//类型：String
@property (nonatomic,copy) NSString * nameSpace;
//描述：我的插件 Id
//类型:String
@property (nonatomic,copy) NSString * myFunId;

//插件的Id（栏目插件使用）
@property (nonatomic,copy) NSString * pluginId;

@end
