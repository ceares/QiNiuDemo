//
//  OrgCardFieldValue.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/9/2.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrgCardFieldValue : NSObject
/**
 * 字段Id
	类型：Integer
 */
@property (nonatomic,copy)NSString * fieldId;

/**
 * 显示名称
 */
@property (nonatomic,copy)NSString * displayName;

/**
 * 字段值
 */
@property (nonatomic,copy)NSString * fieldValue;

/**
 * 搜索状态 0 不是搜索字段 1 是搜索字段
	类型：Integer
 */
@property (nonatomic,copy)NSString * searchStatus;

/**
 * 交换信息状态  0 删除 1 正常
	类型：Integer
 */
@property (nonatomic,copy)NSString * status;
@end
