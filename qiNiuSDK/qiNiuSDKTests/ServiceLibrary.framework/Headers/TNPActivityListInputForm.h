//
//  TNPActivityListInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPActivityListInputForm : NSObject

//描述:活动ID 类型:String 规则：*_activityId
@property (nonatomic,copy) NSString * feedId;

//描述:名片ID 类型:String 规则：*_cardId
@property (nonatomic,copy) NSString * cardFeedId;//当前名片ID

//描述:时间戳  类型:Long 取值范围:大于0的值
@property (nonatomic,copy) NSString * version;

//描述:列表类别   类型:Integer 取值范围:列表类型  1、所有活动   2、我发起的活动
@property (nonatomic,copy) NSString * listType;

@end
