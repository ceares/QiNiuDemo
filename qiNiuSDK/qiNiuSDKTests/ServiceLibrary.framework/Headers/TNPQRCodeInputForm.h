//
//  TNPQRCodeInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPQRCodeInputForm : NSObject

//描述:活动ID 类型:String
@property (nonatomic,copy) NSString * feedId;

//描述:名片 ID 类型:String
@property (nonatomic,copy) NSString * cardFeedId;

//描述:名片 ID 类型:Integer 取值范围:大于0的值
@property (nonatomic,copy) NSString * width;

//描述:名片 ID 类型:Integer 取值范围:大于0的值
@property (nonatomic,copy) NSString * height;
@end
