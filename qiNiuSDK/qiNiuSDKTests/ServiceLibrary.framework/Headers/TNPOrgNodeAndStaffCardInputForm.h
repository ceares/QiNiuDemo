//
//  TNPOrgNodeAndStaffCardInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/12.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPOrgNodeAndStaffCardInputForm : NSObject
/**
 * 描述：组织feedId
 * 类型：String
 * 取值：o_orgId
 */
@property (nonatomic,copy)NSString * feedId;
/**
 * 描述：组织树节点id
 * 类型：Long
 * 取值：>0
 */
@property (nonatomic,copy)NSString * nodeId;

/**
 * 描述：成员名片使用状态
 * 类型：Integer
 * 取值：0 停用 1 使用 2发放中
 */
@property (nonatomic,copy)NSString * useStatus;

/**
 * 描述：组织或员工feedId
 * 类型：String
 * 取值：o_orgId  s_staffId
 */
@property (nonatomic,copy)NSString * orgOrStaff;
@end
