//
//  TNPShareFriendInputForm.h
//  ServiceLibrary
//
//  Created by chunxu on 15/5/19.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPShareFriendInputForm : NSObject

/**
 * 用户id
 */
@property (nonatomic,copy) NSString * userId;
/**
 * 名片id
 */
@property (nonatomic,copy) NSString * cardId;
/**
 * 名片昵称
 */
@property (nonatomic,copy) NSString * nikename;
/**
 * 好友名片id
 */
@property (nonatomic,copy) NSString * friendCardId;
/**
 * 好友名片id集合
 */
//String
@property (nonatomic,strong)NSArray * friendCardIdList;
/**
 * 好友用户id集合
 */
//String
@property (nonatomic,strong)NSArray * friendUserIdList;

@end
