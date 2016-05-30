//
//  TNPCardSpreadCategoryInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/7/27.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardSpreadCategoryInputForm : NSObject
//描述：时间戳
//类型：Long
@property (nonatomic,copy) NSString * version;

//描述：类型
//类型：Integer
//取值：1 名片 2 活动&群组
@property (nonatomic,copy) NSString * type;
@end
