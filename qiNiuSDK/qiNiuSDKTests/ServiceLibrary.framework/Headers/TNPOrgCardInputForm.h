//
//  TNPOrgCardInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/15.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPOrgCardInputForm : NSObject

/**
 * 描述:组织名片feedId
 * 类型：String
 * 取值：o_cardId
 */
@property (nonatomic,copy)NSString * feedId;

/**
 * 描述:名片号
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy) NSString * cardNo;

/**
 * 描述:显示名称
 * 类型：String
 */
@property (nonatomic,copy) NSString * displayName;

/**
 * 描述: 显示名称拼音
 * 类型：String
 */
@property (nonatomic,copy) NSString * displayNamePinyin;

/**
 * 描述:推广语
 * 类型：String
 */
@property (nonatomic,copy) NSString * introduction;
/**
 * 描述:组织logo
 * 类型：String
 */
@property (nonatomic,copy) NSString * avatarId;
/**
 * 描述:背景图
 * 类型：String
 */
@property (nonatomic,copy) NSString * backgroundId;

/**
 * 描述:所属行业 多选
 * 类型：String
 */
@property (nonatomic,copy) NSString * industry;

/**
 * 描述:所属分类 多选
 * 类型：String
 */
@property (nonatomic,copy) NSString * category;

/**
 * 描述:位置信息
 * 类型：String
 */
@property (nonatomic,copy) NSString * locationDetail;

/**
 * 描述:位置坐标 经纬度
 * 类型：String
 */
@property (nonatomic,copy) NSString * locationCoordinate;

/**
 * 描述:交换模式
 * 类型：Integer
 * 取值： 1开发模式  2申请模式
 */
@property (nonatomic,copy) NSString * joinMethod;



/**
 * 描述:表单自动审核开关
 * 类型：Integer
 * 取值：0关  1开
 */
@property (nonatomic,copy)NSString * autoCheckStatus;

/**
 * 描述:使用者用户id
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy)NSString * userId;

/**
 * 描述:所有者id
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy)NSString * ownerId;

/**
 * 描述:创建者id
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy)NSString * creatorId;

/**
 * 描述:使用状态
 * 类型：Integer
 * 取值： 0停用   1使用  2发放中
 */
@property (nonatomic,copy)NSString * useStatus;

/**
 * 描述:权限类型
 * 类型：Integer
 * 取值：1所有权   2使用权   3管理权   4无权
 */
@property (nonatomic,copy)NSString * permissionType;

/**
 * 描述:创建时间
 * 类型：Long
 * 取值：时间的long值
 */
@property (nonatomic,copy)NSString * createTime;
/**
 * 描述: 更新时间
 * 类型：Long
 * 取值：时间的long值
 */
@property (nonatomic,copy)NSString * updateTime;

/**
 * 描述: 状态
 * 类型：Integer
 * 取值：0 删除 1 正常
 */
@property (nonatomic,copy)NSString * status;
/**
 * 描述: 扩展信息
 * 类型：String
 */
@property (nonatomic,copy) NSString * vcard;

/**
 * LBS位置状态 0 指定位置 1 实时位置 2 隐藏位置
 */
@property (nonatomic,copy)NSString * lbsStatus;
/**
 * 名片传播子分类英文逗号分隔
 */
@property (nonatomic,copy)NSString * spreadSubCategorys;

/**
 * 搜索开关 0 关  1 开
 */
@property (nonatomic,copy)NSString * searchStatus;

/**
 * 搜索字段值列表
 */
@property (nonatomic,strong)NSArray * searchFieldValueList;
@end
