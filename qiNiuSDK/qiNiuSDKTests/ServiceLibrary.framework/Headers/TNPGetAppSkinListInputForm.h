//
//  TNPGetAppSkinListInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/7/13.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGetAppSkinListInputForm : NSObject
//描述：主题版本
//类型：String
@property (nonatomic,copy) NSString * version;

//描述：app版本
//类型：int  1:主题  2：背景  3：皮肤
@property (nonatomic,copy) NSString * type;
@end
