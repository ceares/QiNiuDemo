//
//  ServiceRequest+FindRequest.h
//  ServiceLibrary
//
//  Created by SONGQG on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (FindRequest)

/***********************************发现************************************/

/** 条件搜索
 
 pageNumber；默认值是1  分页，从1开始
 
 objectType=xx     筛选搜索：不填是全部  1-个人名片，2-组织名片，3-员工名片，4-活动，5-群组等
 
 其中以下参数为必传参数：
 
 searchKey的可选值：
 
 全部: text
 
 轻链接查询key：searchString   （名片及组织时，对应的值为名片号及title，活动群组则为title）
 
 名片昵称: objectTitle
 
 名片号:objectNo
 
 手机号:phone
 
 地址:address
 
 职业:career
 
 兴趣:interest
 
 技能:skill
 
 车牌号:carNumber
 
 searchValue 对应的值
 
 */
- (void)findDiscoveryWithTNP:(TNPSearchInputForm *)TNP
                   succeed:(void(^)(NSDictionary *))succeed
                   failure:(void(^)(NSError *))failure;

/** 周边
 
 pageNumber=1  分页，从1开始
 
 objectType=xx     筛选搜索：不填是全部  1-个人名片，2-组织名片，3-员工名片，4-活动，5-群组等
 
 text;   文本搜索
 
 objectTitle：搜索关键字    （周边首页搜索条件）
 
 其中以下参数为必传参数：
 
 latilongitude=y,x  坐标位置，yx坐标以逗号分隔  y小于90        x小于180       y是纬度、X是经度
 
 searchCode: 当值为activity时， 则搜索活动和群组   当为personStaff 时，搜索个人名片和员工名片     single  ：当为此值时，需要传objectType，表示单种类型搜索，  其他情况不需要
 
 */

- (void)findSurroundWithTNP:(TNPSearchInputForm *)TNP
                    succeed:(void(^)(NSDictionary *))succeed
                    failure:(void(^)(NSError *))failure;

/** 分类
 
 pageNumber=1  分页，从1开始
 
 activityBeginDateString  搜索活动的时可指定活动开始时间 yyyy-MM-dd
 
 其中以下参数为必传参数：（至少填一个）
 
 basicCategory=xx  大分类
 
 basicSubCategoryString=xxx,xxx  子分类 //字符串类型，以逗号分隔多个选择
 
 */

- (void)findSortWithTNP:(TNPSearchInputForm *)TNP
                succeed:(void(^)(NSDictionary *))succeed
                failure:(void(^)(NSError *))failure;

/** 周边搜索新接口（此接口不能搜索到自己的名片，已过滤，当首页搜索时调用此接口）
 
 latilongitude	经纬度	String	y,x  坐标位置，yx坐标以逗号分隔  y小于90        x小于180       y是纬度、X是经度	不可为空
 
 text	搜索关键字	String
 
 objectType	搜索类型	String	1-个人名片，2-组织名片，3-员工名片，4-活动，5-群组等，不传递表示搜索全部	可为空
 
 basicCategory	传播分类 一级	List<String>	 	可为空
 
 basicSubCategoryString  传播分类 二级	List<String>	按照逗号分隔	可为空
 
 sex	性别	int	 	可为空
 
 pageNumber	页数	int	 	可为空
 
 searchCode	搜索码	String
 当值为activity时， 则搜索活动和群组   当为personStaff 时，搜索个人名片和员工名片     single  ：当为此值时，需要传objectType，表示单种类型搜索，  其他情况不需要
 
 当为service时，表示搜索服务，objectType不用传(如果basicCategory或者basicSubCategoryString其中有一个不为空时，则大分类和子分类赋值，全为空则不赋值)
 
 若想要搜索全部，searchCode和objectType都不用传，传latilongitude坐标位置
 不可为空
 */

- (void)surroundSearchWithTNP:(TNPSearchInputForm *)TNP
                succeed:(void(^)(NSDictionary *))succeed
                failure:(void(^)(NSError *))failure;


/***********************************新朋友************************************/


/** 增量更新并获取推荐的好友
 
 手机号列表
 
 private List<String> mobilePhoneList;
 */

- (void)matchFriendsWithTNP:(TNPNewFriendInputForm *)TNP
                        succeed:(void(^)(NSArray *))succeed
                        failure:(void(^)(NSError *))failure;

/** 根据userid获取服务器端通讯录副本
 必填参数
 
 userId
 */
- (void)getAllMobilePhoneAddressWithTNP:(TNPNewFriendInputForm *)TNP
                                    succeed:(void(^)(NSArray *))succeed
                                    failure:(void(^)(NSError *))failure;
/** 添加手机通讯录
 
 其中以下参数为必传参数：
 
friendFeedId;   用户好用名片FeedId
 
 */
- (void)addContactsWithTNP:(TNPNewFriendInputForm *)TNP
                       succeed:(void(^)())succeed
                       failure:(void(^)(NSError *))failure;


/** 获取手机通讯录列表
 */

- (void)getContactsListWithTNP:(TNPNewFriendInputForm *)TNP
                           succeed:(void(^)(NSArray *))succeed
                           failure:(void(^)(NSError *))failure;

/** 增量上传手机号码更新并获取该手机号码是否装toon的状态
 
 List<String> mobilePhoneList ： 手机号列表  必传
 */

- (void)matchCurrentFriendsWithTNP:(TNPNewFriendInputForm *)TNP
                       succeed:(void(^)(NSArray *))succeed
                       failure:(void(^)(NSError *))failure;

/** 更新手机号码为已匹配状态
 
 List<String> mobilePhoneList ： 手机号列表  必传
 */

- (void)updateMatchStatusWithTNP:(TNPNewFriendInputForm *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;

/** 批量增加订阅(3.0废弃)
 
 其中以下参数为必传参数：
 
 type; //订阅类型 1 集锦 2 频道
 
 objIdStr;//对应集锦或者频道的id ,使用逗号分隔
 
 */

- (void)addSubscribeBatchWithTNP:(TNPSubscribeInputForm *)TNP
                             succeed:(void(^)())succeed
                             failure:(void(^)(NSError *))failure;

/** 删除订阅(3.0废弃)
 
 其中以下参数为必传参数：
 
 subscribeId;// 订阅实体的id
 
 */

- (void)deleteSubscribeWithTNP:(TNPSubscribeInputForm *)TNP
                           succeed:(void(^)())succeed
                           failure:(void(^)(NSError *))failure;


/** 批量删除订阅(3.0废弃)
 
 其中以下参数为必传参数：
 
 objIdStr;//对应集锦或者频道的id ,使用逗号分隔
 
 */
- (void)deleteSubscribeBatchWithTNP:(TNPSubscribeInputForm *)TNP
                       succeed:(void(^)())succeed
                       failure:(void(^)(NSError *))failure;

/** 获取用户的订阅(3.0废弃)
 userId：默认参数  在bizKey里再传一遍
 updateTime;//如果updateTime不为空则为增量查询  long型长串
 
 */

- (void)getMySubscribeWithTNP:(TNPSubscribeInputForm *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;
/** 搜索订阅数据(3.0废弃)
 
 activityBeginDateString;//开始时间超过现在的活动就不查询了  格式yyyy-MM-dd（不指定默认当前服务器时间）
 
 pageNumber;//页码(默认第一页)
 
 其中以下参数为必传参数：
 
 basicSubCategoryString;//频道id 格式为100,101
 
 */

- (void)searchSubscribeWithTNP:(TNPSubscribeInputForm *)TNP
                           succeed:(void(^)(NSDictionary *))succeed
                           failure:(void(^)(NSError *))failure;
/** 获取推荐的广告(3.0废弃)
 */
- (void)getAdSucceed:(void(^)(NSArray *))succeed
                 failure:(void(^)(NSError *))failure;


/** 获取推荐的广告对应的集锦(3.0废弃)
 
 objId;对应的广告的recommendId : 推荐id
 
 */
- (void)getSetByAdIdWithTNP:(TNPSubscribeInputForm *)TNP
                     succeed:(void(^)(NSArray *))succeed
                     failure:(void(^)(NSError *))failure;

/** 获取推荐的集锦(3.0废弃)
 
 updateTime;//如果updateTime不为空则为增量查询  long型长串
 */
- (void)getCollectionWithTNP:(TNPSubscribeInputForm *)TNP
                     succeed:(void(^)(NSArray *))succeed
                     failure:(void(^)(NSError *))failure;

/** 获取推荐的集锦对应的频道(3.0废弃)
 
 objId;对应集锦的setId;集锦id
 
 */
- (void)getChannelBySetIdWithTNP:(TNPSubscribeInputForm *)TNP
                    succeed:(void(^)(NSArray *))succeed
                    failure:(void(^)(NSError *))failure;

/***********************************订阅************************************/


/** 获取用户的订阅
 
 userId：默认参数  在bizKey里再传一遍
 
 updateTime;//如果updateTime不为空则为增量查询  long型长串（选填）
 
 */
- (void)obtainUserSubscribeWithTNP:(TNPUserSubscribeInputForm *)TNP
                         succeed:(void(^)(NSArray *))succeed
                         failure:(void(^)(NSError *))failure;

/** 获得可以订阅的应用列表
 
 */
- (void)obtainSubscribeAppListSucceed:(void(^)(NSDictionary *))succeed
                           failure:(void(^)(NSError *))failure;

@end
