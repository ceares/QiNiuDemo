//
//  TNPGiftshopBuygiftInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/4.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGiftshopBuygiftInputForm : NSObject

//订单ID  string Y
@property (nonatomic,copy) NSString * payOrderId;

//用户ID  long Y
@property (nonatomic,copy) NSString * userId;

//订单状态		01：初始 02：支付中 03：支付成功 04：失败	string	Y
@property (nonatomic,copy) NSString * status;

@end
