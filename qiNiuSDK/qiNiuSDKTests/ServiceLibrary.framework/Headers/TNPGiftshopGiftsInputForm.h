//
//  TNPGiftshopGiftsInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/4.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGiftshopGiftsInputForm : NSObject

//礼物状态 01：已下线；02：已上线 string
@property (nonatomic,copy) NSString * status;

//拉取列表起始位置  默认为0 int N
@property (nonatomic,copy) NSString * fetchBegin;

//拉取列表的数量  根据滑动幅度，前端来定 int N
@property (nonatomic,copy) NSString * fetchNum;

//礼物ID  string N
@property (nonatomic,copy) NSString * giftId;

//礼物名称  string N
@property (nonatomic,copy) NSString * giftName;

//礼物类型  01：限量；02：普通 string N
@property (nonatomic,copy) NSString * giftType;

@end
