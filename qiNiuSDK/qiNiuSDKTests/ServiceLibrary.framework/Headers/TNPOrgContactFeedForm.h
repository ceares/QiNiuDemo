//
//  TNPOrgContactFeedForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/7/3.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPOrgContactFeedForm : NSObject
//描述：成员名片ID  类型：String  取值范围：s_staffId
@property (nonatomic, copy) NSString *staffFeedId;


//描述：用户ID	    类型：Long  取值范围：>0
@property (nonatomic, copy) NSString *userId;

//描述：组织ID      类型: String  取值范围：o_orgId
@property (nonatomic, copy) NSString *orgFeedId;

//描述：增量更新时间 类型：Long 取值范围：>0
@property (nonatomic, copy) NSString *version;
@end
