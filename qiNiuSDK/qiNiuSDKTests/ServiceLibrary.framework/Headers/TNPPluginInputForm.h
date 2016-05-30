//
//  TNPPluginInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPPluginInputForm : NSObject

//描述：用户主键Id
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * userId;

//描述：来源
//类型：Integer
//取值：1:活动 2:个人名片 3:用户中心  4:通知 5:消息 6:群聊 7:通讯录8:收藏夹 9:交互模块 10:搜索11:评论12:分享13:群组14:不吐不快15:企业名片16:员工名片
@property (nonatomic,copy) NSString * componentId;


@end
