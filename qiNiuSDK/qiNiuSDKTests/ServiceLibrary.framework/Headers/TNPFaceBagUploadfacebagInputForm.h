//
//  TNPFaceBagUploadfacebagInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/7.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFaceBagUploadfacebagInputForm : NSObject

//表情包Id 滑动时用 long Y
@property (nonatomic,copy) NSString *faceBagId;

//表情包名称 string Y
@property (nonatomic,copy) NSString *name;

//表情包价格 int Y
@property (nonatomic,copy) NSString *price;

//库存量  -1：不限量 int Y
@property (nonatomic,copy) NSString *total;

//剩余量 -1：不限量 int Y
@property (nonatomic,copy) NSString *surplus;

//状态 01：已下线；02：已上线 string Y
@property (nonatomic,copy) NSString *status;

//上线时间 date Y
@property (nonatomic,copy) NSString *lineTime;

//已售总额 int Y
@property (nonatomic,copy) NSString *amount;

//推广语 string Y
@property (nonatomic,copy) NSString *slogan;

//表情包图Id long Y
@property (nonatomic,copy) NSString *iconId;

//备注 string Y
@property (nonatomic,copy) NSString *des;

//版本号 int Y
@property (nonatomic,copy) NSString *version;

//排序 int Y
@property (nonatomic,copy) NSString *orderBy;

@end
