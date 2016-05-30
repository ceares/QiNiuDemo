//
//  TNPCardFieldConfigParamInputForm.h
//  systemModelDemo
//
//  Created by 吴春旭 on 15/5/12.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardFieldConfigParamInputForm : NSObject
//描述：名片类型
//类型：Integer
//取值：1 个人名片 2  企业名片 3 员工名片
@property (nonatomic,copy) NSString * cardType;
//描述：时间戳
//类型：Long
//取值：非负数值
@property (nonatomic,copy) NSString * version;
@end
