//
//  TNPEducationExperienceInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/1/14.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPEducationExperienceInputForm : NSObject

//描述：名片feedId
//类型；String
@property (nonatomic,copy) NSString * feedId;

//类型：教育经历id
//类型：Long
@property (nonatomic,copy) NSString * educationExpId;

//描述：学历
//类型：Integer
//取值：0 小学 1 初中 2 中专 3 高中 4 大专 5 大学 6 硕士 7 博士 8 博士后
@property (nonatomic,copy) NSString * degree;

//描述：学校名称
//类型：String
@property (nonatomic,copy) NSString * schoolName;

//描述：入学时间
//类型：String
@property (nonatomic,copy) NSString * joinTime;

//描述：毕业时间
//类型：String
@property (nonatomic,copy) NSString * graduationTime;

//描述：班级
//类型：String
@property (nonatomic,copy) NSString * className;

//描述：专业
//类型：String
@property (nonatomic,copy) NSString * majors;

//描述：院系
//类型：String
@property (nonatomic,copy) NSString * departments;

//描述：状态
//类型：Integer
//取值：0 删除 1 正常
@property (nonatomic,copy) NSString * status;


@end
