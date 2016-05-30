//
//  TNPChangeUserCommonSettingsInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/31.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPChangeUserCommonSettingsInputForm : NSObject

//描述：用户id
//类型：long
@property (nonatomic,copy) NSString * userId;

//描述：通用设置消息开关状态 1：开启，0：关闭
//类型：Integer
@property (nonatomic,copy) NSString * msgShowSign;


@end
