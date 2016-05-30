//
//  TNPGroupUserRemoveInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGroupUserRemoveInputForm : NSObject

/**
 * 群组的feedid
 */
@property (nonatomic,strong)NSString * feedId;

/**
 * 名片feedid
 */
@property (nonatomic,strong)NSString * cardFeedId;

/**
 * 举报成员 前端操作标识(只在 前端标识移除成员的时候传入该参数)   值为12
 */

@property (nonatomic,strong)NSString * blackListStatus;

@end
