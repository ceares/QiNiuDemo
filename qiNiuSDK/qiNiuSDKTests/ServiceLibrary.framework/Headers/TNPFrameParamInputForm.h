//
//  TNPFrameParamInputForm.h
//  systemModelDemo
//
//  Created by 吴春旭 on 15/5/12.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFrameParamInputForm : NSObject

//描述：访问者feedId
//类型：String
//取值：o_orgId
@property (nonatomic, copy) NSString*  fromFeedId;

//描述：被访问者feedId
//类型：String
//取值：o_cardId
@property (nonatomic, copy) NSString*  toFeedId;

//描述：访问者面类型
//类型：Integer
//取值：1、匿名面 2、好友面 3、自己
@property (nonatomic, copy) NSString*  aspectType;

//描述：时间戳（版本）
//类型：Long
//取值：非负数值
@property (nonatomic, copy) NSString*  version;
@end
