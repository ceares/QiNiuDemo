//
//  TNPSearchOrgTreeInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/14.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPSearchOrgTreeInputForm : NSObject
/**
 * feedId
 */
@property (nonatomic,copy)NSString * feedId;


/**
 * 关键字
 */
@property (nonatomic,copy)NSString * keyword;

/**
 * 组织或员工feedId（必传参数）
 */
@property (nonatomic,copy)NSString * orgOrStaff;

/**
 * 组织树节点id
 */
@property (nonatomic,copy)NSString * nodeId;


/**
 * 成员名片状态  0 停用 1使用 2发放中
 */
@property (nonatomic,copy)NSString * useStatus;

/**
 * 增量更新
 */
@property (nonatomic,copy)NSString * updateTime;
@end
