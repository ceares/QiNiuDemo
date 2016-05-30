//
//  TNPFeedIdInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/9/11.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFeedIdInputForm : NSObject
/**
 * 描述：两个员工feedId
 * 类型：Strring
 * 取值：s_staffId
 **/
@property (nonatomic,copy)NSString * fromFeedId;
@property (nonatomic,copy)NSString * toFeedId;
@end
