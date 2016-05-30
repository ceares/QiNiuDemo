//
//  TNPInterestInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/10/19.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPInterestInputForm : NSObject
//描述：类型
//类型：Integer
//取值：1 名片 2 活动&群组
@property (nonatomic,copy) NSString * type;

//描述：时间戳
//类型：Long
@property (nonatomic,copy) NSString * version;
@end
