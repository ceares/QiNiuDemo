//
//  ServiceRequest+AgencyRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/30.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (AgencyRequest)


/** 服务周边搜索
 
 必传字段：
 latilongitude	当前经纬度（如39.995005,116.451891）	String 	是必传
 currentPageNumber	当前页数（如1）	Integer 	是必传
 eachPageItems	每页条数	Integer 	是必传
 excludeFeedIds	需要过滤的feedId（逗号分隔）	String 	是必传
 */
- (void)searchAroundWithTNP:(TNPAgencySearchInputForm *)TNP
                           succeed:(void(^)(NSArray *))succeed
                           failure:(void(^)(NSError *))failure;

/** 获得服务分类
 
 必传字段：
 无
 */
- (void)getAgencyCategoriesSucceed:(void(^)(NSArray *))succeed
                    failure:(void(^)(NSError *))failure;

/** 根据分类Id获得分类下所有服务项列表
 
 必传字段：
 lInteger categoryId;   分类id  如：17
 */
- (void)getKeywordByCategoryIdWithTNP:(TNPCategoryInputForm *)TNP
                    succeed:(void(^)(NSArray *))succeed
                    failure:(void(^)(NSError *))failure;



/** 查询所有注册过服务项的名片
 
 必传字段：
 feedId	名片id	string		 feeId可以上传多个 逗号分隔
 composeId	 服务项id	 Integer
 */
- (void)getRegFeedIdsWithTNP:(TNPAgencyItemInputForm *)TNP
                              succeed:(void(^)(NSArray *))succeed
                              failure:(void(^)(NSError *))failure;


/** 获取服务者是否注册过服务项状态
 
 必传字段：
 feedId 服务者feedId（逗号分隔）
 */
- (void)getRegStatusWithTNP:(TNPAgencyGetRegStatusInputForm *)TNP
                              succeed:(void(^)(NSString *))succeed
                              failure:(void(^)(NSError *))failure;

/** 查询评价平均分
 
 必传字段：
 feedId 所查平均分的feedId
 */
- (void)getEvaluationAvgWithTNP:(TNPAgencyGetEvaluationAvgInputForm *)TNP
                    succeed:(void(^)(NSDictionary *))succeed
                    failure:(void(^)(NSError *))failure;

/** 获取退款详情
 
 必传字段：
 feedId 所查平均分的feedId
 */
- (void)getEvaluationCountWithTNP:(TNPAgencyGetEvaluationCountInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/** 根据feedID 获取名片的评论总数
 
 必传字段：
 feedId 名片feedId
 */
- (void)getEvaluationByFeedIdWithTNP:(TNPAgencyGetEvaluationByFeedIdInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/** 根据feedID和评价类型查询评价明细
 
 必传字段：
 feedId	服务者id
 evaluationRank	评论级别
 currentPageNumber	当前页数
 eachPageItems	每页记录数
 */
- (void)getEvaluationDetailListWithTNP:(TNPAgencyGetEvaluationDetailListInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/** 获得服务者的服务项列表
 
 必传字段：
 feedId  feedID
 */
- (void)getMyAgencyItemsWithTNP:(TPNAgencyItem *)TNP
                               succeed:(void(^)(NSArray *))succeed
                               failure:(void(^)(NSError *))failure;
/** 获取名片启用服务项的最低价格
 
 必传字段：
 feedIds 名片feedId
 */
- (void)getMinPriceByFeedIdsWithTNP:(TNPAgencyGetMinPriceByFeedIdsInputForm *)TNP
                        succeed:(void(^)(NSArray *))succeed
                        failure:(void(^)(NSError *))failure;


/** 查询评价详情及服务项
 
 必传字段：
 feedId	需求方FeedId
 */
- (void)getAgencyItemAndEvaCountWithTNP:(TNPAgencyGetAgencyItemAndEvaCountInputForm *)TNP
                            succeed:(void(^)(NSDictionary *))succeed
                            failure:(void(^)(NSError *))failure;


@end
