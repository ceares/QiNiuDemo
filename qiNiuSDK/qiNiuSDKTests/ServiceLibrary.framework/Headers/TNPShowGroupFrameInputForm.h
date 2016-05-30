//
//  TNPShowGroupFrameInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPShowGroupFrameInputForm : NSObject
/**
 * 描述：访问者feedId
 */
@property (nonatomic,copy)NSString * fromFeedId;
/**
 * 描述：要获取面的群组的feedId
 */
@property (nonatomic,copy)NSString * toFeedId;
/**
 * 描述：访问面的类型 类型：整型 取值范围： 1、匿名面 2 好友面 3 配置面
 */
@property (nonatomic,copy)NSString * aspectType;//访问面类型
/**
 * 描述:访问时间戳 类型：整型 取值范围：大于0的整数
 */
@property (nonatomic,copy)NSString * version;//描述:时间戳 类型：整型 取值范围：大于0的整数
/**
 * 申请人数列表返回数量最大值
 */
@property (nonatomic,copy)NSString * maxApplicants;

@end
