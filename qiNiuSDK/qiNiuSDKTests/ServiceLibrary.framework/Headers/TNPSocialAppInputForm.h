//
//  TNPSocialAppInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/1/13.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPSocialAppInputForm : NSObject

/****类型*/
@property (nonatomic,copy) NSString * appType;

@property (nonatomic,copy) NSString * saId;
/****对外发布*/
@property (nonatomic,copy) NSString * isPubilc;
/****名称*/
@property (nonatomic,copy) NSString * name;
/****名称*/
@property (nonatomic,copy) NSString * nameSpace;
/****排序*/
@property (nonatomic,copy) NSString * sort;
@property (nonatomic,copy) NSString * updateTime;

@end
