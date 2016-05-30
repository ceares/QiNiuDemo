//
//  TNPGroupListIncrementalUpdateInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/20.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGroupListIncrementalUpdateInputForm : NSObject

/**
 * 描述：进行增量更新的时间 类型：整型 取值范围：大于0的整数
 */
@property (nonatomic,copy) NSString * operateTime;

/**
 * 描述:用户的id 类型：整型 取值范围：大于0的整数
 */
@property (nonatomic,copy) NSString * userId;

@end
