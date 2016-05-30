//
//  TNPUserCheckFriendCardInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/14.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserCheckFriendCardInputForm : NSObject

//描述：用户ID
//类型：Long

@property (nonatomic,copy) NSString * userId;

//描述：选中的好友名片
//类型：List<String>

@property (nonatomic,strong) NSArray * friendCards;

@end
