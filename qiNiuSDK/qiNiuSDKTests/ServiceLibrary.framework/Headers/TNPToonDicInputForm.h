//
//  TNPToonDicInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/28.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPToonDicInputForm : NSObject


//描述:类别
//类型: String
@property (nonatomic,copy) NSString * dicClass;
//描述:应用版本号
//类型: String
@property (nonatomic,copy) NSString * appVersion;
//描述:模块
//类型: String
@property (nonatomic,copy) NSString * dicModule;

@property (nonatomic,copy) NSString * userId;

@end
