//
//  TNPAddNodeInputForm.h
//  ServiceLibrary
//
//  Created by syswin on 15/5/27.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPAddNodeInputForm : NSObject

//描述：企业id  类型：String 取值：>0

@property (nonatomic,copy) NSString * orgFeedId;

//描述：  组织树节点id类型：Long  取值：>0
@property (nonatomic,copy) NSString * nodeId;

//描述：成员id集合   类型：List<String> 取值：>0
@property (nonatomic,strong) NSArray * staffFeedIdList;

@end
