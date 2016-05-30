//
//  TNPQRCodeParamInputForm.h
//  systemModelDemo
//
//  Created by 吴春旭 on 15/5/12.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPQRCodeParamInputForm : NSObject
//描述：名片feedId
//类型：String
//取值：o_orgId,s_staffId
@property (nonatomic, copy) NSString*  feedId;

//描述：二维码宽
//类型：Integer
//取值：非负数值
@property (nonatomic, copy) NSString*  width;

//描述：二维码高
//类型：Integer
//取值：非负数值
@property (nonatomic, copy) NSString*  height;
@end
