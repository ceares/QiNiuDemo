//
//  TNPRegistActivityForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPRegistActivityForm : NSObject
//描述:活动ID 类型:String
@property (nonatomic,copy) NSString * feedId;

//描述:名片 ID 类型:String
@property (nonatomic,copy) NSString * cardFeedId;
//描述:时间戳 类型:Long 取值范围:非负数
@property (nonatomic,copy) NSString * version;

//描述:审核是否通过   类型:Integer 取值范围:1不通过   0 通过
@property (nonatomic,copy) NSString * isDel;

//描述:审核的内容   类型:String
@property (nonatomic,copy) NSString * registrationItems;

//描述:加入模式     类型:Integer 取值范围:1申请模式  2开放模式  3邀请模式
@property (nonatomic,copy) NSString * enrollType;

//描述:判断是否自动审核     类型:Integer 取值范围:0否 1是（废弃）
@property (nonatomic,copy) NSString * isAudit;

@end
