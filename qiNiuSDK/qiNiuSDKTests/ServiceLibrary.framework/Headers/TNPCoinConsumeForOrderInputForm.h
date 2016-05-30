//
//  TNPCoinConsumeForOrderInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinConsumeForOrderInputForm : NSObject

//	商户编号	商户编号	String	商户提供	不可为空
@property (nonatomic,copy) NSString * companyCode;
//验签	商户签名	String	商户提供，测试时，需要模拟生成	不可为空
@property (nonatomic,copy) NSString * sign;
//商户订单id	商户订单编号	String	商户提供	不可为空
@property (nonatomic,copy) NSString * orderId;
//业务码	商户业务码	String	商户申请并提供	不可为空
@property (nonatomic,copy) NSString * busiCode;
//信用宝用户id	通用户唯一标识	String	调用者输入	不可为空
@property (nonatomic,copy) NSString * tUserId;
//支付通道	 1001：资金账户 1002：通宝账户 String 1）消费通宝时,payChannel=1002 2）消费支付宝钱包时,payChannel=1011 不可为空
@property (nonatomic,copy) NSString * payChannel;
//订单金额	 	String(double)	当为整数时,请加上小数点	不可为空
@property (nonatomic,copy) NSString * orderValue;
//支付金额	 	String(double)	当为整数时,请加上小数点	不可为空
@property (nonatomic,copy) NSString * payValue;
/*
 币种类型	 1：现金 2：通宝	String
 1）消费通宝时,coinType=2
 
 2）消费支付宝钱包时,coinType=1
 不可为空
 */
@property (nonatomic,copy) NSString * coinType;
/*
 交易类型	 1：消费（默认） 2：转账 3：充值 4：提现 5：退款	String
 1）消费时,exchangeType=1
 
 2）充值消费时,exchangeType=3
 
 3）其它暂不支持
 不可为空

 */
@property (nonatomic,copy) NSString * exchangeType;
//商品名称	 	String	商户提供	 不可为空	测试消费通宝
@property (nonatomic,copy) NSString * goodsName;
//商品描述	 	String	商户提供	 可为空	测试消费通宝
@property (nonatomic,copy) NSString * goodsDes;
//商品logo	 	String	 	可为空
@property (nonatomic,copy) NSString * icon;
//通知回调地址	 	String	 	 可为空
@property (nonatomic,copy) NSString * notifyUrl;
@end
