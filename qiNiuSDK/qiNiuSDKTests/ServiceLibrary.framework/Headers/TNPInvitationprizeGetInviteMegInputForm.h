//
//  TNPInvitationprizeGetInviteMegInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/10/12.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPInvitationprizeGetInviteMegInputForm : NSObject

//滚动方向
@property (nonatomic,copy) NSString * direct;
//拉取列表起始位置
@property (nonatomic,copy) NSString * fetchBegin;
//拉取列表的数量
@property (nonatomic,copy) NSString * fetchNum;
@end
