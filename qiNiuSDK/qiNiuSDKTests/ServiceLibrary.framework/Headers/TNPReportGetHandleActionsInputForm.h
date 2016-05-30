//
//  TNPReportGetHandleActionsInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/16.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPReportGetHandleActionsInputForm : NSObject

//类型（0朋友圈 1名片 2群组 3单聊 4群聊）	int	必填
@property (nonatomic,copy) NSString * type;
//当前时间的时间戳。	long
@property (nonatomic,copy) NSString * ts;

@end
