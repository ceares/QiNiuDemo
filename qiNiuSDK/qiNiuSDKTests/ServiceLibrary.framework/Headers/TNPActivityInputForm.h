//
//  TNPActivityInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPActivityInputForm : NSObject
//描述:名片ID 类型:String 规则：*_cardId
@property (nonatomic,copy) NSString * fromFeedId;

//描述:活动ID 类型:String 规则：*_activityId
@property (nonatomic,copy) NSString * toFeedId;

//描述:名片名称  类型:String
@property (nonatomic,copy) NSString * cardName;

//描述:活动名称   类型:String
@property (nonatomic,copy) NSString * name;

//描述:推广语   类型:String
@property (nonatomic,copy) NSString * spreadTitle;

//描述:活动描述   类型:String
@property (nonatomic,copy) NSString * des;

//描述:活动开始时间   类型:String
@property (nonatomic,copy) NSString * startTime;

//描述:活动结束时间  类型:String
@property (nonatomic,copy) NSString * endTime;

//描述:活动地址   类型:String
@property (nonatomic,copy) NSString * address;

//描述:纬度   类型:Double 取值范围:大于0.00的值
@property (nonatomic,copy) NSString * lat;

//描述:经度   类型:Double 取值范围:大于0.00的值
@property (nonatomic,copy) NSString * lng;

//描述:传播分类位置   类型:String
@property (nonatomic,copy) NSString * broadcastLocation;

//描述:参数者上限   类型:Integer 取值范围:大于0的值
@property (nonatomic,copy) NSString * maxNum;

//描述:活动参与者   类型:String
@property (nonatomic,copy) NSString * activityMember;

//描述:邀请成员id串 类型：字符型
@property (nonatomic,copy) NSString * activityMemberFeedId;

//描述:参与者名单是否对内公开    类型:Integer 取值范围:0否  1是
@property (nonatomic,copy) NSString * isMemberPublic;

//描述:参与者名单是否对外公开   类型:Integer 取值范围:0否  1是
@property (nonatomic,copy) NSString * isExtMemberPublic;

//描述:报名机制默认值设置成开放模式 1    类型:Integer 取值范围:1申请模式  2开放模式  3邀请模式
@property (nonatomic,copy) NSString * enrollType;

//描述:报名选项   类型:String
@property (nonatomic,copy) NSString * registrationItems;

//描述:背景图   类型:String
@property (nonatomic,copy) NSString * backgroundId;

//描述:是否自动审核   类型:Integer 取值范围:0否  1是
@property (nonatomic,copy) NSString * isAutoCheck;

//描述：是否制定位置  类型：Integer 取值范围： 0否1是
@property (nonatomic,copy) NSString * isSpecifyLocation;

//描述:ToonParkId 类型:Long
@property (nonatomic,copy) NSString * toonParkId;
@end
