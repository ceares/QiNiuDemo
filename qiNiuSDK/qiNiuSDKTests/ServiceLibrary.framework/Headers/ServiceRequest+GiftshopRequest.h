//
//  ServiceRequest+GiftshopRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/4.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (GiftshopRequest)

/*
 详见wiki--http://devwiki.syswin.com/pages/viewpage.action?pageId=12125655
 */

/** 查询礼物商城列表
 
 名称 字段 解释 类型 必须
 
 礼物状态 status 01：已下线；02：已上线 string N
 拉取列表起始位置 fetchBegin 默认为0 int N
 拉取列表的数量 fetchNum 根据滑动幅度，前端来定 int N
 礼物ID giftId string N
 礼物名称 giftName string N
 礼物类型 giftType 01：限量；02：普通 string N
 
 */
- (void)giftsWithTNP:(TNPGiftshopGiftsInputForm *)TNP
                     succeed:(void(^)(NSArray *))succeed
                     failure:(void(^)(NSError *))failure;

/** 查询我的礼物
 
 名称 字段 解释 类型 必须
 
 拉取列表起始位置 fetchBegin 默认为0 int N
 拉取列表的数量 fetchNum 根据滑动幅度，前端来定 int N
 用户ID userId long Y
 */
- (void)mygiftWithTNP:(TNPGiftshopMygiftInputForm *)TNP
             succeed:(void(^)(NSArray *))succeed
             failure:(void(^)(NSError *))failure;

/** 查询收到礼物列表
 
 名称 字段 解释 类型 必须
 
 拉取列表起始位置 fetchBegin 默认为0 int N
 拉取列表的数量 fetchNum 根据滑动幅度，前端来定 int N
 用户Id userId long N
 名片id	feedId string	Y
 */
- (void)recegiftWithTNP:(TNPGiftshopRecegiftInputForm *)TNP
              succeed:(void(^)(NSArray *))succeed
              failure:(void(^)(NSError *))failure;

/** 查询收到礼物数量
 
 名称 字段 解释 类型 必须
 
 名片id	feedId string	Y
 */
- (void)recgiftnumWithTNP:(TNPGiftshopRecgiftnumInputForm *)TNP
                succeed:(void(^)(NSArray *))succeed
                failure:(void(^)(NSError *))failure;

/** 购买礼物
 
 名称 字段 解释 类型 必须
 
 订单ID payOrderId string Y
 用户ID userId long Y
 订单状态	status	01：初始 02：支付中 03：支付成功 04：失败	string	Y
 */
- (void)buygiftWithTNP:(TNPGiftshopBuygiftInputForm *)TNP
                  succeed:(void(^)(NSDictionary *))succeed
                  failure:(void(^)(NSError *))failure;

/** 查询商品剩余量
 
 名称 字段 解释 类型 必须
 
 礼物ID giftId long string
 */
- (void)giftsurplusWithTNP:(TNPGiftshopGiftsurplusInputForm *)TNP
               succeed:(void(^)(NSDictionary *))succeed
               failure:(void(^)(NSError *))failure;

/** 赠送礼物
 
 名称 字段 解释 类型 必须
 
 礼物ID giftId string Y
 获赠者ID userId long Y
 获赠者名片ID	feedId	 	string	Y
 赠送者ID sourceId long Y
 赠送者名片ID	sourceFeedId	 	string	Y
 */
- (void)sendgiftWithTNP:(TNPGiftshopSendgiftInputForm *)TNP
                   succeed:(void(^)(NSDictionary *))succeed
                   failure:(void(^)(NSError *))failure;

/** 添加礼物
 
 名称 字段 解释 类型 必须
 
 礼物名称 giftName string Y
 礼物价格 price int Y
 积分价格 point int Y
 获赠比率 ratio int Y
 库存量 total int Y
 剩余量 surplus int Y
 礼物类型 giftType 01：限量；02：普通 string Y
 状态 status string Y
 已售总额 amount int Y
 排序 orderBy int Y
 礼物图ID picId long Y
 礼物图 url picUrl string Y
 备注 des string Y
 */
- (void)addgiftWithTNP:(TNPGiftshopAddgiftInputForm *)TNP
                succeed:(void(^)(NSDictionary *))succeed
                failure:(void(^)(NSError *))failure;

/** 编辑礼物
 
 名称 字段 解释 类型 必须
 
 礼物ID giftId string N
 礼物名称 giftName string N
 礼物价格 price int N
 积分价格 point int N
 获赠比率 ratio int N
 库存量 total int N
 剩余量 surplus int N
 礼物类型 giftType 01：限量；02：普通 string N
 状态 status string N
 上线时间 lineTime string N
 已售总额 amount int N
 排序 orderBy int N
 礼物图ID picId long N
 礼物图 url picUrl string N
 备注 des string N
 */
- (void)updategiftWithTNP:(TNPGiftshopUpdategiftInputForm *)TNP
               succeed:(void(^)(NSDictionary *))succeed
               failure:(void(^)(NSError *))failure;

/** 生成订单
 
 名称 字段 解释 类型 必须
 
 礼物ID giftId long Y
 购买者ID userId long Y
 
 */
- (void)gifttradeWithTNP:(TNPGiftshopGifttradeInputForm *)TNP
                  succeed:(void(^)(NSDictionary *))succeed
                  failure:(void(^)(NSError *))failure;
@end
