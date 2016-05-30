//
//  TNPFunPluginMsgCommentInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFunPluginMsgCommentInputForm : NSObject

//描述： 用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;

//描述： 用户名片ID
//类型：Long
@property (nonatomic,copy) NSString * userCardId;

//描述： 评论内容
//类型：String
@property (nonatomic,copy) NSString * commentContent;

//描述： 组件id：可以是具体活动id；或其他具体应用的id
//类型：Long
@property (nonatomic,copy) NSString * componentDataId;

//描述： 数据来源
//类型：int
//取值：
@property (nonatomic,copy) NSString * source;

//描述： 插件的主键id
//类型：Long
@property (nonatomic,copy) NSString * pluginId;
//描述： 开始id
//类型：Long
@property (nonatomic,copy) NSString * sinceId;
//描述： 结束id
//类型：Long
@property (nonatomic,copy) NSString * maxId;

//描述： 分页查询-每页几条
//类型：int
@property (nonatomic,copy) NSString * limit;

@end
