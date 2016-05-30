//
//  InterestGroupsInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/5.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface InterestGroupsInputForm : NSObject

/**
 * 当前页(第一页是1) 类型：Integer
 */
@property (nonatomic,copy) NSString * currentPage;

/**
 * 每页显示数量 类型：Integer
 */
@property (nonatomic,copy) NSString * pageSize;

/**
 * 用户id  类型：Long
 */
@property (nonatomic,copy) NSString * userId;

/**
 * 用户地理位置(y,x) 类型：String
 */
@property (nonatomic,copy) NSString * latilongitude;
@end
