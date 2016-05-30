//
//  TNPCoinCreateToonRechargeOrderInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinCreateToonRechargeOrderInputForm : NSObject

//通用户ID	 	String	前端传入	不可为空
@property (nonatomic,copy) NSString * tUserId;
//支付通道	 1011：支付宝钱包(默认)	String	payChannel=1011	不可为空
@property (nonatomic,copy) NSString * payChannel;
//订单金额	 	String(double)	通宝充值个数	不可为空
@property (nonatomic,copy) NSString * orderValue;
//1：RMB 2：通宝币 3：代金券'	 	 	通宝充值coinType=2
@property (nonatomic,copy) NSString * coinType;
//交易类型 	1：消费 2：转账 3：充值（默认） 4：提现 5：退款	String	通宝充值 exchangeType=3	不可为空
@property (nonatomic,copy) NSString * exchangeType;
//渠道编码	 	String	 	不可为空
@property (nonatomic,copy) NSString * channelCode;
@end
