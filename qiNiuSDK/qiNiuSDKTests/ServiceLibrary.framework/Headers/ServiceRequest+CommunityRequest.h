//
//  ServiceRequest+CommunityRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/4/8.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (CommunityRequest)

/** 获取收藏过的门户（楼盘）
 
 */
- (void)getListCollectedCommunityWithTNP:(TNPGetListCollectedCommunityInputForm *)TNP
                                 succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/** 收藏门户名片（楼盘）
 
 feedId           收藏时绑定的名片feedId
 comyFeedId  欲收藏门的户名片feedId
 
 */
- (void)addCommunityCollectionWithTNP:(TNPAddStoredCommunityInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;
/** 删除收藏门户名片（楼盘）
 
 scId              收藏id
 feedId           收藏时绑定的名片feedId
 comyFeedId  欲收藏门的户名片feedId
 
 */
- (void)removeCommunityCollectionWithTNP:(TNPDeleteStoredCommunityInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/** 获取门户名片应用列表
 
 */
- (void)getCommunityAppListSucceed:(void(^)(NSArray *))succeed
                           failure:(void(^)(NSError *))failure;

/** 获取认证过的住户
 
 comyFeedId  收藏门的户名片feedId
 
 */
- (void)getAuthedHouseWithTNP:(TNPGetAuthedCommunityInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;
/** 检查用户在社区的认证状态
 
 comyFeedId  门户名片的feedId（楼盘id）
 longitude        用户当前位置的精度
 latitude            用户当前位置的维度
 
 */
- (void)checkCommunityAuthStatusWithTNP:(TNPCheckAuthedCommunityInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;
/** 添加认证住户
 
 feedId            住户的名片feedId
 comyFeedId    门户名片feedId
 No             楼号_单元号_房间号
 
 */
- (void)addAuthedCommunityWithTNP:(TNPAddAuthedCommunityInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;
/** 获取门户邻居
 
comyFeedId    门户名片feedId
 */
- (void)getListCommunityNeighborWithTNP:(TNPGetCommunityNeighborListInputForm *)TNP
                        succeed:(void(^)(NSArray *))succeed
                        failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(6.0,6.0);
/** 获取邻里通应用列表
 
 */
- (void)getListCommunityNeighborAppSucceed:(void(^)(NSArray *))succeed
                        failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(6.0,6.0);


/** 获取社区业委会群组feedId
 
 comyFeedId  收藏门的户名片feedId
 
 */
- (void)getOwnerCommitteeWithTNP:(TNPGetOwnerCommitteeInputForm *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;

/** 根据群组feedId获取小区feedId
 
 groupFeedId   群组feedId
 
 */
- (void)getCommunityGroupByGroupFeedIdWithTNP:(TNPGetCommunityGroupByGroupFeedIdInputForm *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;


/** 首页配置信息查询
 
 */
- (void)getAppHomepageConfigSucceed:(void(^)(NSDictionary *))succeed
                                      failure:(void(^)(NSError *))failure;


/** 家长群
 
 comyFeedId 门户名片id
 
 */
- (void)obtainParentGroupWithTNP:(TNPCommunityObtainParentGroupInputForm *)TNP
                                      succeed:(void(^)(NSDictionary *))succeed
                                      failure:(void(^)(NSError *))failure;

/** 查看学校是否认证
 
 srcFeedId 门户名片id
 
 */
- (void)checkPortalOrgAuthWithTNP:(TNPCommunityCheckPortalOrgAuthInputForm *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;
/** 相关群组 查询门户名片和群组关系表
 
 comyFeedId ：门户名片feedId
 action：此条关系信息的状态 0 删除 1 可用
 
 */
- (void)getListGroupsWithTNP:(TNPPortalGroupInput *)TNP
                         succeed:(void(^)(NSArray *))succeed
                         failure:(void(^)(NSError *))failure;
/** 相关群组 增加群组
 
 comyFeedId 门户名片feedid
 groupFeedId群组feedid
 type 群组类型 900 普通群组 901邻里通群 902业委会群 903 家长群'
 
 */
- (void)addGroupWithTNP:(TNPPortalGroupInput *)TNP
                         succeed:(void(^)(NSString *))succeed
                         failure:(void(^)(NSError *))failure;
/** 相关群组 门户名片和群组的关系中是否存在
 
 comyFeedId 门户名片feedid 
 groupFeedId群组feedid 
 type 群组类型 900 普通群组 901邻里通群 902业委会群 903 家长群'
 
 */
- (void)isGroupWithTNP:(TNPPortalGroupInput *)TNP
                         succeed:(void(^)(NSString *))succeed
                         failure:(void(^)(NSError *))failure;
/** 相关群组 推荐个人群组给门户名片
 
 comyFeedId 门户名片feedid
 groupFeedId群组feedid
 type 群组类型 900 普通群组 901邻里通群 902业委会群 903 家长群'
 */
- (void)recomGroupWithTNP:(TNPPortalGroupInput *)TNP
                         succeed:(void(^)(NSString *))succeed
                         failure:(void(^)(NSError *))failure;
/** 门户名片  应用布局接口
 
 type 门户名片类型(0社区名片 1景区名片 2学校名片) 
 version版本号 v1.0.0 
 click是否可点击：1可点击 0不可点击

 */
- (void)getLayoutWithTNP:(TNPCommunityAppInput *)TNP
                         succeed:(void(^)(NSArray *))succeed
                         failure:(void(^)(NSError *))failure;
/** 相关群组 查询是否已经推荐 接口
 
 comyFeedId 门户名片  
 groupFeedIds 群组名片ids  List <String>
 
 */
- (void)queryRecommdedWithTNP:(TNPPortalGroupInputs *)TNP
                 succeed:(void(^)(NSArray *))succeed
                 failure:(void(^)(NSError *))failure;

/** 相关群组 取消已经推荐群组 接口
 
 comyFeedId 门户名片feedid
 groupFeedId群组feedid
 
 */
- (void)cancelRecommdWithTNP:(TNPPortalGroupInput *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

@end
