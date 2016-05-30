//
//  TNPChatRoomInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/24.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPChatRoomInputForm : NSObject
/**
 * 操作feedId
 */
@property (nonatomic, copy) NSString *feedId;

/**
 * 被操作的聊天室ID
 */
@property (nonatomic, copy) NSString *roomId;

/**
 * 操作者的UserId
 */
@property (nonatomic, copy) NSString *userId;
@end
