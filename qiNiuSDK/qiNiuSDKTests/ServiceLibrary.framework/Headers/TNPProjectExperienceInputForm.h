//
//  TNPProjectExperienceInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/1/14.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPProjectExperienceInputForm : NSObject

//描述：名片feedId
//类型：String
@property (nonatomic,copy) NSString * feedId;

//描述：项目经验id
//类型：Long
@property (nonatomic,copy) NSString * projectExpId;

//描述：项目名称
//类型：String
@property (nonatomic,copy) NSString * projectName;

//描述：项目地点
//类型：String
@property (nonatomic,copy) NSString * projectPlace;

//描述：开始时间
//类型：String
@property (nonatomic,copy) NSString * beginTime;

//描述：结束时间
//类型：String
@property (nonatomic,copy) NSString * endTime;

//描述：项目描述
//类型：String
@property (nonatomic,copy) NSString * projectDes;

//描述：状态
//类型：Integer
//取值：0 删除 1 正常
@property (nonatomic,copy) NSString * status;


@end
