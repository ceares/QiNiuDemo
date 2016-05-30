//
//  TNPRecommendActivityInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface TNPRecommendActivityInputForm : NSObject

//描述:活动ID 类型:String 规则：a_activityId
@property (nonatomic,copy) NSString * feedId;

//描述:名片 ID 类型:String 规则：*_cardId
@property (nonatomic,copy) NSString * cardFeedId;

//描述:推荐活动Id 类型:Long 取值范围:大于0的值
@property (nonatomic,copy) NSString * recommendId;

//描述:是否删除   类型:Integer 取值范围:0否  1是
@property (nonatomic,copy) NSString * isDel;

@property (nonatomic,copy) NSString * status ;

//描述:时间戳 类型:Long 取值范围:非负数
@property (nonatomic,copy) NSString * version;

//描述:推荐类别 类型：Integer 取值范围：1活动 2群组
@property (nonatomic,copy) NSString * type;

//描述:活动申请ID 类型:String 规则：a_activityId
@property (nonatomic,copy) NSString *applyFeedId;
//描述:推荐类别   类型:String 规则：*_cardId
@property (nonatomic,copy) NSString *applyCardFeedId;

@end
