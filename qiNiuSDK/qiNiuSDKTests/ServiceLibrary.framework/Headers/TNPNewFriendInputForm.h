//
//  TNPNewFriendInputForm.h
//  ServiceLibrary
//
//  Created by SONGQG on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPNewFriendInputForm : NSObject

@property (nonatomic,copy) NSString * userId;

//描述：手机号列表
//类型：List  String
@property (nonatomic,strong)NSArray * mobilePhoneList;
//描述：名片的FeedId
//类型：String
@property (nonatomic,copy) NSString * friendFeedId;

@property (nonatomic,copy) NSString * updateTime;
@end
