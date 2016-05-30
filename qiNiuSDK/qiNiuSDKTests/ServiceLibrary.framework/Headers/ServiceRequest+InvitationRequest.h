//
//  ServiceRequest+InvitationRequest.h
//  ServiceLibrary
//
//  Created by Chenglong Wang on 15/8/5.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (InvitationRequest)

/*************************************邀请有奖*************************************/

/*邀请人总体信息查询接口
 
说明：查询邀请人的实际统计记录
必传字段：
 
返回值：
userId	用户ID
mobile	手机号码
awardTotal	奖励通报总数
fansFirst	一级粉丝数量
fansSecond	二级粉丝数量
fansThird	三级粉丝数量
 */
- (void)getInvitationCollectSucceed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;


/*邀请人填写邀请码接口
 
 说明：输入邀请码，处理邀请，并下发奖品
 必传字段：
 mobile	被邀请人手机号
 
 返回值：
 data	处理成功标识	
 */
- (void)processInvitaionMobileWithTNP:(TNPInvitaionprocessInvitaionMobileInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

/*邀请规则（web页面）
 */

-(NSString *)getInvitationRule;

/*收益排行接口（web页面）
 */
- (NSString *)getProfitRanking;


/*粉丝明细接口（web页面）
 
 说明：查询实时统计记录，并逐级计算粉丝的获奖情况
  */
- (NSString *)getFansDetail;

/*
 获取分享地址接口
 */
- (void)getShareUrlWithTNP:(TNPInvitationGetShareUrlInputForm *)TNP
                   succeed:(void(^)(NSDictionary *))succeed
                            failure:(void(^)(NSError *))failure;

/*
 获取邀请语
 */
- (void)getInviteMsgWithTNP:(TNPInvitationprizeGetInviteMegInputForm *)TNP
                   succeed:(void(^)(NSArray *))succeed
                   failure:(void(^)(NSError *))failure;

/*************************************积分排名*************************************/
/*查询积分排名接口

 */
- (void)obtainScoreWithTNP:(TNPUserScoreForm *)TNP
                   succeed:(void(^)(NSDictionary *))succeed
                   failure:(void(^)(NSError *))failure;

/*询群组社交积分和等级
 
入参：String feedId 
 
 */
- (void)obtainGroupScoreWithTNP:(TNPGroupScoreForm *)TNP
                              succeed:(void(^)(NSDictionary *))succeed
                              failure:(void(^)(NSError *))failure;

/*查询名片社交、消费、服务积分和等级
 
 入参：String feedId
 
 */
- (void)obtainCardScoreWithTNP:(TNPCardScoreForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/*************************************web*************************************/
-(NSString *)webViewStr:(NSDictionary *)dic;

/*************************************短链接接口*************************************/

/*短链接接口
 
 */
- (void)shortCreateWithTNP:(TNPShortCreateInputForm *)TNP
                       succeed:(void(^)(NSDictionary *))succeed
                       failure:(void(^)(NSError *))failure;


@end
