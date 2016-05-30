//
//  TNPGroupListInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGroupListInputForm : NSObject

/**
 * 群组的feedid
 */
@property (nonatomic,copy) NSString * feedId;

/**
 * 名片feedid
 */
@property (nonatomic,copy) NSString * cardFeedId;

/**
 * 描述：列表类型 类型：整型 取值范围：  1、我发起的群组 2、我发起和我参加的群组
 */
@property (nonatomic,copy) NSString * listType;

/**
 * 描述：用户的id 类型：长整型 取值范围：大于0的整数
 */
@property (nonatomic,copy) NSString * userId;


/**
 * 描述:时间戳 类型：整型 取值范围：大于0的整数
 */
@property (nonatomic,copy) NSString * version;
@end
