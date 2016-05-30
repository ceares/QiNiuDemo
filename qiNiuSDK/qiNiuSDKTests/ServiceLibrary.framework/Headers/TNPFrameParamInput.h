//
//  TNPFrameParamInput.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/2/17.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFrameParamInput : NSObject

//访问者fromFeedId
@property (nonatomic,copy) NSString * fromFeedId;

//被访问者toFeedId
@property (nonatomic,copy) NSString * toFeedId;

//访问者面类型  1、匿名面  2、好友面  3、自己
@property (nonatomic,copy) NSString * aspectType;

//时间戳（版本）
@property (nonatomic,copy) NSString * version;

//设置面用户ID
@property (nonatomic,copy) NSString * userId;

@end
