//
//  TNPCoinDoPayInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinDoPayInputForm : NSObject

//交易流水id	 	String	数据来源于订单详情数据	不可为空
@property (nonatomic,copy) NSString * paySerial;
//商户编号	 	String	数据来源于订单详情数据	不可为空
@property (nonatomic,copy) NSString * companyCode;
/*
 支付通道 1002：通宝账户 1011：支付宝钱包 String
 数据来源于订单详情数据
 
 现在手机客户端
 
 payChannel=1002通宝账户支付
 
 payChannel=1011支付宝支付
 不可为空

 */
@property (nonatomic,copy) NSString * payChannel;
//商户订单号	 	String	数据来源于订单详情数据	不可为空
@property (nonatomic,copy) NSString * orderId;
//签名	 	String 数据来源于订单详情数据 不可为空
@property (nonatomic,copy) NSString * sign;
@end
