//
//  TNPFaceBagEditfacebagInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/7.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFaceBagEditfacebagInputForm : NSObject

//表情包Id 滑动时用 long Y
@property (nonatomic,copy) NSString *faceBagId;

//表情包名称 string N
@property (nonatomic,copy) NSString *name;

//表情包价格 int N
@property (nonatomic,copy) NSString *price;

//库存量 -1：不限量 int N
@property (nonatomic,copy) NSString *total;

//剩余量 -1：不限量 int N
@property (nonatomic,copy) NSString *surplus;

//状态 01：已下线；02：已上线 string N
@property (nonatomic,copy) NSString *status;

//上线时间 date N
@property (nonatomic,copy) NSString *lineTime;

//已售总额 int N
@property (nonatomic,copy) NSString *amount;

//推广语 string N
@property (nonatomic,copy) NSString *slogan;

//排序 int N
@property (nonatomic,copy) NSString *orderBy;

//表情包图ID long N
@property (nonatomic,copy) NSString *iconId;

//备注 string N
@property (nonatomic,copy) NSString *des;

//版本号 int N
@property (nonatomic,copy) NSString *version;

@end
