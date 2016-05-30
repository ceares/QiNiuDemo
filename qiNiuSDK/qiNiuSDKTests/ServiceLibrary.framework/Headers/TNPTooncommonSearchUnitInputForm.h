//
//  TNPTooncommonSearchUnitInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/4/12.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPTooncommonSearchUnitInputForm : NSObject

// 描述：楼栋ID 类型：String
@property (nonatomic,copy) NSString * buildingId;
//描述：最大数据量 类型：Integer （不填默认返回最多5条数据）
@property (nonatomic,copy) NSString * maxNumber;

@end
