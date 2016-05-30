//
//  ServiceRequest+Conversation.h
//  ServiceLibrary
//
//  Created by ZhuBruce on 15-5-15.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import "ServiceRequest.h"

@interface ServiceRequest (Conversation)

/**
 获取联系人(废弃)
 
 所需参数：
 
 private Long userId;//用户id(必传)
 
 private Long lastUpdateTime;//最后更新时间
 
 返回值TNP：TNPContactList
 
 - (void)obtainContactsWithTNP:(TNPContactInputForm*)TNP
 succeed:(void (^)(NSDictionary *))succeed
 failure:(void (^)(NSError *))failure;
 */

/**
 获取未处理的好友请求
 
 返回值TNP：List<TNPContact>
 */
- (void)obtainAllNewFriendByUserIdWithTNP:(TNPUserVerfiyInfo*)TNP
                                  succeed:(void (^)(NSArray *))succeed
                                  failure:(void (^)(NSError *))failure;

/**
 请求添加好友
 
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendFeedId; //好友feedId(必传)
 
 private Integer fromWhere;//来源 1 手机通讯录 2 群聊 3 查找 4 推荐 5 扫一扫 等(必传)
 
 private String addComment;//申请添加好友说明
 
 返回值TNP：TNPAddFriend
 
 */
- (void)addFriendWithTNP:(TNPLinkUpInputForm*)TNP
                 succeed:(void (^)(NSDictionary *))succeed
                 failure:(void (^)(NSError *))failure;

/**
 接受好友请求
 
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendFeedId; //好友feedId(必传)
 */
- (void)acceptFriendWithTNP:(TNPLinkUpInputForm*)TNP
                    succeed:(void (^)())succeed
                    failure:(void (^)(NSError *))failure;

/**
 拒绝好友请求
 
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendFeedId; //好友feedId(必传)
 */
- (void)refuseFriendWithTNP:(TNPLinkUpInputForm*)TNP
                    succeed:(void (^)())succeed
                    failure:(void (^)(NSError *))failure;

/**
 删除好友
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendFeedId; //好友feedId(必传)
 */
- (void)deleteFriendWithTNP:(TNPLinkUpInputForm*)TNP
                    succeed:(void (^)())succeed
                    failure:(void (^)(NSError *))failure;

/**
 修改好友备注
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendFeedId; //好友feedId(必传)
 
 private String remarkName;//好友备注名
 
 返回值TNP：TNPPinyin
 */
- (void)updateRemarkNameWithTNP:(TNPLinkUpInputForm*)TNP
                        succeed:(void (^)(NSDictionary*))succeed
                        failure:(void (^)(NSError *))failure;

/**
 设置VIP
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendFeedId; //好友feedId(必传)
 */
- (void)configVipWithTNP:(TNPLinkUpInputForm*)TNP
                 succeed:(void (^)())succeed
                 failure:(void (^)(NSError *))failure;

/**
 取消VIP
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendFeedId; //好友feedId(必传)
 */
- (void)cancelVipWithTNP:(TNPLinkUpInputForm*)TNP
                 succeed:(void (^)())succeed
                 failure:(void (^)(NSError *))failure;

/**
 设置黑名单
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendFeedId; //好友feedId(必传)
 */
- (void)configBlackListWithTNP:(TNPLinkUpInputForm*)TNP
                       succeed:(void (^)())succeed
                       failure:(void (^)(NSError *))failure;

/**
 取消黑名单
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendFeedId; //好友feedId(必传)
 */
- (void)cancelBlackListWithTNP:(TNPLinkUpInputForm*)TNP
                       succeed:(void (^)())succeed
                       failure:(void (^)(NSError *))failure;

/**
 来自通讯录的好友添加
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendmobile; //好友手机号(必传)
 
 private String mobileNickname//单个的手机号对应的保存姓名
 
 private String addComment;//申请添加好友说明
 */
- (void)addFriendToUserWithTNP:(TNPLinkUpInputForm*)TNP
                       succeed:(void (^)(NSDictionary*))succeed
                       failure:(void (^)(NSError *))failure;

/**
 接受来自通讯录的好友请求
 所需参数：
 
 private String feedId;//feedId(必传)
 
 private String friendFeedId; //好友feedId(必传)
 
 private Long friendmobile;//好友手机
 */
- (void)acceptFriendFromUserWithTNP:(TNPLinkUpInputForm*)TNP
                            succeed:(void (^)())succeed
                            failure:(void (^)(NSError *))failure;

/**
 创建群聊(已废弃)
 所需参数：
 
 private String groupName;//群聊名称(必传)
 private Long userId;//我的用户id(必传)
 private Long cardId;//我的名片id(必传)
 private Integer cardType;//名片类型(必传)
 private String cardIds;//多个名片id
 private String cardTypes;//名片类型列表
 private String userIds;//多个用户id
 */
- (void)createGroupChatWithTNP:(TNPGroupChatInputForm*)TNP
                       succeed:(void (^)(NSDictionary*))succeed
                       failure:(void (^)(NSError *))failure
    NS_DEPRECATED_IOS(2_0, 2_0, "Use -createGroupChatForFeed:succeed:failure:");

/**
 更新群聊信息
 所需参数：
 
 private Long groupId;//群聊id(必传)
 
 private String groupName;//群聊名称
 
 private Long userId;  //我的用户id（必传）
 */
- (void)updateGroupChatWithTNP:(TNPGroupChatInputForm*)TNP
                       succeed:(void (^)())succeed
                       failure:(void (^)(NSError *))failure;

/**
 解散群聊
 所需参数：
 
 private Long userId;//我的用户id
 
 private Long groupId;//群聊id(必传)
 */
- (void)deleteGroupChatWithTNP:(TNPGroupChatInputForm*)TNP
                       succeed:(void (^)())succeed
                       failure:(void (^)(NSError *))failure;

/**
 获取群聊信息(已废弃)
 所需参数：
 
 private Long groupId;//群聊id(必传)
 */
- (void)obtainGroupChatInfoByIdWithTNP:(TNPGroupChatInputForm*)TNP
                               succeed:(void (^)(NSDictionary*))succeed
                               failure:(void (^)(NSError *))failure NS_DEPRECATED_IOS(2_0, 2_0, "Use -obtainGroupChatInfoByIdForFeed:succeed:failure:");

/**
 批量添加群成员(已废弃)
 所需参数：
 
 private Long groupId;//群聊id(必传)
 
 private String cardIds;//多个名片id(必传)
 private String cardTypes;//名片类型列表(必传)
 private String userIds;//多个用户id(必传)
 */
- (void)addGroupChatMembersWithTNP:(TNPGroupChatInputForm*)TNP
                           succeed:(void (^)())succeed
                           failure:(void (^)(NSError *))failure NS_DEPRECATED_IOS(2_0, 2_0, "Use -addGroupChatMembersForFeed:succeed:failure:");

/**
 批量移除群成员
 所需参数：
 
 private Long groupId;//群聊id(必传)
 
 private String feedId;(当前feedId)（必传）
 
 NSArray* joinFeedId//参与者feedid
 */
- (void)removeGroupChatMembersWithTNP:(TNPGroupChatInputForm*)TNP
                              succeed:(void (^)())succeed
                              failure:(void (^)(NSError *))failure;


/**
 加入聊天室（新）
 所需参数：
 
 private String chatRoomId;//活动或群组feedId(必传)
 
 private String feedId;(加入者feedId)（必传）
 
 private String creatorFeedId(必传)（活动或群组创建者feedId）
 */
- (void)enterChatRoomWithTNP:(TNPChatRoomNewInputForm*)TNP
                     succeed:(void (^)(NSDictionary *))succeed
                     failure:(void (^)(NSError *))failure;


/**
 退出聊天室（新）
 所需参数：
 
 private String chatRoomId;//活动或群组feedId(必传)
 
 
 
 private String feedId;(退出者feedId)（必传）
 */
- (void)exitGroupChatRoomWithTNP:(TNPChatRoomNewInputForm*)TNP
                         succeed:(void (^)())succeed
                         failure:(void (^)(NSError *))failure;

/**
 退出群聊(已废弃)
 所需参数：
 
 private Long userId;//我的用户id
 
 private Long groupId;//群聊id(必传)
 
 private Long cardId;//我的名片id(必传)
 private Integer cardType;//名片类型(必传)
 */
- (void)quitGroupChatWithTNP:(TNPGroupChatInputForm*)TNP
                     succeed:(void (^)())succeed
                     failure:(void (^)(NSError *))failure NS_DEPRECATED_IOS(2_0, 2_0, "Use -quitFeedGroupChat:succeed:failure:");

/**
 获取群聊下成员(已废弃)
 所需参数：
 
 private Long groupId;//群聊id(必传)
 */
- (void)obtainMembersByGroupChatIdWithTNP:(TNPGroupChatInputForm*)TNP
                                  succeed:(void (^)(NSDictionary*))succeed
                                  failure:(void (^)(NSError *))failure NS_DEPRECATED_IOS(2_0, 2_0, "Use -obtainFeedMembersByGroupChatId:succeed:failure:");

/**
 获取用户已加入的群聊(已废弃)
 所需参数：
 
 private Long userId;//用户id(必传)
 
 private Long lastUpdateTime;//最近更新时间
 */
- (void)obtainGroupChatsByUserIdWithTNP:(TNPGroupChatInputForm*)TNP
                                succeed:(void (^)(NSDictionary *))succeed
                                failure:(void (^)(NSError *))failure NS_DEPRECATED_IOS(2_0, 2_0, "Use -obtainFeedGroupChatsByUserId:succeed:failure:");

/**
 添加话题
 所需参数：
 
 private Long groupId;//群聊ID
 private String topicName;//话题名称
 */
- (void)addGroupChatTopicWithTNP:(TNPGroupTopicInputForm*)TNP
                         succeed:(void (^)(NSDictionary*))succeed
                         failure:(void (^)(NSError *))failure;

/**
 获取群聊下话题
 所需参数：
 
 private Long groupId;//群聊ID
 private Long lastUpdateTime;//最近更新时间
 */
- (void)obtainTopicsByGroupChatIdWithTNP:(TNPGroupTopicInputForm*)TNP
                                 succeed:(void (^)(NSDictionary*))succeed
                                 failure:(void (^)(NSError *))failure;

/**
 获取名片下分享的联系人
 所需参数：
 
 private Long cardId;//名片id(必传)
 
 private Long friendCardId;//好友名片id(必传)
 */
- (void)obtainSharedContactsByCardIdWithTNP:(TNPShareFriendInputForm*)TNP
                                    succeed:(void (^)(NSArray*))succeed
                                    failure:(void (^)(NSError *))failure;

/**
 分享通讯录好友(废弃：15/10/12)
 所需参数：
 
 private String userId;//用户id(必传)
 
 private String cardId;//名片id(必传)
 
 private String nikename;//昵称(必传)
 
 private List<Long> friendCardIdList;//好友名片id集合(必传)
 
 private List<Long> friendUserIdList;//好友用户id集合(必传)
 */
- (void)shareContactsWithTNP:(TNPShareFriendInputForm*)TNP
                     succeed:(void (^)())succeed
                     failure:(void (^)(NSError *))failure;

/**
 投诉聊天
 所需参数：
 
 private String cardId;//发起投诉者名片ID(必传)
 private String complaintCause;//投诉原因(必传)
 private String beComplainantType;//被投诉体类型(必传)
 private String complaintedCardId;//被投诉名片id(投诉单聊时必传)
 private String complaintedUserId;//被投诉用户id(投诉单聊时必传)
 private String complaintedGroupId;//被投诉群id(投诉群聊时必传)
 private String content;//投诉内容 约定为JsonArray(必传)
 
 参数解释:
 
 cardId：发起投诉者(名片ID)
 
 complaintCause：投诉原因
 
 色情:sex;
 
 广告:ad;
 
 欺诈:lie;
 
 侮辱:insult
 
 政治:politics
 
 beComplainantType：被投诉体类型：
 
 个人:single;
 
 群聊:group;
 
 个人投诉时  complaintedCardId：被投诉名片id,complaintedUserId：被投诉用户id
 
 群聊投诉时 complaintedGroupId：被投诉群聊id
 
 
 
 content：投诉消息内容 约定为jsonArray
 
 ---------------------------------------------------------------------
 
 消息发送者:sendid (名片ID)
 
 消息发送时间：timestamp (单位：秒)
 
 消息类型：msgtype
 
 文本:text;
 
 语音:voice;
 
 图片image;
 
 名片:card;
 
 地理位置:location;
 
 收藏:collection;
 
 常用资讯:information;
 
 消息内容：msgbody
 
 文本:文本内容;
 
 语音:语音url;
 
 图片:图片url;
 
 名片:名片ID;
 
 地理位置:图片url;
 
 收藏:收藏ID;
 
 常用资讯:文本内容
 
 话题:topic:
 
 群聊的时候可能会有话题,
 
 单聊无话题
 */
- (void)complaintChatWithTNP:(TNPComplaintChatInputForm*)TNP
                     succeed:(void (^)())succeed
                     failure:(void (^)(NSError *))failure;

/**
 读取沟通
 参数TNP：TNPUserVerfiyInfo
 */
- (void)readCommunicationCacheWithTNP:(TNPUserVerfiyInfo*)TNP
                              succeed:(void (^)(NSArray*))succeed
                              failure:(void (^)(NSError *))failure;

/**
 读取消息动态
 参数TNP：TNPUserVerfiyInfo
 */
- (void)readNoticeCacheWithTNP:(TNPUserVerfiyInfo*)TNP
                       succeed:(void (^)(NSArray*))succeed
                       failure:(void (^)(NSError *))failure;

/**
 沟通单聊/群聊接口
 private Long fromUserId; //发送方用户id   (必传)
 
 private Long fromCardId; //发送方名片ID  （必传）
 
 private String fromCardName; //发送方名片名称（必传）
 
 private Long receiveUserId;              //接收者userId (必传)
 
 private Long receiverId; //接收者id (单聊传入接收者cardId,群聊传入groupId)  （必传）
 
 private String receiverName; //接收者名称（必传）
 
 private String msgType; //消息类型（必传）
 
 private Integer msgFlag; //单聊/群聊标志位 0 ：单聊 1：群聊（必传）
 
 private String content; //消息体内容（必传）
 */
- (void)chatTransmissionWithTNP:(TNPChatTransListInputForm*)TNP
                        succeed:(void (^)())succeed
                        failure:(void (^)(NSError *))failure;

/**
 获取联系人feed接口
 参数TNP：无
 */
- (void)obtainContactTNPFeedsSucceed:(void (^)(NSArray *))succeed
                             failure:(void (^)(NSError *))failure;

/**
 获取名片下联系人feed
 其中必填参数为：
 private String feedId;//feedId(必传)
 */
- (void)obtainContactTNPFeedsByCardIdWithTNP:(TNPLinkUpInputForm *)TNP
                                     succeed:(void (^)(NSArray *))succeed
                                     failure:(void (^)(NSError *))failure;


/**获取名片下联系人
 所需参数：
 
 private Long cardId;//名片id(必传)
 
 private Long lastUpdateTime;//最后更新时间
 */
- (void)obtainContactsByCardIdWithTNP:(TNPContactInputForm *)TNP
                              succeed:(void (^)(NSDictionary *))succeed
                              failure:(void (^)(NSError *))failure;



/**
 读取通知类型
 参数TNP：无
 */
- (void)readNoticeTypeSucceed:(void (^)(NSDictionary *))succeed
                      failure:(void (^)(NSError *))failure;


/**来自通讯录的批量好友添加（新feed）
 所需参数：
 
 private String feedId;//feedId(必传)
 
 Set<String> friendMobileSet; //好友手机号集合
 
 private Map<String,String> friendMobileNick//描述：好友手机号码对应的保存姓名
 
 private String addComment;//申请添加好友说明
 */
- (void)batchFriendToUserWithTNP:(TNPLinkUpInputForm *)TNP
                         succeed:(void (^)(NSArray *))succeed
                         failure:(void (^)(NSError *))failure;

//创建群聊_Feed
//所需参数：
//
//private String groupName;//群聊名称(必传)
//
//private Long userId; //我的userId(必传)
//
//private String feedId;//我的名片feedId(必传)
//
//NSArray* joinFeedId//参与者feedid
- (void)createGroupChatForFeedWithTNP:(TNPGroupChatInputForm *)TNP
                              succeed:(void(^)(NSDictionary *))succeed
                              failure:(void(^)(NSError *))failure;

//批量添加群成员_feed
//所需参数：
//
//private Long groupId;//群聊id(必传)
//
//private Long userId; //用户id（必传）
//
////NSArray* joinFeedId//参与者feedid
//
//private String invitSeource; // 区分加群来源（非必须）
- (void)addGroupChatMembersForFeedWithTNP:(TNPGroupChatInputForm *)TNP
                                  succeed:(void(^)())succeed
                                  failure:(void(^)(NSError *))failure;

//获取群聊下成员_feed
//所需参数：
//
//private Long groupId;//群聊id(必传)
//
//private Long lastUpdateTime;//最后更新时间
- (void)obtainFeedMembersByGroupChatIdWithTNP:(TNPGroupChatInputForm *)TNP
                                      succeed:(void(^)(NSDictionary *))succeed
                                      failure:(void(^)(NSError *))failure;
//获取用户已加入的群聊_feed
//所需参数：
//
//private Long userId;//用户id(必传)
//
//private Long lastUpdateTime;//最近更新时间
- (void)obtainFeedGroupChatsByUserIdWithTNP:(TNPGroupChatInputForm *)TNP
                                    succeed:(void(^)(NSDictionary *))succeed
                                    failure:(void(^)(NSError *))failure;
//退出群聊_feed
//所需参数：
//
//private Long userId;//我的用户id（必传）
//
//private Long groupId;//群聊id(必传)
//
//private String feedId;//我的名片id(必传)
- (void)quitFeedGroupChatWithTNP:(TNPGroupChatInputForm *)TNP
                         succeed:(void(^)())succeed
                         failure:(void(^)(NSError *))failure;

//获取群聊信息
//所需参数：
//
//private Long groupId;//群聊id(必传)
//
//private Long lastUpdateTime;//最后更新时间
- (void)obtainGroupChatInfoByIdForFeedWithTNP:(TNPGroupChatInputForm *)TNP
                                      succeed:(void(^)(NSDictionary *))succeed
                                      failure:(void(^)(NSError *))failure;
/*
 -----------------------------------------------聊天室接口-------------------------------------------
 */
//获取群聊信息
//所需参数：
//
//被操作的聊天室ID
//
//字符串 roomId;
- (void)obtainChatRoomMemeberListWithTNP:(TNPChatRoomInputForm *)TNP
                                 succeed:(void(^)(NSArray *))succeed
                                 failure:(void(^)(NSError *))failure;
//进入聊天室
//所需参数：
//操作feedId
//
//字符串 feedId;
//
//被操作的聊天室ID
//
//字符串 roomId;
//
//操作者的UserId
//
//长整型 userId;
- (void)joinChatRoomWithTNP:(TNPChatRoomInputForm *)TNP
                    succeed:(void(^)())succeed
                    failure:(void(^)(NSError *))failure;
//退出聊天室
//所需参数：
//操作feedId
//
//字符串 feedId;
//
//被操作的聊天室ID
//
//字符串 roomId;
//
//操作者的UserId
//
//长整型 userId;
- (void)exitChatRoomWithTNP:(TNPChatRoomInputForm *)TNP
                    succeed:(void(^)())succeed
                    failure:(void(^)(NSError *))failure;

/*
 -----------------------------------------------通讯录标签相关的接口-------------------------------------------
 */
//添加用户朋友标签
//所需参数：
//
// 标签名 ：tagNames （必填） 例如：以“，”分割    例如：朋友，好友,.....
- (void)addFriendTagsWithTNP:(TNPFriendTagInputForm *)TNP
                     succeed:(void(^)(NSArray *))succeed
                     failure:(void(^)(NSError *))failure;

//修改用户朋友标签
//所需参数：
//
//标签名 ：tagName （必填）
//
//朋友标签Id： friendTagId（必填）
- (void)resetMyFriendWithTNP:(TNPFriendTagInputForm *)TNP
                     succeed:(void(^)())succeed
                     failure:(void(^)(NSError *))failure;

//删除用户朋友标签
//所需参数：
//
//朋友标签Id： friendTagId（必填）
- (void)deleteFriendTagWithTNP:(TNPFriendTagInputForm *)TNP
                       succeed:(void(^)())succeed
                       failure:(void(^)(NSError *))failure;

//通过用户id获取用户的所有朋友标签
//所需参数：
//
//增量查询参数 ：updateTime（必填）
- (void)obtainFriendTagsByUserIdWithTNP:(TNPFriendTagInputForm *)TNP
                                succeed:(void(^)(NSArray *))succeed
                                failure:(void(^)(NSError *))failure;

//通过用户id获取用户的所有朋友标签和关系
//所需参数：
//
//用户Id  ：userId （必填）
//
//增量查询参数 ：updateTime（必填）
- (void)obtainRelationsAndTagsWithTNP:(TNPFriendTagInputForm *)TNP
                              succeed:(void(^)(NSDictionary *))succeed
                              failure:(void(^)(NSError *))failure;

//通过friendTagId获取关系列表
//所需参数：
//
//朋友标签Id：friendTagId （必填）
- (void)obtainMembersInTagWithTNP:(TNPFriendTagInputForm *)TNP
                          succeed:(void(^)(NSArray *))succeed
                          failure:(void(^)(NSError *))failure;

//将一批朋友添加至同一分组
//所需参数：
//
//好友关系：List<String> feedIdRelationList (必填) egg: c_2,c_3, 以"，" 分割 */  格式feedId_friendFeedId
//
//朋友标Id：friendTagId （必填）
//
//标签名 ：tagName （friendTagId，tagName至少一个为空）
- (void)addNewMembersToTagWithTNP:(TNPFriendTagInputForm *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;

//将朋友添加到分组 必须是当前好友的所有分组
//所需参数：
//
//标签名称集合 ：List<String> tagNameList
//
//标签ID集合:List<Long> friendTagIdList
//
//自己的feed：feedId
//
//好友feed: friendFeedId
- (void)addFriendRelationToTagsWithTNP:(TNPFriendTagInputForm *)TNP
                               succeed:(void(^)(NSArray *))succeed
                               failure:(void(^)(NSError *))failure;

//删除标签关系
//所需参数：
//
//自己的feed：feedId （必填）
//
//好友feed: friendFeedId （必填）
//
//朋友标Id：friendTagId （必填）
- (void)deleteFriendTagRelationWithTNP:(TNPFriendTagInputForm *)TNP
                               succeed:(void(^)())succeed
                               failure:(void(^)(NSError *))failure;

//批量删除标签关系
//所需参数：
//
//自己的feed：feedId （必填）
//
//好友feed: friendFeedId （必填）
//
//朋友标Id：friendTagId （必填）
- (void)batchDeleteFriendTagRelationWithTNP:(TNPCommunicateBatchDeleteFriendTagRelationInputForm *)TNP
                               succeed:(void(^)())succeed
                               failure:(void(^)(NSError *))failure;

// --------------------------------------------------------前端调用群聊免打扰接口----------------------------------------//
/*群聊免打扰设置
 所需参数：
 private Long groupId; // 群聊ID
 private Long userId; // 用户ID
 private Integer disturbSwitch = 1; // 免打扰开关 [0：关闭] [1：打开（默认）]
 private Integer status = 1; // 逻辑删除标识 [0：不可用] [1：可用（默认）]
 */

- (void)setupGroupSetupWithTNP:(TNPGroupChatInputForm *)TNP
                       succeed:(void(^)())succeed
                       failure:(void(^)(NSError *))failure;


/*
 查询用户已加入的群聊
 */
- (void)obtainFeedGroupChatsByFeedIdsWithTNP:(TNPGroupChatInputForm *)TNP
                                     succeed:(void(^)(NSDictionary *))succeed
                                     failure:(void(^)(NSError *))failure;
@end
