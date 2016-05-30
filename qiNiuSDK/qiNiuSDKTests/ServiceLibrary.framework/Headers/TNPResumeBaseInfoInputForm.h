//
//  TNPResumeBaseInfoInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/1/14.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPResumeBaseInfoInputForm : NSObject

//描述：名片feedId
//类型：String
@property (nonatomic,copy) NSString * feedId;

//描述：姓名
//类型：String
@property (nonatomic,copy) NSString * name;

//描述：性别
//类型：Integer
//取值：0 男  1 女
@property (nonatomic,copy) NSString * sex;

//描述：生日
//类型：String
@property (nonatomic,copy) NSString * birthday;

//描述：居住地
//类型：String
@property (nonatomic,copy) NSString * livePlace;

//描述：出生地
//类型：String
@property (nonatomic,copy) NSString * birthPlace;

//描述：血型
//类型Integer
//取值：0 A   1 B  2 AB  3 O  4 其他
@property (nonatomic,copy) NSString * bloodType;

//描述：专业
//类型：String
@property (nonatomic,copy) NSString * professional;

//描述：职业
//类型：String
@property (nonatomic,copy) NSString * occupation;

//描述：简介
//类型：String
@property (nonatomic,copy) NSString * summary;

//描述：兴趣
//类型：String
@property (nonatomic,copy) NSString * interest;

//描述：备注
//类型：String
@property (nonatomic,copy) NSString * remark;

//描述：状态
//类型：Integer
//取值：0 男 1女
@property (nonatomic,copy) NSString * status;


@end
