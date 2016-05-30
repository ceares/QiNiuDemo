//
//  TNPStaffCardInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/18.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPStaffCardInputForm : NSObject
/**
 * 描述：组织feedId 类型：String 取值：o_orgId
 */
@property (nonatomic,copy)NSString * orgFeedId;

/**
 * 描述：组织成员名片feedId 类型：String 取值：s_cardId
 */
@property (nonatomic,copy)NSString * staffFeedId;

/**
 * 描述:名片号
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy) NSString * cardNo;

/**
 * 描述:组织id
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy)NSString * orgId;

/**
 * 描述:组织名称
 * 类型：String
 */
@property (nonatomic,copy) NSString * orgName;

/**
 * 描述:头像
 * 类型：String
 */
@property (nonatomic,copy) NSString * avatar;

/**
 * 描述:背景图
 * 类型：String
 */
@property (nonatomic,copy) NSString * backgroundId;

/**
 * 描述:姓名
 * 类型：String
 */
@property (nonatomic,copy) NSString * name;

/**
 * 描述:姓名拼音
 * 类型：String
 */
@property (nonatomic,copy) NSString * namePinyin;

/**
 * 描述:职位
 * 类型：String
 */
@property (nonatomic,copy) NSString * position;

/**
 * 描述:交换模式
 * 类型：Integer
 * 取值： 1开发模式  2申请模式 3 验证模式
 */
@property (nonatomic,copy)NSString * joinMethod;

/**
 * 描述:表单自动审核开关
 * 类型：Integer
 * 取值：0关  1开
 */
@property (nonatomic,copy)NSString * autoCheckStatus;

/**
 * 描述:对外通讯录状态
 * 类型：Integer
 * 取值：0关  1开
 */
@property (nonatomic,copy)NSString * externalContactsStatus;

/**
 * 描述:共享个人客户资源
 * 类型：Integer
 * 取值： 0关  1开
 */
@property (nonatomic,copy)NSString * shareCustomerStatus;
/**
 * 描述:共享企业客户资源
 * 类型：Integer
 * 取值： 0关  1开
 */
@property (nonatomic,copy)NSString * shareOrgCustomerStatus;
/**
 * 描述:使用状态
 * 类型：Integer
 * 取值： 0停用   1使用  2发放中
 */
@property (nonatomic,copy)NSString * useStatus;
/**
 * 描述:使用者用户id
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy)NSString * userId;
/**
 * 描述:使用者手机号即Toon账号
 * 类型：String
 */
@property (nonatomic,copy) NSString * userMobilePhone;

/**
 * 描述:创建者id
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy)NSString * creatorId;

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
 *  描述: 扩展信息
 * 类型：String
 */
@property (nonatomic,copy) NSString * vcard;

/**
 * 企业名片拥有者id
 
 */
@property (nonatomic,copy)NSString * ownerId;
/**
 * app调用版本号
 */
@property (nonatomic,copy)NSString * version;
/**
 * 名片性质（0全职、1兼职）
 */
@property (nonatomic,copy)NSString * nature;

/**
 * 名片类别（0管理干部，1员工）
 */
@property (nonatomic,copy)NSString * category;

/**
 * 节点id
 */
@property (nonatomic,copy)NSString * nodeId;
@end
