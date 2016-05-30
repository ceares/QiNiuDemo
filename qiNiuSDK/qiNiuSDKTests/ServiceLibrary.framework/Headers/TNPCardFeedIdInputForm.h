//
//  TNPCardFeedIdInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/7/2.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardFeedIdInputForm : NSObject
//描述：拥有者用户id
//类型：long
@property (nonatomic, copy) NSString *userId;

//描述：名片时间戳
//类型：long
@property (nonatomic, copy) NSString *cardVersion;

//描述：组织名片时间戳
//类型：long
@property (nonatomic, copy) NSString *orgCardVersion;

//描述：员工名片时间戳
//类型：long
@property (nonatomic, copy) NSString *staffCardVersion;
@end
