//
//  TNPAppInputForm.h
//  ServiceLibrary
//
//  Created by chunxu on 15/6/6.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPAppInputForm : NSObject
//描述 应用ID
//类型:Long
@property (nonatomic,copy) NSString * appId;
//描述 名片ID
//类型:Long
@property (nonatomic,copy) NSString * objectId;
//描述 名片【名片类型[组织,群组,用户]】
//类型:Integer
@property (nonatomic,copy) NSString * objectType;
//描述 用户id
//类型:Long
@property (nonatomic,copy) NSString * userId;
//描述 来源
//类型:Integer
@property (nonatomic,copy) NSString * source;
@end
