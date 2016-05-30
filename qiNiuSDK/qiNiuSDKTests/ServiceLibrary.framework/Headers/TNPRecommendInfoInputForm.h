//
//  TNPRecommendInfoInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPRecommendInfoInputForm : NSObject



//描述:活动ID 类型:String 规则：a_activityId
@property (nonatomic,copy) NSString * feedId;

//描述:名片 ID 类型:String 规则：*_cardId
@property (nonatomic,copy) NSString * cardFeedId;

//描述:是否启用 类型:Integer 取值范围:0否 1是
@property (nonatomic,copy) NSString * isEnable;

//描述:是否公开 类型:Integer 取值范围:0否 1是
@property (nonatomic,copy) NSString * isPubllic;
@end
