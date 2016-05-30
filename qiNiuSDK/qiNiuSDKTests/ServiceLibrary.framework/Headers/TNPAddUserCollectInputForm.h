//
//  TNPAddUserCollectInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPAddUserCollectInputForm : NSObject
//描述：收藏类型 1 名片 2 群组 3 活动4内容
//类型：int
@property (nonatomic,copy) NSString * type;

//描述：对象id 即活动id或者收藏名片的名片ID等
//类型：long
@property (nonatomic,copy) NSString * objectId;

//描述：收藏对象源的feedid
//类型：String
@property (nonatomic,copy) NSString * fromFeedId;

//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;

//描述：生活咖收藏
//类型：String
@property (nonatomic,copy) NSString * domainNamespace;

//描述：目标地址
//类型：String
@property (nonatomic,copy) NSString * url;

//描述：图片地址
//类型：String
@property (nonatomic,copy) NSString * img;

//描述：文本内容
//类型：String
@property (nonatomic,copy) NSString * content;

@end
