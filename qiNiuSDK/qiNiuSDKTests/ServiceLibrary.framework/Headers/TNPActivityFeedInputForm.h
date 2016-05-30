//
//  TNPActivityFeedInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/7/1.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPActivityFeedInputForm : NSObject

//描述：拥有者用户id  类型：Long  取值范围：> 0
@property (nonatomic, copy) NSString *userId;

//描述：名片时间戳  类型：Long  取值范围：>= 0
@property (nonatomic, copy) NSString *version;

@end
