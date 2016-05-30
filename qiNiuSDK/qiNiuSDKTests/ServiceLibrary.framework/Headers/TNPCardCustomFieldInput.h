//
//  TNPCardCustomFieldInput.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/2/17.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCardCustomFieldInput : NSObject

@property (nonatomic,copy) NSString * feedId;//名片feedId
@property (nonatomic,copy) NSString * cardId;//名片id
@property (nonatomic,copy) NSString * fieldId;//字段id
@property (nonatomic,copy) NSString * fieldName;//字段名
@property (nonatomic,copy) NSString * fieldValue;//字段值
@property (nonatomic,copy) NSString * category;//类别 0-其他 1-社交属性
@property (nonatomic,copy) NSString * status;//有效标示 0-无效 1-有效

@end
