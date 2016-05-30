//
//  TNPOrgExternalContactsInfoForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/18.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPOrgExternalContactsInfoForm : NSObject

//描述：对外通讯录列表 类型：List<String>  取值：>0

@property (nonatomic,strong)NSArray * staffFeedIdList;

//描述：组织Id  类型：String 取值：>0

@property (nonatomic,copy)NSString * orgFeedId;
@end
