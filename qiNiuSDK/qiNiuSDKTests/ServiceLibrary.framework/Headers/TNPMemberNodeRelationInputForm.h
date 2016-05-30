//
//  TNPMemberNodeRelationInputForm.h
//  systemModelDemo
//
//  Created by chunxu on 15/5/18.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPMemberNodeRelationInputForm : NSObject

// 描述：组织id  类型：String 取值：>0

@property (nonatomic,copy)NSString * orgFeedId;

// 描述：员工id  类型 :String  取值：>0
@property (nonatomic,copy)NSString * staffFeedId;

// 描述：节点id  类型 :Long 取值：>0
@property (nonatomic,copy)NSString * nodeId;

// 描述：创建时间  类型  取值：>0
@property (nonatomic,copy)NSString * createTime;

// 描述： 更新时间  类型 :Long  取值：>0
@property (nonatomic,copy)NSString * updateTime;

// 描述：状态  类型 :Integer 取值：>0
@property (nonatomic,copy)NSString * status;
@end
