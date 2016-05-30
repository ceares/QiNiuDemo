//
//  TNPCardGroupRefInputForm.h
//  ServiceLibrary
//
//  Created by chunxu on 15/5/19.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardGroupRefInputForm : NSObject

/**
 * 群组的feedid
 */
@property (nonatomic,copy) NSString * feedId;

/**
 * 名片feedid
 */
@property (nonatomic,copy) NSString * cardFeedId;


/**
 * 关系id
 */
@property (nonatomic,copy) NSString * refId;


/**
 * 创建时间
 */
@property (nonatomic,copy) NSString * createTime;

/**
 * 更新时间
 */
@property (nonatomic,copy) NSString * updateTime;

/**
 * 关系级别
 */
@property (nonatomic,copy) NSString * level;

/**
 * 是否删除
 */
@property (nonatomic,copy) NSString * isDel;


/**
 * 审核状态 1待审核 2审核通过 3拒绝
 */
@property (nonatomic,copy) NSString * status;

/**
 * 时间戳
 */
@property (nonatomic,copy) NSString * version;

@end
