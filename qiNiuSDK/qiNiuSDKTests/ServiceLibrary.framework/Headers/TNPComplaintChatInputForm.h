//
//  TNPComplaintChatInputForm.h
//  ServiceLibrary
//
//  Created by chunxu on 15/5/19.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPComplaintChatInputForm : NSObject
@property (nonatomic,copy) NSString * cardId;//发起投诉者(名片ID)
@property (nonatomic,copy) NSString * complaintCause;//投诉原因
@property (nonatomic,copy) NSString * beComplainantType;//被投诉体类型
@property (nonatomic,copy) NSString * complaintedCardId;//被投诉名片id
@property (nonatomic,copy) NSString * complaintedUserId;//被投诉用户id
@property (nonatomic,copy) NSString * complaintedGroupId;//被投诉群id
@property (nonatomic,copy) NSString * content;//投诉内容 约定为JsonArray


@end
