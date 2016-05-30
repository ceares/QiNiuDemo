//
//  TNPAppRegInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/26.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPAppRegInputForm : NSObject

//描述： 应用ID
//类型：Long
//取值：大于0
@property (nonatomic,copy) NSString * appId;

//描述：活动FeedID或群组FeedID等（frame提供） 必填
//类型：String
@property (nonatomic,copy) NSString * feedId;

//描述： 名片【名片类型[组织,群组,用户]】
//类型：Integer
@property (nonatomic,copy) NSString * objectType;

@end
