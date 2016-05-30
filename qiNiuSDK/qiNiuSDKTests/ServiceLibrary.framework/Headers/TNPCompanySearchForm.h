//
//  TNPCompanySearchForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/18.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCompanySearchForm : NSObject
//CommonSearchDto
@property (nonatomic,strong) NSDictionary * commonSearchDto;// 描述：筛选条件

@property (nonatomic,copy)NSString * pageNum;// 描述：分页    类型：Integer   取值：默认“1”

@property (nonatomic,copy) NSString * appCode ;// 描述：接口名称       取值：固定


@property (nonatomic,copy) NSString * sorterField;// 描述：排序字段  取值：
@end
