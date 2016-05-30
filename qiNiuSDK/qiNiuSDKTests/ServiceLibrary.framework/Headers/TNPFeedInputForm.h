//
//  TNPFeedInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/6/24.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFeedInputForm : NSObject

//描述：事物类型_事物Id
//类型：String
@property (nonatomic, copy) NSString *feedId;

//描述：事物类型_事物Id列表
//类型：List<String>
@property (nonatomic, strong) NSArray *feedIds;

//描述：版本 时间的long值
//类型：long
@property (nonatomic, copy) NSString *version;

@end
