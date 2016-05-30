//
//  TNPCoordinateInputForm.h
//  systemModelDemo
//
//  Created by 吴春旭 on 15/5/12.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoordinateInputForm : NSObject

//描述：名片feedId,多个名片feedId以逗号分隔，如：c_1，c_2，c_3，c_4
//类型：String
@property (nonatomic,copy) NSString * feedIds;

//描述：经纬度（格式为：维度,经度）
//类型：String
@property (nonatomic,copy) NSString * latilongitude;

//地理代码
@property (nonatomic,copy) NSString * adcodes;

//商业区
@property (nonatomic,copy) NSString * businessArea;

//国家代码
@property (nonatomic,copy) NSString * countrycode;
@end
