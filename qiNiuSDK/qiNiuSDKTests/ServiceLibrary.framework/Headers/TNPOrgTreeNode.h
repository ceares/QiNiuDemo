//
//  TNPOrgTreeNode.h
//  ServiceLibrary
//
//  Created by chunxu on 15/5/25.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPOrgTreeNode : NSObject

/**
 * 描述：组织树节点id 类型：Long 取值范围：>0
 */

@property (nonatomic,copy) NSString * nodeId;

/**
 * 描述：组织feedId  类型：String  取值范围：o_orgId
 */
@property (nonatomic,copy) NSString * feedId;

/**
 * 描述：维度id  类型：Long 取值范围：>0
 */
@property (nonatomic,copy) NSString * dimensionId;

/**
 * 描述：父组织树节点id 根节点是-1  类型：Long  取值范围：>0
 */
@property (nonatomic,copy) NSString * parentId;

/**
 * 描述：名称
 */
@property (nonatomic,copy) NSString * name;

/**
 * 描述：显示顺序  类型：Integer  取值范围：>0
 */
@property (nonatomic,copy) NSString * ord;

/**
 * 描述：创建时间 类型：Long  取值范围：> 0
 */
@property (nonatomic,copy) NSString * createTime;

/**
 * 描述：更新时间 类型:Long  取值范围：>0
 */
@property (nonatomic,copy) NSString * updateTime;

/**
 * 描述：状态  类型：Integer  取值：1 正常 2删除
 */
@property (nonatomic,copy) NSString * status;

/**
 * 描述：子节点数  类型：Integer 取值：>=0
 */
@property (nonatomic,copy) NSString * subNumbers;
@end
