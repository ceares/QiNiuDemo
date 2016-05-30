//
//  ServiceRequest+CoinRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (CoinRequest)

/** 开通信誉宝用户
 
 传入字段：
 
 cUserName	 基本信息与toon平台名称一致	 String 	客户端提供(toon平台或用户输入)	 不可为空
 cUserType	 用户类型：1：个人用户  2：企业用户	 int	手机客户端userType=1	 不可为空
 tUserId	 Toon平台内的用户id	 long	客户端提供(toon平台)	 不可为空
 payPassWord	平台支付密码	String	用户输入或客户端提供默认	不可为空
 
 */
- (void)createUserWithTNP:(TNPCoinCreateUserInputForm *)TNP
                       succeed:(void(^)(NSDictionary *))succeed
                       failure:(void(^)(NSError *))failure;

/** 查询信誉宝账户信息
 
 传入字段：
 
 tUserId	Toon平台内的用户ID	long 	客户端提供	 否	 
 acctType	查询账户的类型:1现金账户 2.通宝账户	int	客户端提供	可空(全部)
 
 */
- (void)userAccountsWithTNP:(TNPCoinUserAccountsInputForm *)TNP
                  succeed:(void(^)(NSDictionary *))succeed
                  failure:(void(^)(NSError *))failure;

/** 订单交易记录
 
 传入字段：
 
 tUserId 通用户id String 	 	不可为空
 coinType 1：RMB 2：通宝币 int	 	不可为空
 fetchBegin	第几页	int	 	不可为空
 fetchNum	每页返回条数	int 	 	不可为空
 
 */
- (void)getOrderTradeRecordWithTNP:(TNPCoinGetOrderTradeRecordInputForm *)TNP
                    succeed:(void(^)(NSArray *))succeed
                    failure:(void(^)(NSError *))failure;

/** 订单详情
 
 传入字段：
 
 paySerial	订单id	String
 coinType	1：RMB 2：通宝币	String
 
 */
- (void)getOrderDetailWithTNP:(TNPCoinGetOrderDetailInputForm *)TNP
                           succeed:(void(^)(NSDictionary *))succeed
                           failure:(void(^)(NSError *))failure;

/** 通宝金额比率
 
 传入字段：
 
  channelCode	渠道码，现仅有一个ToonRecharge,不可为空	String
 
 */
- (void)getChannelRateByChannelCodeWithTNP:(TNPCoinGetChannelRateByChannelCodeInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

/** 生成通宝充值订单
 
 传入字段：
 
 tUserId	通用户ID	 	String	前端传入	不可为空
 payChannel	支付通道	 1011：支付宝钱包(默认)	String	payChannel=1011	不可为空
 orderValue	订单金额	 	String(double)	通宝充值个数	不可为空
 coinType	 1：RMB 2：通宝币 3：代金券'	 	 	通宝充值coinType=2
 exchangeType	交易类型 	1：消费 2：转账 3：充值（默认） 4：提现 5：退款	String	通宝充值 exchangeType=3	不可为空
 channelCode	渠道编码	 	String	 	不可为空
 
 */
- (void)createToonRechargeOrderWithTNP:(TNPCoinCreateToonRechargeOrderInputForm *)TNP
                                   succeed:(void(^)(NSDictionary *))succeed
                                   failure:(void(^)(NSError *))failure;

/** （通宝、现金）收银台
 
 传入字段：
 companyCode	商户编号	商户编号	String	商户提供	不可为空
 sign	验签	商户签名	String	商户提供，测试时，需要模拟生成	不可为空
 orderId	商户订单id	商户订单编号	String	商户提供	不可为空
 busiCode	业务码	商户业务码	String	商户申请并提供	不可为空
 tUserId	信用宝用户id	通用户唯一标识	String	调用者输入	不可为空
 payChannel	支付通道	 1001：资金账户 1002：通宝账户 String 1）消费通宝时,payChannel=1002 2）消费支付宝钱包时,payChannel=1011 不可为空
 orderValue	订单金额	 	String(double)	当为整数时,请加上小数点	不可为空
 payValue	支付金额	 	String(double)	当为整数时,请加上小数点	不可为空
 coinType	币种类型	 1：现金 2：通宝	String
 1）消费通宝时,coinType=2
 
 2）消费支付宝钱包时,coinType=1
 不可为空
 exchangeType	交易类型	 1：消费（默认） 2：转账 3：充值 4：提现 5：退款	String
 1）消费时,exchangeType=1
 
 2）充值消费时,exchangeType=3
 
 3）其它暂不支持
 不可为空
 goodsName	商品名称	 	String	商户提供	 不可为空	测试消费通宝
 goodsDes	商品描述	 	String	商户提供	 可为空	测试消费通宝
 icon	商品logo	 	String	 	可为空
 notifyUrl	通知回调地址	 	String	 	 可为空
 
 */
- (void)consumeForOrderWithTNP:(TNPCoinConsumeForOrderInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;

/** 支付订单
 
 传入字段：
 paySerial	交易流水id	 	String	数据来源于订单详情数据	不可为空
 companyCode	商户编号	 	String	数据来源于订单详情数据	不可为空
 payChannel	支付通道 1002：通宝账户 1011：支付宝钱包 String
 数据来源于订单详情数据
 
 现在手机客户端
 
 payChannel=1002通宝账户支付
 
 payChannel=1011支付宝支付
 不可为空
 orderId	商户订单号	 	String	数据来源于订单详情数据	不可为空
 sign	签名	 	String 数据来源于订单详情数据 不可为空
 
 */
- (void)doPayWithTNP:(TNPCoinDoPayInputForm *)TNP
                       succeed:(void(^)(NSDictionary *))succeed
                       failure:(void(^)(NSError *))failure;

/** 申领通宝（送通宝接口）
 
 传入字段：
 tUserId	通用户id	 	String	 	不可为空
 orderValue	订单金额	想要购买的通宝个数	String	 	不可为空	
 channelCode	渠道编码	 	String	 	不可为空
 
 */
- (void)applyTooboWithTNP:(TNPCoinApplyTooboInputForm *)TNP
             succeed:(void(^)(NSDictionary *))succeed
             failure:(void(^)(NSError *))failure;

/** 支付完成后,返回支付宝状态）
 
 传入字段：
 reqSerialNumber 交易编号 String 	 	不可为空
 resultStatus 支付宝立即通知的状态 String(int)	 	不可为空
 */
- (void)notifyForServerWithTNP:(TNPCoinNotifyForServerInputForm *)TNP
                  succeed:(void(^)(NSString *))succeed
                  failure:(void(^)(NSError *))failure;

/** 删除待付款订单[0713添加]
 
 传入字段：
 paySerial
 交易订单编号
 String 	 	不可为空
 */
- (void)delPayOrderWithTNP:(TNPCoinDelPayOrderInputForm *)TNP
                       succeed:(void(^)(NSString *))succeed
                       failure:(void(^)(NSError *))failure;

/** 通宝账户转账
 
 传入字段：
 tUserId	通用户id	收款人通用户id	String	 	 可为空，同时有值以tUserId为准
 mobilePhone	手机号码	收款人手机号	String	 	  不可为空
 orderValue	通宝数量	 通宝金额	String	 	 不可为空
 fromtUserId	 通用户id	扣款人通用户id	String	 	 不可为空
 note	备注信息	 转账备注	 String	 	可为空
 */
- (void)toonboTransferAccountWithTNP:(TNPCoinToonboTransferAccountInputForm *)TNP
                   succeed:(void(^)(NSDictionary *))succeed
                   failure:(void(^)(NSError *))failure;

/**********************************模拟消费通宝接口**********************************/

/** 模拟获取商品列表(废弃)
 
 传入字段：
 category 商品分类 String 	 	不可为空
 page 页码 String(int)	 	可为空
 paseSize	每页大小	String(int)	 	可为空
  */
- (void)listgoodsWithTNP:(TNPCoinListgoodsInputForm *)TNP
                             succeed:(void(^)(NSArray *))succeed
                             failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(6.0,6.0);

/** 模拟获取商品详情(废弃)
 
 传入字段：
 category 商品分类 String 	 	不可为空
 goodsNo 商品编码 String	 	不可为空

 */
- (void)detailgoodsWithTNP:(TNPCoinDetailgoodsInputForm *)TNP
                 succeed:(void(^)(NSDictionary *))succeed
                 failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(6.0,6.0);

/** 模拟下订单（废弃）
 
 传入字段：
 category 商品分类 String 	 	不可为空
 goodsNo 商品编码 String	 	不可为空
 tUserId	通用户ID	String	 	不可为空
 count	商品数量	String	 	不可为空
 discount	折扣	String	 	可为空
 noteInfo	备注信息	String	 	可为空

- (void)getpayorderWithTNP:(TNPCoinGetpayorderInputForm *)TNP
                   succeed:(void(^)(NSDictionary *))succeed
                   failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(6.0,6.0);
*/
@end
