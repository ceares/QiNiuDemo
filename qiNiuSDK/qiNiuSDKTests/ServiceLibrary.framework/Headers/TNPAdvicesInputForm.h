//
//  TNPAdvicesInputForm.h
//  ServiceLibrary
//
//  Created by SONGQG on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPAdvicesInputForm : NSObject

@property (nonatomic,copy) NSString * userId;

//描述: 评论内容
//类型:String
@property (nonatomic,copy) NSString * comment;
//描述:用户电话
//类型:String
@property (nonatomic,copy) NSString * phone;


@end
