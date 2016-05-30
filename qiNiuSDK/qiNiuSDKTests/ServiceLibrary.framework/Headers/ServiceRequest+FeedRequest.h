//
//  ServiceRequest+FeedRequest.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/6/24.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (FeedRequest)
// TNPFeed

//描述：事物类型_事物Id
//类型：String
//String feedId;
//
//
//描述：名称
//类型：String
//String title;
//
//描述：子标题
//类型：String
//String subtitle;
//
//描述：大头照
//类型：String
//String avatarId;
//
//描述：版本
//类型：Long
//取值范围：时间的long值
//String version;


//查询Feed接口
//必传字段：
//String  feedId
//
//String version
//
//返回值TNP：TNPFeed
- (void)obtainFeedWithTNP:(TNPFeedInputForm *)TNP
                  succeed:(void(^)(NSDictionary *))succeed
                  failure:(void(^)(NSError *))failure;


//批量查询Feed接口
//必传字段：
//
//String  feedIds
//
//返回值TNP：List<TNPFeed>
- (void)obtainFeedListWithTNP:(TNPFeedInputForm *)TNP
                        succeed:(void(^)(NSArray *))succeed
                        failure:(void(^)(NSError *))failure;


//批量查询个人名片FeedId接口
//必传字段：
//
//String  userId
//
//String cardVersion
//
//返回值TNP：TNPCardFeedIdList
//
//返回值说明：TNPCardFeedIdList
- (void)obtainCardFeedIdListWithTNP:(TNPCardFeedIdInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

//批量查询组织名片FeedId接口
//必传字段：
//
//String  userId
//
//String orgCardVersion
//
//返回值TNP：TNPOrgCardFeedIdList
//
//返回值说明：TNPOrgCardFeedIdList
- (void)obtainOrgCardFeedIdListWithTNP:(TNPCardFeedIdInputForm *)TNP
                            succeed:(void(^)(NSDictionary *))succeed
                            failure:(void(^)(NSError *))failure;

//批量查询员工名片FeedId接口
//必传字段：
//
//String  userId
//
//String staffCardVersion
//
//返回值TNP：TNPStaffCardFeedIdList
//
//返回值说明：TNPStaffCardFeedIdList
//
//TNPStaffCardItem
- (void)obtainStaffCardFeedIdListWithTNP:(TNPCardFeedIdInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;

//批量查询名片FeedId接口
//必传字段：
//
//String  userId
//
//
//String  cardVersion
//
//String orgCardVersion
//
//String staffCardVersion
//
//返回值TNP：Map<String,Object> Map中存放了3个key值对应3个实体类：
//
//card：TNPCardFeedIdList
//
//orgCard：TNPOrgCardFeedIdList
//
//staffCard：TNPStaffCardFeedIdList


- (void)obtainAllCardFeedIdListWithTNP:(TNPCardFeedIdInputForm *)TNP
                                 succeed:(void(^)(NSDictionary *))succeed
                                 failure:(void(^)(NSError *))failure;

//获取联系人feed（通讯录）
//必传字段：
//
//Long userId,
//
//Long version
//
//返回值说明：TNPCardFeedIdList.txt
//
//返回值子对象：TNPContactFeed.txt
- (void)obtainContactFeedWithTNP:(TNPContactFeedInputForm *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;



//根据名片id获取联系人feed（通讯录）
//必传字段：
//
//Long cardId,
//
//Integer cardType
//
//Long version
//
//返回值说明：TNPCardFeedIdList.txt
//
//返回值子对象：TNPContactFeed.txt
- (void)obtainContactFeedByCardIdWithTNP:(TNPContactFeedInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;



//根据用户Id获取用户下所有名片发起或参与的活动
//必传字段：
//
//String  userId
//
//String version
//
//返回值TNP：Map<String,TNPActivityFeedList> map    key值为：myCreateActivitys：我发起的活动    myJoinActivitys：我参与的活动
//
//返回值说明：TNPActivityFeedList.txt
//
//TNPActivityFeed.txt
- (void)obtainActivityFeedIdListWithTNP:(TNPActivityFeedInputForm *)TNP
                                 succeed:(void(^)(NSDictionary *))succeed
                                 failure:(void(^)(NSError *))failure;


//根据用户Id获取用户下所有名片发起或参与的群组
//必传字段：
//
//String  userId
//
//String version
//
//返回值TNP：Map<String,TNPGroupFeedList>
//
//返回值说明：TNPGroupFeedList.txt
//
//TNPGroupFeed.txt
- (void)obtainGroupFeedListWithTNP:(TNPGroupFeedInputForm *)TNP
                                succeed:(void(^)(NSDictionary *))succeed
                                failure:(void(^)(NSError *))failure;
//获取企业Feed列表
//必传参数：无
//返回TNP: TNPOrgFeedInfo
//
//返回值说明：
//
//List<TNPOrgFeed>
- (void)obtainCompanyFeedListWithTNP:(TNPCompanySearchForm *)TNP
                           succeed:(void(^)(NSDictionary *))succeed
                           failure:(void(^)(NSError *))failure;

//查询企业通讯录Feed(管理员或者拥有者)
//必传字段：
//
//private String orgFeedId;
//
//private String version                   //更新时间
//
//返回值说明：TNPStaffFeedInfo
//
//返回值子对象：List<TNPStaffFeed>
- (void)obtainContactFeedsByAdminWithTNP:(TNPOrgContactFeedForm *)TNP
                                 succeed:(void(^)(NSDictionary *))succeed
                                 failure:(void(^)(NSError *))failure;

//查询企业通讯录（员工）
//必传字段：
//
//private String orgFeedId;


//private String staffFeedId;成员名片ID
//
//private String version                   //更新时间
//
//返回值说明：TNPStaffFeedInfo
//
//返回值子对象：List<TNPStaffFeed>
- (void)obtainContactFeedsByMemberWithTNP:(TNPOrgContactFeedForm *)TNP
                                  succeed:(void(^)(NSDictionary *))succeed
                                  failure:(void(^)(NSError *))failure;

//查询对外通讯录Feed
//必传字段：
//
//private String orgFeedId;//组织ID
//
//private String version                   //更新时间
//
//返回值说明：TNPStaffFeedInfo
//
//返回值子对象：List<TNPStaffFeed>  // 通讯录集合
- (void)obtainExternalContactFeedsWithTNP:(TNPOrgContactFeedForm *)TNP
                                  succeed:(void(^)(NSDictionary *))succeed
                                  failure:(void(^)(NSError *))failure;

//通过组织树节点id获取该节点下的组织成员名片Feed
//必传字段：
//
//private String orgFeedId;   // 组织id
//private String nodeId; // 节点id
//private String version                   //更新时间
//返回值说明：TNPStaffFeedInfo
//返回值子对象：List<TNPStaffFeed>
- (void)obtainMemCardFeedsByNodesWithTNP:(TNPMemberNodeRelationFeedForm *)TNP
                                 succeed:(void(^)(NSDictionary *))succeed
                                 failure:(void(^)(NSError *))failure;

//批量查询userId接口
//必传字段：
//String  feedIds
//返回值TNP：List<Long>
//List: TNPFeed.txt  只包含feedId和userId
- (void)obtainUserIdListWithTNP:(TNPFeedInputForm *)TNP
                                 succeed:(void(^)(NSArray *))succeed
                                 failure:(void(^)(NSError *))failure;


//获取楼盘位置信息
//必传字段：
//String  feedIds
//返回值TNP：List<TNPFeedPosition>
- (void)obtainEsateFeedListWithTNP:(TNPFeedInputForm *)TNP
                        succeed:(void(^)(NSArray *))succeed
                        failure:(void(^)(NSError *))failure;


@end
