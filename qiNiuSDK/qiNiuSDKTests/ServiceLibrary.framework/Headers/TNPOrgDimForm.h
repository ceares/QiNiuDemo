//
//  TNPOrgDimForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/18.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPOrgDimForm : NSObject
//企业信息
//TNPOrgContactsForm

@property (nonatomic,strong) NSDictionary * form;

//描述：是否查询员工信息标志  类型：int     取值： 0查询 1不查询 不传默认为0
@property (nonatomic,copy)NSString * member;
@end
