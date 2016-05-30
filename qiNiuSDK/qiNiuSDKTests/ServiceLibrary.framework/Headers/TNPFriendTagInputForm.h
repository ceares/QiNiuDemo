//
//  TNPFriendTagInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/27.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFriendTagInputForm : NSObject
/*** 自己的feed */
@property (nonatomic, copy) NSString* feedId;

/**** 好友feedId对应欢迎，egg: c_1,c_2 以"，" 分割 */
@property (nonatomic, strong) NSArray *feedIdRelationList;

/*** 好友feed */
@property (nonatomic, copy) NSString* friendFeedId;

/**
 * 标签id
 */
@property (nonatomic, copy) NSString* friendTagId;

/*** 好友标记ID集合 */
@property (nonatomic, strong) NSArray *friendTagIdList;

/****标签名称*/
@property (nonatomic, copy) NSString* tagName;

/*** 好友标记名称集合 */
@property (nonatomic, strong) NSArray *tagNameList;

/**
 * 标签名称(支持多个，用逗号分隔)
 */
@property (nonatomic, copy) NSString* tagNames;

/**
 * 最后更新时间
 */
@property (nonatomic, copy) NSString* updateTime;

/*** 用户ID */
@property (nonatomic, copy) NSString* userId;
@end
