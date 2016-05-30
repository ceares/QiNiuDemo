//
//  TNPOrgStaffForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/2/25.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPOrgStaffForm : NSObject

//描述：成员名片ID  类型：String  取值范围：s_staffId
@property (nonatomic,copy)NSString * staffFeedId;
//描述：用户ID	    类型：Long  取值范围：>0
@property (nonatomic,copy)NSString * userId;
//描述：组织ID      类型: String  取值范围：o_orgId
@property (nonatomic,copy)NSString * orgFeedId;
//描述：增量更新时间 类型：Long 取值范围：>0
@property (nonatomic,copy)NSString * updateTime;
//描述：成员名片使用状态 类型：Integer  取值范围：0 停用 1 使用 2发放中
@property (nonatomic,copy)NSString * useStatus;
//描述：需要条数
@property (nonatomic,copy)NSString * rows;

@end
