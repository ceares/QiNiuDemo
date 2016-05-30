//
//  TNPOrgCardTransferInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/20.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPOrgCardTransferInputForm : NSObject

/*
 * 描述：主体名称  取值：动作发起方的名称
 */
@property (nonatomic,copy)NSString * name;

/**
 * 描述：转让id
 * 类型：Long
 * 聚会：>0
 */
@property (nonatomic,copy)NSString * transferId;

/**
 * 描述：名片FeedId
 * 类型：String
 * 取值：o_orgId
 */
@property (nonatomic,copy)NSString * feedId;

/**
 * 描述：转让方用户id
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy)NSString * fromUserId;

/**
 * 描述：转让方手机号
 * 类型：String
 */
@property (nonatomic,copy)NSString * fromMobilePhone;


/**
 * 描述：接收方用户id
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy)NSString * toUserId;

/**
 * 描述：接收方手机号
 * 类型：String
 */
@property (nonatomic,copy)NSString * toMobilePhone;

/**
 * 描述：转让时间
 * 类型：Long
 */
@property (nonatomic,copy)NSString * transferTime;

/**
 * 描述：转让完成时间
 * 类型：Long
 */
@property (nonatomic,copy)NSString * finishTime;

/**
 * 描述：收回时间 只针对转让使用权和管理权
 * 类型：Long
 */
@property (nonatomic,copy)NSString * takeBackTime;

/**
 * 描述：转让类型
 * 类型：Integer
 * 取值：1 转让所有权 2 转让使用权 3 转让管理权
 */
@property (nonatomic,copy)NSString * type;

/**
 * 描述：转让状态
 * 类型：Integer
 * 取值：1 完成 2 转让中 3 被拒绝 4 已撤销 5 收回
 */
@property (nonatomic,copy)NSString * transferStatus;

/**
 * 描述：状态
 * 类型：Integer
 * 取值：0 删除 1 正常
 */
@property (nonatomic,copy)NSString * status;

@end
