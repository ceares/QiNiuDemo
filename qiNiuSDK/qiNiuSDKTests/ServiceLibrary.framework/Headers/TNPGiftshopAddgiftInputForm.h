//
//  TNPGiftshopAddgiftInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/4.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGiftshopAddgiftInputForm : NSObject

//礼物名称  string Y
@property (nonatomic,copy) NSString * giftName;

//礼物价格  int Y
@property (nonatomic,copy) NSString * price;

//积分价格  int Y
@property (nonatomic,copy) NSString * point;

//获赠比率  int Y
@property (nonatomic,copy) NSString * ratio;

//库存量  int Y
@property (nonatomic,copy) NSString * total;

//剩余量  int Y
@property (nonatomic,copy) NSString * surplus;

//礼物类型  01：限量；02：普通 string Y
@property (nonatomic,copy) NSString * giftType;

//状态  string Y
@property (nonatomic,copy) NSString * status;

//已售总额  int Y
@property (nonatomic,copy) NSString * amount;

//排序  int Y
@property (nonatomic,copy) NSString * orderBy;

//礼物图ID  long Y
@property (nonatomic,copy) NSString * picId;

//礼物图 url  string Y
@property (nonatomic,copy) NSString * picUrl;

//备注  string Y
@property (nonatomic,copy) NSString * des;


@end
