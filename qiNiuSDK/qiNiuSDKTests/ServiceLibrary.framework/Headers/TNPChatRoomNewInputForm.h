//
//  TNPChatRoomNewInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/9/3.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPChatRoomNewInputForm : NSObject
/*
 * 活动群组feedId
 */
@property (nonatomic, copy) NSString* chatRoomId;

/**
 * 群聊id
 */
@property (nonatomic, copy) NSString* groupId;

/*
 * 加入者feedId
 */
@property (nonatomic, copy) NSString* feedId;

/*
 * 活动，群组创建者feedId
 */
@property (nonatomic, copy) NSString* creatorFeedId;
@end
