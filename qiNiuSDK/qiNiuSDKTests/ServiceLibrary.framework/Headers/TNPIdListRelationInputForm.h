//
//  TNPIdListRelationInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/18.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPIdListRelationInputForm : NSObject

//描述：企业id  类型：String 取值：>0

@property (nonatomic,copy)NSString * orgFeedId;

//描述：成员id  类型：String 取值：>0
@property (nonatomic,copy)NSString * staffFeedId;

//描述：组织树节点id集合   类型：List<Long> 取值：>0
@property (nonatomic,strong)NSArray * nodeIdList;
@end
