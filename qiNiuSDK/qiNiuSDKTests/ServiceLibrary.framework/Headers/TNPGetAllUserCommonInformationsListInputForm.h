//
//  TNPGetAllUserCommonInformationsListInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGetAllUserCommonInformationsListInputForm : NSObject
//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;//用户ID
//描述：增量更新时间
//类型：long
@property (nonatomic,copy) NSString * editTime;//增量更新时间
@end
