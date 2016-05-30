//
//  TNPFrameInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFrameInputForm : NSObject

//描述:名片ID 类型:String 规则:*_cardId
@property (nonatomic,copy) NSString * fromFeedId;

//描述:活动ID 类型:String 规则：a_activityId
@property (nonatomic,copy) NSString * toFeedId;

//描述:访问面类别   类型:Integer 取值范围:1匿名   2好友  3管理面
@property (nonatomic,copy) NSString * aspectType;

//描述:时间戳  类型:Long 取值范围:非负数
@property (nonatomic,copy) NSString * version;


@property (nonatomic,copy) NSString * feedId;

@end
