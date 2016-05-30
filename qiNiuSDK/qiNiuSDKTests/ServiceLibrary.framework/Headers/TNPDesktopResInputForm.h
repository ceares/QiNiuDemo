//
//  TNPDesktopResInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/12.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPDesktopResInputForm : NSObject
//描述：资源类型（1:主题 2:背景 3：皮肤）
//类型：int
@property (nonatomic,copy) NSString * resType;
//描述：时间戳
//类型：long
@property (nonatomic,copy) NSString * updateTime;
@end
