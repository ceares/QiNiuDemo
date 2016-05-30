//
//  TNPDaSaveMwapInfoInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/19.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPDaSaveMwapInfoInputForm : NSObject

// 签名串
@property (nonatomic,copy) NSString * sign;
// 时间戳（秒）
@property (nonatomic,copy) NSString * t;
// 调用方id
@property (nonatomic,copy) NSString * appKey;

@property (nonatomic,strong) NSDictionary * data;

@end
