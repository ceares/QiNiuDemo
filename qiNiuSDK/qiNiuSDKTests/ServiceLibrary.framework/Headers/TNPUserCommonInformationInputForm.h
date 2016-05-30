//
//  TNPUserCommonInformationInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserCommonInformationInputForm : NSObject
//描述：常用资讯Id 自增长
//类型：Long
@property (nonatomic,copy) NSString * commonInformationId;
//描述：用户Id
//类型：Long
@property (nonatomic,copy) NSString * userId;
//描述：简单名称
//类型：String
@property (nonatomic,copy) NSString * simpleName;
//描述：内容
//类型：String
@property (nonatomic,copy) NSString * content;
//描述：添加时间
//类型：Long
@property (nonatomic,copy) NSString * createTime;
//描述：修改时间
//类型：Long
@property (nonatomic,copy) NSString * updateTime;
//描述：状态  0 删除 1 正常
//类型：Integer
@property (nonatomic,copy) NSString * status;
@end
