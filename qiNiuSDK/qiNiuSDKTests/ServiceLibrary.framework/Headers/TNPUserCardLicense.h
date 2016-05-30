//
//  TNPUserCardLicense.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/1/27.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserCardLicense : NSObject

//用户 id
@property (nonatomic,copy) NSString * userId;
//使用许可证 的数量
@property (nonatomic,copy) NSString * licenseNumber;
//个人名片许可证为1
@property (nonatomic,copy) NSString * licenseNo;

@end
