//
//  TNPJobExperienceInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/1/14.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPJobExperienceInputForm : NSObject

//描述：名片feedId
//类型：String
@property (nonatomic,copy) NSString * feedId;

//描述：工作履历id
//类型：Long
@property (nonatomic,copy) NSString * jobExpId;

//描述：公司名称
//类型：String
@property (nonatomic,copy) NSString * companyName;

//描述：职位
//类型：String
@property (nonatomic,copy) NSString * position;

//描述：开始时间
//类型：String
@property (nonatomic,copy) NSString * beginTime;

//描述：结束时间
//类型：String
@property (nonatomic,copy) NSString * endTime;

//描述：经历描述
//类型：String
@property (nonatomic,copy) NSString * experienceDes;

//描述：状态
//类型：Integer
//取值：0 删除 1 正常
@property (nonatomic,copy) NSString * status;


@end
