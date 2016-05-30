//
//  TNPAppInfoInputForm.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/28.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPAppInfoInputForm : NSObject
// 命名空间
@property (nonatomic,copy) NSString * nameSpace;
//文件存储id
@property (nonatomic,copy) NSString * stoid;
// 版本号
@property (nonatomic,copy) NSString * version;
@end
