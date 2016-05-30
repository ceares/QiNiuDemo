//
//  TNPMemberNodeRelationFeedForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/7/3.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPMemberNodeRelationFeedForm : NSObject

// 描述：组织id  类型：Long 取值：>0

@property (nonatomic,copy) NSString *  orgFeedId;

// 描述：员工id  类型 :Long  取值：>0
@property (nonatomic,copy) NSString *  staffFeedId;

// 描述：节点id  类型 :Long 取值：>0
@property (nonatomic,copy) NSString *  nodeId;

// 描述：创建时间  类型  取值：>0
@property (nonatomic,copy) NSString *  createTime;

// 描述： 更新时间  类型 :Long  取值：>0
@property (nonatomic,copy) NSString *  version;

// 描述：状态  类型 :Integer 取值：>0
@property (nonatomic,copy) NSString *  status;


@end
