//
//  TNPGroupQRInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/14.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGroupQRInputForm : NSObject
/**
 * 描述:活动二维码的宽度 类型：整型 取值范围：大于0的整数
 */
@property (nonatomic,copy)NSString * width ;
/**
 * 描述:活动二维码的高度 类型：整型 取值范围：大于0的整数
 */
@property (nonatomic,copy)NSString * height ;

/**
 * 描述：群组的feedId
 */
@property (nonatomic,copy)NSString * feedId;
/**
	* 描述：当前用户id 类型：长整形 取值范围：大于0的整数
	*/
@property (nonatomic,copy)NSString * userId;
/**
	* 描述：名片feedId
	*/
@property (nonatomic,copy)NSString * cardfeedId;
/**
	* 面熟：名片类型 类型：整形 取值范围： 1 个人名片 2 组织名片 3 成员名片
	*/
@property (nonatomic,copy)NSString * cardType ;

@end
