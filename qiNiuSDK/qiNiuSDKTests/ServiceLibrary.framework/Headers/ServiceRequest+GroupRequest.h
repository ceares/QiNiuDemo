//
//  ServiceRequest+GroupRequest.h
//  ServiceLibrary
//
//  Created by chunxu on 15/5/14.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import "ServiceRequest.h"

@interface ServiceRequest (GroupRequest)
/** 创建群组
 private String userId;//描述:用户的id 类型：整型 取值范围：大于0的整数
 
 private String cardFeedId;//描述：名片的id 类型：长整型 取值范围：大于0的整数
 
 private String name;//描述:群组名称 类型：字符型 取值范围：字符
 
 private String spreadTitle;//描述：群组的推广语 类型：字符型 取值范围：任意字符
 
 private String des;//（非必填）在填写群组简介的情况下需要传 描述:群组简介 类型：字符型 取值范围：字符
 
 private String groupMemberFeedId;（非必填）//在邀请其他好友的情况下创建需要传 描述:邀请成员id串 类型：字符型 取值范围：字符型 格式为：名片Feedid！名片Feedid 如c_1!o_2
 */
- (void)createGroupWithTNP:(TNPGroupInputForm *)TNP
                                   succeed:(void(^)(NSDictionary *))succeed
                                   failure:(void(^)(NSError *))failure;

/** 获取访问面信息
 * 描述：访问者feedId
private String fromFeedId;

 * 描述：要获取面的群组的feedId
private String toFeedId;

 * 描述：访问面的类型 类型：整型 取值范围： 1、匿名面 2 好友面 3 配置面
private String aspectType;//访问面类型

 * 描述:访问时间戳 类型：整型 取值范围：大于0的整数
private String version;//描述:时间戳 类型：整型 取值范围：大于0的整数
 */
- (void)showGroupFrameWithTNP:(TNPShowGroupFrameInputForm *)TNP
                   succeed:(void(^)(NSDictionary *))succeed
                   failure:(void(^)(NSError *))failure;

/** 获取群组设置信息
 
 private String feedId;//群组feedId
 
 private String version=0l;//时间戳
 */
- (void)obtainGroupSettingsInfoWithTNP:(TNPGroupInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;

/** 更新群组信息
 
fromFeedId、toFeedId必传 其他字段都非必填 更新什么就传什么
 */
- (void)updateGroupWithTNP:(TNPUpdateGroupInputForm *)TNP
                            succeed:(void(^)(NSDictionary *))succeed
                            failure:(void(^)(NSError *))failure;

/** 获取群组列表
 * 描述：列表类型 类型：整型 取值范围： 1、我发起的群组 2、我发起和我参加的群组
 private String listType;
 
 * 描述：用户的id 类型：长整型 取值范围：大于0的整数
 private String userId;
 
 * 描述：名片的id 类型：长整型 取值范围：大于0的整数
 private String cardFeedId;
 
 * 描述:时间戳 类型：整型 取值范围：大于0的整数
 private String version=0l;

 */
- (void)groupListWithTNP:(TNPGroupListInputForm *)TNP
                            succeed:(void(^)(NSArray *))succeed
                            failure:(void(^)(NSError *))failure;

/** 获取群组成员
 
 private String feedId;//描述：群组的feedid
 
 private String version;//描述：时间戳 类型：整型 取值范围：大于0的整数
 
 */
- (void)obtainGroupMemberWithTNP:(TNPGroupInputForm *)TNP
                 succeed:(void(^)(NSDictionary *))succeed
                 failure:(void(^)(NSError *))failure;


/** 邀请群组成员
 
 private String userId;//描述:用户的id 类型：整型 取值范围：大于0的整数
 
 private String cardFeedId;//描述：名片的id 类型：长整型 取值范围：大于0的整数
 
 private String feedId;//描述：群组的id 类型：长整型 取值范围：大于0的整数
 
 private String groupMemberFeedId;//描述:邀请成员id串 类型：字符型 取值范围：字符型 格式为：名片Feedid！名片Feedid 如c_1!o_2
 */
- (void)groupInviteMemberWithTNP:(TNPGroupInputForm *)TNP
                   succeed:(void(^)())succeed
                   failure:(void(^)(NSError *))failure;

/** 移除群组成员
 
 * 描述：要移除的人员的cardId 类型：整型 取值范围：大于0的整数
private String cardFeedId;

 * 描述：对应的群组的id 类型：长整型 取值范围：大于0的整数
private String feedId;

 */
- (void)groupUserRemoveWithTNP:(TNPGroupUserRemoveInputForm *)TNP
                         succeed:(void(^)())succeed
                         failure:(void(^)(NSError *))failure;

/** 退出群组
 
 private String cardFeedId;//描述：名片feedid
 private String feedId;//描述：群组的feedid
 */
- (void)quitGroupWithTNP:(TNPGroupInputForm *)TNP
                       succeed:(void(^)())succeed
                       failure:(void(^)(NSError *))failure;

/** 获取群组和人员关系的增量更新
 * 描述：进行增量更新的时间 类型：整型 取值范围：大于0的整数
private String operateTime;

 * 描述:用户的id 类型：整型 取值范围：大于0的整数
private String userId;

 */
- (void)groupIncrementalUpdateWithTNP:(TNPGroupIncrementalUpdateInputForm *)TNP
                 succeed:(void(^)(NSArray*))succeed
                 failure:(void(^)(NSError *))failure;

/*
获取群组和人员关系的增量更新(Feed)
 参数说明：
 * 描述：进行增量更新的时间 类型：整型 取值范围：大于0的整数
private String operateTime;
 * 描述:用户的id 类型：整型 取值范围：大于0的整数
private String userId;
 
- (void)obtainGroupFeedUserRelationShipListWithTNP:(TNPGroupIncrementalUpdateInputForm *)TNP
                              succeed:(void(^)(NSDictionary*))succeed
                              failure:(void(^)(NSError *))failure;

*/

/** 获取二维码

 * 描述:活动二维码的宽度 类型：整型 取值范围：大于0的整数
private String width = 0;

 * 描述:活动二维码的高度 类型：整型 取值范围：大于0的整数
private String height = 0;

 * 描述：群组的feedId
private String feedId;
 
 * 描述：当前用户id 类型：长整形 取值范围：大于0的整数
private Long userId;
 
 * 描述：名片feedId
private String cardFeedId;
 
 */
- (void)groupQRCodeWithTNP:(TNPGroupQRInputForm *)TNP
                              succeed:(void(^)(NSDictionary*))succeed
                              failure:(void(^)(NSError *))failure;

/** 获取报名内容
 private String registCardFeedId;//描述：待审核人的cardId
 
 private String feedId;//描述：群组的id 类型：长整型 取值范围：大于0的整数
 */
- (void)groupUserRegistContentWithTNP:(TNPGroupInputForm *)TNP
                   succeed:(void(^)(NSDictionary*))succeed
                   failure:(void(^)(NSError *))failure;
/** 报名加入群组（申请模式和开放模式）
 
 private String userId;//描述:用户的id 类型：整型 取值范围：大于0的整数
 private String cardFeedId;//描述：名片的feedid
 private String feedId;//描述：群组的feedid
 
 private String  applyContent;//(非必填 在申请模式下提交)描述:申请表 类型：字符型 取值范围：字符型，一般为json格式字符串
 
 */
- (void)groupUserRegistWithTNP:(TNPGroupInputForm *)TNP
                              succeed:(void(^)(NSDictionary *))succeed
                              failure:(void(^)(NSError *))failure;

/** 群组审核
 private String registCardFeedId;//描述：待审核人的registCardFeedId
 
 private String isDel=0;//描述:是否删除 类型：整型 取值范围：0、未删除 1、删除
 
 private String cardFeedId;//描述：名片的FeedId
 private String feedId;//描述：群组的FeedId
 */
- (void)groupUserRegistExamineWithTNP:(TNPGroupInputForm *)TNP
                       succeed:(void(^)())succeed
                       failure:(void(^)(NSError *))failure;

/** 添加名片上的推荐群组

 * 描述：群组的id
private String feedId;


 * 描述：名片的id
private String cardFeedId;

 * 描述：审核状态 类型：整型 取值范围： 1待审核 2审核通过 3拒绝
private String status
 
 */
- (void)addCardGroupRefWithTNP:(TNPCardGroupRefInputForm *)TNP
                              succeed:(void(^)())succeed
                              failure:(void(^)(NSError *))failure;

/** 查询名片上的推荐群组列表
 

 * 描述：名片的feedid
private String cardFeedId;
 
 * 描述：审核状态 类型：整型 取值范围 1、待审核 2、审核通过 3、审核不通过
 private String status;
 */
- (void)obtainCardGroupListWithTNP:(TNPCardGroupRefInputForm *)TNP
                       succeed:(void(^)(NSArray *))succeed
                       failure:(void(^)(NSError *))failure;

/** 删除名片上的推荐群组

 * 描述：群组的id
private String feedId;

 * 描述：名片的id
private String cardFeedId;
 
 */
- (void)deleteCardGroupRefWithTNP:(TNPCardGroupRefInputForm *)TNP
                          succeed:(void(^)())succeed
                        failure:(void(^)(NSError *))failure;

/** 获取群组申请表
private String feedId;//描述：群组ID 类型：整型 取值范围：大于0的整数
 */
- (void)obtainApplyContentWithTNP:(TNPGroupInputForm *)TNP
                       succeed:(void(^)(NSDictionary *))succeed
                       failure:(void(^)(NSError *))failure;

/** 新增推荐群组（名片、群组、活动）接口
 
 必填参数：
 // 描述: 1:名片2:活动3:群组  类型:Integer
 public String recommendType;
 
 //描述:状态（0:删除1:待审核2:审核已通过3:审核未通过） 类型:Integer
 public String status;
 
 //描述groupId，规则：g_groupId  类型:String
 private String fromFeedId;
 
 //描述 推荐到的类型（名片*_cardId，群组g_groupId，活动a_activityId）  类型:String
 private String toFeedId;
 
 //描述：推荐原因(非必输)     类型：String
 private String recomReason;
 
 返回值TNP：
 
 返回状态码说明 13008:群组重复推荐
 */
- (void)addRecommendGroupWithTNP:(TNPGroupRecommendFeedForm *)TNP
                         succeed:(void(^)())succeed
                         failure:(void(^)(NSError *))failure;

/** 删除推荐群组（名片、群组、活动）接口
 
 必填参数：
 
 
 //描述:关系Id(推荐表主键) 类型:Long
 public String relationId;

 */
- (void)deleteRecommendGroupWithTNP:(TNPGroupRecommendFeedForm *)TNP
                            succeed:(void(^)())succeed
                            failure:(void(^)(NSError *))failure;


/** 查询推荐群组（名片、群组、活动）接口

 必填参数：
 
 //feed改造对应groupId，规则：g_groupId 类型String
 private String feedId;
 
 // 描述: 1:名片2:活动3:群组  类型:Integer
 
 private String recommendType;
 */
- (void)getRecommendGroupListWithTNP:(TNPGroupRecommendFeedForm *)TNP
                                succeed:(void(^)(NSDictionary *))succeed
                                failure:(void(^)(NSError *))failure;


/** 更新推荐群组（名片、群组、活动）接口
 
 //描述:状态（0:删除1:待审核2:审核已通过3:审核未通过） 类型:Integer
 public String status;
 
 //描述:关系Id(推荐表主键) 类型:Long
 public String relationId;
 
 */
- (void)updateRecommendGroupWithTNP:(TNPGroupRecommendFeedForm *)TNP
                            succeed:(void(^)())succeed
                            failure:(void(^)(NSError *))failure;

/**获取群组广播类别
 

*/
- (void)obtainGroupBroadcastTypeWithsucceed:(void(^)(NSDictionary *))succeed
                            failure:(void(^)(NSError *))failure;

/**获取群组列表的增量更新
 
 * 描述：进行增量更新的时间 类型：整型 取值范围：大于0的整数
private String operateTime;

 * 描述:用户的id 类型：整型 取值范围：大于0的整数
private String userId;
 
 */
- (void)groupListIncrementalUpdateWithTNP:(TNPGroupListIncrementalUpdateInputForm *)TNP
                            succeed:(void(^)(NSArray *))succeed
                            failure:(void(^)(NSError *))failure;
/** 审核名片上的推荐群组
 * 描述：群组的feedId
private String feedId;

 * 描述：名片的feedId
private String cardFeedId;

 * 审核状态 1待审核 2审核通过 3拒绝
private Integer status;
*/
- (void)updateCardGroupRefWithTNP:(TNPCardGroupRefInputForm *)TNP
                            succeed:(void(^)())succeed
                            failure:(void(^)(NSError *))failure;
/** 根据群组feedId得到创建人userId
private String feedId;//描述：群组ID 类型：整型 取值范围：大于0的整数
 
 private String version=0l;//时间戳
 */
- (void)obtainUserIdByGroupIdWithTNP:(TNPGroupInputForm *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;

/** 根据群组feedId得到创建人名片creatorCardId
private String feedId;//描述：群组ID 类型：整型 取值范围：大于0的整数
 */
- (void)obtainGroupCreatorCardIdWithTNP:(TNPGroupInputForm *)TNP
                             succeed:(void(^)(NSDictionary *))succeed
                             failure:(void(^)(NSError *))failure;

/** 根据群组feedId得到参与者人数
private String feedId;//描述：群组ID 类型：整型 取值范围：大于0的整数
 */
- (void)getGroupUserCountWithTNP:(TNPGroupInputForm *)TNP
                                succeed:(void(^)(NSDictionary *))succeed
                                failure:(void(^)(NSError *))failure;


/** 根据群组feedId列表获取群组人数列表
 //描述：活动feedId列表 类型：List
 private List<String> feedIdList;
 */
- (void)getGroupUserListCountsWithTNP:(TNPGroupFeedListFrom *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;


/** 获取群组公告

//描述：群组的feedId g_groupId（groupId）  类型Long
private String feedId;
 */
- (void)obtainGroupAfficheListWithTNP:(GruopAfficheForm *)TNP
                              succeed:(void(^)(NSDictionary *))succeed
                              failure:(void(^)(NSError *))failure;

/** 添加群组公告
 
 // 描述：群组的feedId g_groupId（groupId）  类型Long
 
 private String feedId;
 
 //描述:标题 类型:String
 private String title;
 
 //描述:内容  类型:String
 private String content;
 */
- (void)addGroupAfficheListWithTNP:(GruopAfficheForm *)TNP
                              succeed:(void(^)())succeed
                              failure:(void(^)(NSError *))failure;
/** 根据群组feedId获取群组申请模式
 参数说明：
 private String feedId;//描述：群组ID 类型：整型 取值范围：大于0的整数
 
 返回参数说明:
 
 private String enrollType=0;// 描述:申请模式 类型：整型 取值范围：0:开放模式  1:申请模式
 */
- (void)obtainGroupEnrollTypeWithTNP:(GruopAfficheForm *)TNP
                           succeed:(void(^)(NSDictionary *))succeed
                           failure:(void(^)(NSError *))failure;

/** 获取默认推荐群组列表
 参数说明：
 //描述：获取推荐列表的类型  类型：Integer  说明：1:通讯录的推荐 2:周边的推荐
 
 private String defaultRecomType;
 */
- (void)queryDefaultRecommendGroupListWithTNP:(TNPGroupRecommendFeedForm *)TNP
                                      succeed:(void(^)(NSArray *))succeed
                                      failure:(void(^)(NSError *))failure;

/** 批量 群组推荐 排序
 参数说明：
 //描述:排序字段
 
 private String feedIds;
 
 //描述:推荐到的对应活动 群组 名片id  a_activityId g_groupId
 
 private String toFeedId;

 */
- (void)updateGroupRecomSrotResultWithTNP:(GroupRecommendFeedForm *)TNP
                             succeed:(void(^)())succeed
                             failure:(void(^)(NSError *))failure;

/** 获取群组匿名面接口
 参数说明：
 //描述:群组FeedId
 
 private String toFeedId;
 
 //描述:访问者cardFeedId
 
 private String fromFeedId;
 
 //描述：访问面的类型 类型：整型 取值范围： 1、匿名面 2 好友面 3 配置面
 
 private String aspectType;//访问面类型
 
 */
- (void)getGroupAFWithTNP:(TNPShowGroupFrameInputForm *)TNP
                                  succeed:(void(^)(NSDictionary *))succeed
                                  failure:(void(^)(NSError *))failure;
/** 获取群组管理面列表接口
 参数说明：
 //描述:时间戳 类型：整型 取值范围：大于0的整数
 
 private String version;
 
 //描述:群组FeedId
 
 private String toFeedId;
 
 */
- (void)obtainGroupLFWithTNP:(TNPShowGroupFrameInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                  failure:(void(^)(NSError *))failure;

/** 获取推荐群组（兴趣群组）接口
 参数说明：
 
 //描述:用户Id 类型：Long
 
 private String userId;
 
 //当前页(第一页是1) 类型：Integer (大于等于1的整数)
 
 private String currentPage;
 
 // 每页显示数量 类型：Integer（默认传20）
 
 private String pageSize;
 
 */
- (void)obtainInterestGroupsWithTNP:(InterestGroupsInputForm *)TNP
                     succeed:(void(^)(NSDictionary *))succeed
                     failure:(void(^)(NSError *))failure;

/** 获取周边群组（兴趣群组）接口
 参数说明：
 
 //描述:用户Id 类型：Long
 
 private String userId;
 
 //当前页(第一页是1) 类型：Integer (大于等于1的整数)
 
 private String currentPage;
 
 // 每页显示数量 类型：Integer（默认传20）
 
 private String pageSize;
 
 //用户地理位置(y,x) 类型：String
 
 private String latilongitude;
 
 */
- (void)obtainSurroundingGroupsWithTNP:(InterestGroupsInputForm *)TNP
                            succeed:(void(^)(NSDictionary *))succeed
                            failure:(void(^)(NSError *))failure;

/** 根据groupid获取群组id的接口
 参数说明：
 
 //描述:群聊Id 类型：Long
 
 private String groupChatId;
 
 */
- (void)obtianGroupIdByGroupChatIdWithTNP:(TNPGroupObtianGroupIdByGroupChatIdInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;

/** 获取群组背景图接口
 无
 */
- (void)obtainGroupBackgroundSucceed:(void(^)(NSArray *))succeed
                                      failure:(void(^)(NSError *))failure;

/** 根据群组feedId列表获取群组人数列表
 参数说明：
 
 //描述：活动feedId列表 类型： List 格式：g_111,g_222,g_333
 private List<String> feedIdList;
 
 //描述：查询标识 类型：Integer 取值范围：1, 查询群组id对应群组人数list 2，查询群组id对应群聊id列表
 private String queryType;
 
 */
- (void)getGroupUserFeedIdsWithCountsWithTNP:(TNPGroupFeedListFrom *)TNP
                                  succeed:(void(^)(NSDictionary *))succeed
                                  failure:(void(^)(NSError *))failure;

/** 申请邀请群组成员
 参数说明：
 private String userId;//描述:用户的id 类型：整型 取值范围：大于0的整数
 private String cardFeedId;//描述：名片的id 类型：长整型 取值范围：大于0的整数
 private String feedId;//描述：群组的id 类型：长整型 取值范围：大于0的整数
 private String groupMemberFeedId;//描述:邀请成员id串 类型：字符型 取值范围：字符型 格式为：名片Feedid！名片Feedid 如c_1!o_2
 
 */
- (void)groupApplyInviteMemberWithTNP:(TNPGroupInputForm *)TNP
                                     succeed:(void(^)())succeed
                                     failure:(void(^)(NSError *))failure;

/** 审核是否接受邀请加入群组
 参数说明：
 private String cardFeedId;//描述：邀请者的名片feedId
 private String isDel ;//描述:是否删除 类型：整型 取值范围：1、同意 0、拒绝
 private String feedId;//描述：群组的FeedId
 private String groupMemberFeedId;//描述:被邀请者（审核者）的cardFeedId
 
 */
- (void)groupVerifyInviteMemberWithTNP:(TNPGroupInputForm *)TNP
                              succeed:(void(^)())succeed
                              failure:(void(^)(NSError *))failure;

/** 获取默认推荐群组列表
 参数说明：
 //描述：获取推荐列表的类型  类型：Integer  说明：1:通讯录的推荐 2:周边的推荐
 
 private String defaultRecomType;
 
 */
- (void)queryDefaultRecommendGroupListNewWithTNP:(TNPGroupRecommendFeedForm *)TNP
                               succeed:(void(^)(NSArray *))succeed
                               failure:(void(^)(NSError *))failure;

/** 获取群组传播分类
 参数说明：
 //描述：传播分类类型  类型：Integer  说明： 2:群组
 
 private String type;
 
 */
- (void)obtainGroupSpreadCategoryWithTNP:(TNPGroupSpreadCategoryInputForm *)TNP
                                         succeed:(void(^)(NSDictionary *))succeed
                                         failure:(void(^)(NSError *))failure;

/** 验证 群组推荐关系 接口
 参数说明：
 //群组feedId 类型:String
 
 private String feedId
 
 //验证推荐关系方的feedId   如 群组feedID 或者 名片feedId  类型 String
 
 private String recomFeedId
 
 */
- (void)checkGroupRecomRelationWithTNP:(TNPGroupRecommendFeedInputForm *)TNP
                                 succeed:(void(^)(NSString *))succeed
                                 failure:(void(^)(NSError *))failure;

/** 提交业委会审核申请接口
 参数说明：
 //描述：业委会名称 类型：String
 private String committeeName;
 //描述：门户名片FeedId 类型：String
 private String feedId;
 //描述：名片FeedID 类型：String
 private String cardFeedId;
 //描述：创建业委会用户ID 类型：Long
 private String userId;
 //描述：推广语 类型：String
 private String promLan;
 //描述：业委会简介 类型：String
 private String committeeDesc;
 //描述：业委会logo 类型：String
 private String committeeLogo;
 //描述：状态：1:待审核 2:审核通过 3：审核拒绝 类型：Integer
 private String status;
 //描述： 批文照片 类型：String
 private String approvalPic;
 //描述：身份证照片正面 类型：String
 private String idPicFront;
 //描述：身份证照片背面 类型：String
 private String idPicBack;
 */
- (void)createOwnersCommitteeCertifiedWithTNP:(TNPOwnersCommitteeCertifiedInputForm  *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;

/** 查询业委会审核信息接口
 参数说明：
 //描述：门户名片FeedId 类型：String
 private String feedId;
 */
- (void)getOwnersCommitteeCertifiedWithTNP:(TNPOwnersCommitteeCertifiedInputForm  *)TNP
                                      succeed:(void(^)(NSArray *))succeed
                                      failure:(void(^)(NSError *))failure;
@end
