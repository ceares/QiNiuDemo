//
//  TNPCardListParamInputForm.h
//  systemModelDemo
//
//  Created by 吴春旭 on 15/5/12.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardListParamInputForm : NSObject

//描述：拥有者用户id
//类型：Long
//取值：大于0的数值
@property (nonatomic,copy) NSString* ownByUserId;

//描述：时间戳
//类型：Long
//取值：大于0的数值
@property (nonatomic,copy) NSString* version;

@end
