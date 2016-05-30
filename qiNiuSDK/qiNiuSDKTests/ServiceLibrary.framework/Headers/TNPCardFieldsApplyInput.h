//
//  TNPCardFieldsApplyInput.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/2/23.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardFieldsApplyInput : NSObject

@property (nonatomic,copy) NSString * feedId;//feedId
@property (nonatomic,copy) NSString * cardType;//名片类型
@property (nonatomic,copy) NSString * applyInfo;//申请信息
@property (nonatomic,copy) NSString * authenStatus;//审核状态 1-审核中 2-审核通过 3-审核失败
@property (nonatomic,copy) NSString * status;//有效标示 0 无效  1 有效
@property (nonatomic,copy) NSString * createTime;//创建时间
@property (nonatomic,copy) NSString * updateTime;//更新时间

@end
