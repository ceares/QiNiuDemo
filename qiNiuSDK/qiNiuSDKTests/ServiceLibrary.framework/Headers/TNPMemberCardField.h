//
//  TNPMemberCardField.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/18.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPMemberCardField : NSObject
/**
 * 字段id
 */
//@PrimaryKey
@property (nonatomic,copy)NSString * fieldId;
/**
 * 描述：组织id 类型：string 取值：o_orgId
 */
@property (nonatomic,copy) NSString * feedId;
/**
 * 显示名称
 */
@property (nonatomic,copy) NSString * displayName;
/**
 * 显示顺序
 */
@property (nonatomic,copy)NSString * displayOrder;
/**
 * 字段类型 1  必选 2 可选
 */
@property (nonatomic,copy)NSString * fieldType;
/**
 * 视图类型 1 整数 2 小数 3 字符串 4 日期 5 时间
 * 6 日期时间 7 单选按(radio)钮 8 复选框(checkbox)
 * 9 下拉列表(select)  10 范围整数 11 文本域 15 选择部门
 */
@property (nonatomic,copy)NSString * viewType;

/**
 * 字段值
 */
@property (nonatomic,copy) NSString * fieldValue;

/**
 * 创建时间
 */
@property (nonatomic,copy)NSString * createTime;
/**
 * 更新时间
 */
@property (nonatomic,copy)NSString * updateTime;

/**
 * 选择状态 0 未选 1 已选
 */
@property (nonatomic,copy)NSString * selectedStatus;

/**
 * 状态 0 删除 1 正常
 */
@property (nonatomic,copy)NSString * status;

/*
 来源 0 系统预定义 1 用户自定义
*/
@property (nonatomic,copy) NSString * fromWhere;
@end
