//
//  ServiceRequest+OrgRequest.h
//  ServiceLibrary
//
//  Created by guojianpo on 15/5/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//
#import "ServiceRequest.h"
#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (OrgRequest)
/** 创建组织接口
 
 TNP必填属性
*/
 /**
 * 显示名称
 */
//private String displayName;
/**
 * 推广语
 */
//private String introduction;



- (void)createOrgWithTNP:(TNPOrgCardInputForm *)TNP
                 succeed:(void(^)(NSDictionary *))succeed
                 failure:(void(^)(NSError *))failure;

/** 
 面查询接口
 
 TNP必填属性
 //被访问者feedId
 private String toFeedId;
 
 //访问者面类型 1、匿名面 2、好友面 3、自己
 private Integer aspectType;
 
 //时间戳（版本）
 private Long version;
 */
- (void)orgFrameWithTNP:(TNPFrameParamInputForm *)TNP
                 succeed:(void(^)(NSDictionary *))succeed
                failure:(void(^)(NSError *))failure;



/** 
 更新组织名片接口

 TNP必填属性
 
//组织名片feedId
private Long feedId;
*/
- (void)updateOrgWithTNP:(TNPOrgCardInputForm *)TNP
                 succeed:(void (^)(NSDictionary *))succeed
                 failure:(void (^)(NSError *))failure;

/**
 获取组织名片
 
 TNP必填属性
 private String feedId; 组织名片feedId

 */
- (void)obtainOrgWithTNP:(TNPOrgCardInputForm *)TNP
                succeed:(void(^)(NSDictionary *))succeed
                failure:(void(^)(NSError *))failure;

/**
 获取基本维度的组织树
 
 TNP必填属性
 //企业信息
 
 private TNPOrgContactsForm form;
 
 //描述：是否查询员工信息和员工节点关系标志  类型：int     取值： 0不查询，1只查询员工信息，2只查询员工节点关系，3都查询
 private String member;
 
 
 
 TNPOrgContactsForm 类参考以下附件：
 
 TNPOrgContactsForm .txt
 
 其中必传参数为：
 
 private String orgFeedId;//组织feedID
 */


- (void)obtainBaseDimOrgTreeWithTNP:(TNPOrgDimForm *)TNP
                 succeed:(void(^)(NSDictionary *))succeed
                 failure:(void(^)(NSError *))failure;

/**
 通过组织id获取当前组织的所有员工名片关系
 
 TNP必填属性
 private String orgFeedId;       // 组织feedId
 */
- (void)obtainMemNodeRelationsWithTNP:(TNPMemberNodeRelationInputForm *)TNP
                succeed:(void(^)(NSArray *))succeed
                failure:(void(^)(NSError *))failure;
/**
 通过组织树节点id获取该节点下的组织成员名片
 
 TNP必填属性
 private String orgFeedId;                      // 组织id
 private String nodeId;                   // 节点id
 */
- (void)obtainMemCardsByNodesWithTNP:(TNPMemberNodeRelationInputForm *)TNP
                                           succeed:(void(^)(NSArray *))succeed
                                           failure:(void(^)(NSError *))failure;

/**
 把成员添加到多个组织树节点(部门)
 
 TNP必填属性
 private String orgFeedId;                           //企业id
 private String  staffFeedId;                                // 成员id
 private List<String>  nodeIdList;                // 组织树节点id集合
 */

- (void)addMemberToNodesWithTNP:(TNPIdListRelationInputForm *)TNP
                                       succeed:(void(^)(NSDictionary *))succeed
                                       failure:(void(^)(NSError *))failure;

/**
 把成员从某个部门删除
 
 TNP必填属性
 private String orgFeedId;                      // 组织feedid
 private String staffFeedId;              // 员工feedid
 private String nodeId;                   // 节点id
 */

- (void)deleteMemberFromNodeWithTNP:(TNPMemberNodeRelationInputForm *)TNP
                                       succeed:(void(^)(NSDictionary *))succeed
                                       failure:(void(^)(NSError *))failure;

/**
 查询所有行业或者类别列表
 TNP必填属性
 */

- (void)obtainIndOrCatesWithTNP:(TNPOrgIndustryOrCategoryInputForm *)TNP
                                       succeed:(void(^)(NSDictionary *))succeed
                                       failure:(void(^)(NSError *))failure;

/**
 同意接收名片
 
 TNP必填属性
private String staffFeedId;组织成员名片feedId
private String orgFeedId; 组织feedId
 private String name; 姓名
 */

- (void)acceptReceiveCardWithTNP:(TNPStaffCardInputForm *)TNP
                                       succeed:(void(^)())succeed
                                       failure:(void(^)(NSError *))failure;
/**
 拒绝接受名片
 
 TNP必填属性
private String staffFeedId; 组织成员名片feedId
private String orgFeedId; 组织feedId
private String name; 姓名
 */

- (void)refuseReceiveCardWithTNP:(TNPStaffCardInputForm *)TNP
                                       succeed:(void(^)())succeed
                                       failure:(void(^)(NSError *))failure;

/**
 保存组织对外通讯录
 
 TNP必填属性
 //对外通讯录列表
 private List<String> staffFeedIdList;
 
 //组织feedId
 private String orgFeedId;
 */

- (void)saveExternalContactsWithTNP:(TNPOrgExternalContactsInfoForm *)TNP
                                       succeed:(void(^)())succeed
                                       failure:(void(^)(NSError *))failure;

/**
 查询对外通讯录
 
 TNP必填属性
private String orgFeedId;                   //组织feedID
 */

- (void)obtainExternalContactsWithTNP:(TNPOrgContactsForm *)TNP
                                       succeed:(void(^)(NSArray *))succeed
                                       failure:(void(^)(NSError *))failure;

/**
 删除组织对外通讯录
 
 TNP必填属性
 //对外通讯录列表
 private List<String> staffFeedIdList;
 
 //组织feedId
 private String orgFeedId;
 */

- (void)deleteExternalContactsWithTNP:(TNPOrgExternalContactsInfoForm *)TNP
                                       succeed:(void(^)())succeed
                                       failure:(void(^)(NSError *))failure;

/**
 获取企业列表
 
 // 描述：筛选条件
 
 private TNPCommonSearchDto commonSearchDto;
 
 //描述：分页    类型：Integer   取值：默认“1”
 
 private String pageNum = "1"
 
 // 描述：接口名称       取值：固定
 
 private final String appCode = "SearchCommonBusinessCard";
 
 // 描述：排序字段  取值：
 
 private String sorterField;
 */
- (void)obtainCompanyListWithTNP:(TNPCompanySearchForm *)TNP
                         succeed:(void(^)(NSArray *))succeed
                         failure:(void(^)(NSError *))failure;
/**
 获取用户所有组织名片简单信息(包括自己创建的，自己管理的和加入的)
 
 TNP必填属性
 */

- (void)obtainHomePageSucceed:(void(^)(NSArray *))succeed
                      failure:(void(^)(NSError *))failure;
/**
 通过多个Id查询组织成员简单信息列表
 
 TNP必填属性
private List<String> feedIdList;    // 员工feedid
 */

- (void)obtainSimpleMemCardsWithTNP:(TNPMemberCardIdList *)TNP
                                       succeed:(void(^)(NSArray *))succeed
                                       failure:(void(^)(NSError *))failure;

/**
 通过多个Id查询组织成员列表
 
 TNP必填属性
private List<String> feedIdList;    // 员工feedid
 */

- (void)obtainMemCardsByIdsWithTNP:(TNPMemberCardIdList *)TNP
                                       succeed:(void(^)(NSArray *))succeed
                                       failure:(void(^)(NSError *))failure;

/**
 发放员工名片
 
 private String staffFeedId;
 private String  userMobilePhone;
 
 private String orgFeedId;
 
 private String orgName;
 */

- (void)grantMemCardWithTNP:(TNPStaffCardInputForm *)TNP
                                       succeed:(void(^)())succeed
                                       failure:(void(^)(NSError *))failure;

/**
 收回员工名片
 
 TNP必填属性
 private String staffFeedId;
 private String orgFeedId;
 
 private String orgName;
 */

- (void)takeBackMemCardWithTNP:(TNPStaffCardInputForm *)TNP
                                       succeed:(void(^)())succeed
                                       failure:(void(^)(NSError *))failure;

/**
 通过组织获取组织成员名片信息模板字段(删除（时间：15.08.31）)
 
 TNP必填属性
private String orgFeedId;     //组织feedID


- (void)obtainMemCardFieldsWithTNP:(TNPOrgContactsForm *)TNP
                                       succeed:(void(^)(NSArray  *))succeed
                                       failure:(void(^)(NSError *))failure;
 */

/**
 添加组织成员名片信息模板字段(删除（时间：15.08.31）)
 
 TNP必填属性
private String feedId;
 
 private String displayName;
 
 private String viewType;


- (void)addMemCardFieldWithTNP:(TNPMemberCardField *)TNP
                                       succeed:(void(^)(NSDictionary  *))succeed
                                       failure:(void(^)(NSError *))failure;
 */

/**
 保存组织成员名片信息模板字段(删除（时间：15.08.31）)
 
 TNP必填属性
 
 //描述：组织成员名片信息集合
 
 private List<TNPMemberCardField> memberCardFieldList;
 
 其中 memberCardFieldList对象不能为空，TNPMemberCardField中的 feedId不能为空


- (void)saveMemCardFieldsWithTNP:(TNPMemberCardFieldList *)TNP
                                       succeed:(void(^)(NSArray *))succeed
                                       failure:(void(^)(NSError *))failure;
 */

/**
 删除组织名片信息模板字段(删除（时间：15.08.31）)
 
 TNP必填属性
 private String feedId;
 private String fieldId;


- (void)deleteMemCardFieldWithTNP:(TNPMemberCardField *)TNP
                                       succeed:(void(^)())succeed
                                       failure:(void(^)(NSError *))failure;
 */

/**
 更新组织名片信息模板字段(删除（时间：15.08.31）)
 
 TNP必填属性
 private String feedId;
 private String fieldId;


- (void)updateMemCardFieldWithTNP:(TNPMemberCardField *)TNP
                                       succeed:(void(^)())succeed
                                       failure:(void(^)(NSError *))failure;
 */


/**
 查询企业通讯录(管理员或者拥有者)
 
 TNP必填属性
 private String orgFeedId;
 
 返回TNP：List<TNPOrgMemberCard>
 */

- (void)obtainContactsByAdminWithTNP:(TNPOrgContactsForm *)TNP
                                       succeed:(void(^)(NSArray *))succeed
                                       failure:(void(^)(NSError *))failure;

/**
 查询企业通讯录（员工）
 
 TNP必填属性
 private String orgFeedId;
 private String staffFeedId;     //成员名片feedID
 */

- (void)obtainContactsByMemberWithTNP:(TNPOrgContactsForm *)TNP
                                       succeed:(void(^)(NSArray *))succeed
                                       failure:(void(^)(NSError *))failure;
/**
 通过组织名片id查询客户资源
 
 TNP必填属性
private String orgFeedId;     //组织feedID
 */

- (void)obtainCustomersWithTNP:(TNPOrgContactsForm *)TNP
                                       succeed:(void(^)(NSArray *))succeed
                                       failure:(void(^)(NSError *))failure;
/**
 员工查看企业共享的客户资源
 
 TNP必填属性
 private String staffFeedId;     //成员名片ID
 private String orgFeedId;     //组织ID
 */

- (void)obtainShareCustomersWithTNP:(TNPOrgContactsForm *)TNP
                                       succeed:(void(^)(NSArray *))succeed
                                       failure:(void(^)(NSError *))failure;
/**
 创建员工接口（）
 
 TNP必填属性
private String orgFeedId; 组织feedId
private String name; 姓名
*/

- (void)createStaffWithTNP:(TNPStaffCardInputForm *)TNP
                                       succeed:(void(^)(NSDictionary *))succeed
                                       failure:(void(^)(NSError *))failure NS_DEPRECATED_IOS(2_0, 2_0, "Use -createGroupChatForFeedWithTNP:succeed:failure:");


/**
 员工面查询接口
 
 TNP必填属性
 
 //员工feedId
 private String toFeedId;
 
 //访问者面类型 1、匿名面 2、好友面 3、自己
 private Integer aspectType;
 
 //时间戳（版本）
 private Long version;
 */

- (void)staffFrameWithTNP:(TNPFrameParamInputForm *)TNP
                                       succeed:(void(^)(NSDictionary *))succeed
                                       failure:(void(^)(NSError *))failure;

/**
 更新组织员工名片接口
 
 TNP必填属性
private String staffFeedId;   员工名片feedId
private String orgFeedId;   组织feedId
 */

- (void)updateStaffWithTNP:(TNPStaffCardInputForm *)TNP
                                       succeed:(void(^)(NSDictionary *))succeed
                                       failure:(void(^)(NSError *))failure;

/**
 获取组织员工名片
 
 TNP必填属性
private String staffFeedId; 员工名片feedId
 */

- (void)obtainStaffWithTNP:(TNPStaffCardInputForm *)TNP
                                       succeed:(void(^)(NSDictionary *))succeed
                                       failure:(void(^)(NSError *))failure;
/**
 通过userid获取组织，员工名片列表
 
 TNP必填属性
 */

- (void)obtainOrgAndStaffCardByUserIdSucceed:(void(^)(NSDictionary *))succeed
                                     failure:(void(^)(NSError *))failure;


/**
 添加组织树节点
 TNP所有属性必传
 
 feedId
 parentId
 name
 */
- (void)addOrgTreeNodeWithTNP:(TNPOrgTreeNode *)TNP
                   succeed:(void(^)(NSDictionary *))succeed
                   failure:(void(^)(NSError *))failure;
/**
 通过id查询树节点信息
 TNP所有属性必传
 */
- (void)getOrgTreeNodeByIdWithTNP:(TNPOrgTreeNode *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;
/**
 更新树节点信息
 TNP所有属性必传
 feedId
 parentId
 name
 nodeId
 */
- (void)updateOrgTreeNodeWithTNP:(TNPOrgTreeNode *)TNP
                          succeed:(void(^)(NSDictionary *))succeed
                          failure:(void(^)(NSError *))failure;

/**
 删除树节点信息
 
 TNP必传属性
 //描述：组织树节点id 类型：Long 取值范围：>0
//private String nodeId;

// 描述：组织id  类型：Long  取值范围：>0
//private String feedId;
 */
- (void)deleteOrgTreeNodeWithTNP:(TNPOrgTreeNode *)TNP
                         succeed:(void(^)(NSDictionary *))succeed
                         failure:(void(^)(NSError *))failure;

/**
 验证同一级别 组织树名称不能重复
 TNP必传属性
 name、feedId必传
 
 //返回报错，错误码为4005表示名称重复
 */
- (void)validateOrgTreeNodeNameWithTNP:(TNPOrgTreeNode *)TNP
                         succeed:(void(^)())succeed
                         failure:(void(^)(NSError *))failure;

/**
 通过父id获取某一维度下的所有子节点信息
 
 TNP必传属性
 //描述：父组织树节点id 根节点是-1  类型：Long  取值范围：>0
//private String parentId;
 
 // 描述：组织id  类型：Long  取值范围：>0
 //private String feedId;
 */
- (void)getOrgTreeNodesByParentIdWithTNP:(TNPOrgTreeNode *)TNP
                         succeed:(void(^)(NSArray *))succeed
                         failure:(void(^)(NSError *))failure;

/**
 批量获取组织树节点信息 objId组织id
 
 TNP必传属性
 private String orgFeedId;                           //企业feedid
 private List<String>  nodeIdList;                //组织树节点id集合
 */
- (void)getOrgTreeNodesByIdListWithTNP:(TNPIdListRelationInputForm *)TNP
                                 succeed:(void(^)(NSArray *))succeed
                                 failure:(void(^)(NSError *))failure;

/**把多个成员添加到组织树节点(部门)
 
 private String orgFeedId;                           //企业feedid
 private String  nodeId;                                // 组织树节点id
 private List<String>  staffFeedIdList;                // 成员feedid集合
 */


- (void)addMembersToNodeWithTNP:(TNPAddNodeInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/**生成二维码
 
 //描述：名片feedId
 //类型：String
 //取值：o_orgId,s_staffId
 private String feedId;
 */


- (void)generateQRCodeByOrgWithTNP:(TNPQRCodeParamInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/**获取组织名片简单信息
 
 其中以下参数为必传参数：

//组织名片feedid
private String feedId;

 */
- (void)obtainSimpleOrgWithTNP:(TNPOrgCardInputForm *)TNP
                           succeed:(void(^)(NSDictionary *))succeed
                           failure:(void(^)(NSError *))failure;

/**通过组织id获取当前组织的所有未分配部门的员工名片id列表
 
 其中以下参数为必传参数：
// 组织名片feedid
private String feedId;
 
 */

- (void)obtainNoNodeRelationMemberWithTNP:(TNPOrgCardInputForm *)TNP
                       succeed:(void(^)(NSArray *))succeed
                       failure:(void(^)(NSError *))failure;


/**获取组织名片交换模式
 
 //描述：名片id
 //类型：String
 private String feedId;
 */


- (void)obtainOrgJoinMethodWithTNP:(TNPOrgCardInputForm *)TNP
                             succeed:(void(^)(NSDictionary *))succeed
                             failure:(void(^)(NSError *))failure;
/**获取员工名片交换模式
 
 //描述：名片id
 //类型：String
 private String staffFeedId;
 */


- (void)obtainStaffJoinMethodWithTNP:(TNPStaffCardInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;




/**获取组织名片交换表单（废弃）
 
 //描述：名片id
 //类型：String
 private String feedId;
 */


- (void)obtainOrgExchangeFormWithTNP:(TNPOrgCardInputForm *)TNP
                             succeed:(void(^)(NSDictionary *))succeed
                             failure:(void(^)(NSError *))failure;
/**获取员工名片交换表单（废弃）
 
 //描述：名片id
 //类型：String
private String staffFeedId;
 */


- (void)obtainStaffExchangeFormWithTNP:(TNPStaffCardInputForm *)TNP
                             succeed:(void(^)(NSDictionary *))succeed
                             failure:(void(^)(NSError *))failure;

/**获取某节点下所有的子节点和成员名片
 
 //描述：组织feedid
 //类型：String
 private String feedId;
 
 // 描述：节点id
 
 //类型：Long
 
 private String nodeId
 */


- (void)obtainSubNodesAndStaffCardsByParentIdWithTNP:(TNPOrgNodeAndStaffCardInputForm *)TNP
                               succeed:(void(^)(NSDictionary *))succeed
                               failure:(void(^)(NSError *))failure;

/**通过关键字搜索组织部门及员工名片
 
 其中以下参数为必传参数：
 
 //描述：组织feedid
 //类型：String
 private String feedId;
 
 // 描述：关键字
 
 //类型：String
 
 private String keyword
 */


- (void)searchOrgTreeNodeListByKeywordWithTNP:(TNPSearchOrgTreeInputForm *)TNP
                                             succeed:(void(^)(NSDictionary *))succeed
                                             failure:(void(^)(NSError *))failure;


/**授让所有权或管理员权限
 
 其中以下参数为必传参数：
// 描述：主体名称 取值：动作发起方的名称
private String name;

// 描述：名片FeedId
// 类型：String
//取值：o_orgId
private String feedId;

// 描述：转让方手机号
//类型：String
private String fromMobilePhone;

//描述：接收方手机号
//类型：String
private String toMobilePhone;

//描述：转让类型
//类型：Integer
//取值：1 转让所有权 2 转让使用权 3 转让管理权
private String type;
 */
- (void)transferPrivilegeWithTNP:(TNPOrgCardTransferInputForm *)TNP
                                      succeed:(void(^)())succeed
                                      failure:(void(^)(NSError *))failure;

/**收回管理员权限
 
 其中以下参数为必传参数：
//描述：主体名称 取值：动作发起方的名称
private String name;

//描述：名片FeedId
//类型：String
//取值：o_orgId
private String feedId;
 

 //描述：接收方手机号
 // 类型：String
private String toMobilePhone;

//描述：转让类型
//类型：Integer
//取值：1 转让所有权 2 转让使用权 3 转让管理权
private String type;
 */
- (void)takeBackTransferWithTNP:(TNPOrgCardTransferInputForm *)TNP
                         succeed:(void(^)())succeed
                         failure:(void(^)(NSError *))failure;

/**同意接收所有权或管理员权限
 
 其中以下参数为必传参数：
 //描述：主体名称 取值：动作发起方的名称
 private String name;
 
 //描述：名片FeedId
 //类型：String
 //取值：o_orgId
 private String feedId;
 
 //描述：转让类型
 //类型：Integer
 //取值：1 转让所有权 2 转让使用权 3 转让管理权
 private String type;
 */
- (void)acceptReceiveTransferWithTNP:(TNPOrgCardTransferInputForm *)TNP
                        succeed:(void(^)())succeed
                        failure:(void(^)(NSError *))failure;

/**拒绝接收所有权或管理员权限
 
 其中以下参数为必传参数：
 //描述：主体名称 取值：动作发起方的名称
 private String name;
 
 //描述：名片FeedId
 //类型：String
 //取值：o_orgId
 private String feedId;
 
 //描述：转让类型
 //类型：Integer
 //取值：1 转让所有权 2 转让使用权 3 转让管理权
 private String type;
 */
- (void)refuseReceiveTransferWithTNP:(TNPOrgCardTransferInputForm *)TNP
                             succeed:(void(^)())succeed
                             failure:(void(^)(NSError *))failure;

/** 取消授让权限
 
 其中以下参数为必传参数：
 //描述：名片FeedId
 //类型：String
 //取值：o_orgId
 private String feedId;
 
 //描述：转让类型
 //类型：Integer
 //取值：1 转让所有权 2 转让使用权 3 转让管理权
 private String type;
 */
- (void)cancelTransferWithTNP:(TNPOrgCardTransferInputForm *)TNP
                             succeed:(void(^)())succeed
                             failure:(void(^)(NSError *))failure;

/** 根据feedId查询最后一个转让的权限
 其中以下参数为必传参数：
  //描述：名片FeedId
  //类型：String
  //取值：o_orgId
 private String feedId;
 */
- (void)obtainLastOneOrgCardTransferRecordByFeedIdWithTNP:(TNPOrgCardTransferInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;


/** 判断两个员工是否为同一组织
 其中以下参数为必传参数：
// 描述：两个员工feedId
// 类型：Strring
// 取值：s_staffId
 private String fromFeedId;
 private String toFeedId;
 */
- (void)inSameOrgWithTwoStaffWithTNP:(TNPFeedIdInputForm *)TNP
                             succeed:(void(^)(NSString *))succeed
                             failure:(void(^)(NSError *))failure;

/** 同一组织的员工名片的空岗列表或未领取列表
 其中以下参数为必传参数：
 *描述：部门NodeId
 *类型：Long
private Long NodeId;
 
 *描述：组织feedid
 *类型：Long
private Long OrgId;
 */
- (void)obtainMemCardsOfusestatusByNodesWithTNP:(TNPMemberNodeRelationInputForm *)TNP
                             succeed:(void(^)(id ))succeed
                             failure:(void(^)(NSError *))failure;

/** 入职：包含入职信息和发放名片
 
其中以下参数为必传参数：

 *描述：组织OrgFeedId
 *类型：String
private String OrgFeedId;

 *描述：Name
 *类型：String
private String Name;

*描述：NamePinyin
*类型：String
private String NamePinyin;

 *描述：UserMobilePhone
 *类型：String
private String UserMobilePhone;
 
 *描述：部门NodeId
 *类型：Long
private String NodeId;

 */
- (void)entryWithTNP:(TNPStaffCardInputForm *)TNP
                                        succeed:(void(^)(NSDictionary *))succeed
                                        failure:(void(^)(NSError *))failure;

/** 获取某节点的上一级节点的所有的子节点和成员名片
 其中以下参数为必传参数：
 
 *描述：组织FeedId
 *类型：String
 private String feedId;
 
 *描述：员工FeedId
 *类型：String
 private String OrgOrStaff;

 */
- (void)obtainUpperSubNodesAndStaffCardsByTheCurrentCardIdWithTNP:(TNPOrgNodeAndStaffCardInputForm *)TNP
                                        succeed:(void(^)(NSDictionary *))succeed
                                        failure:(void(^)(NSError *))failure;

/** 终止入职
 
 其中以下参数为必传参数：
 
 *描述：组织FeedId
 *类型：String
 private String orgFeedId;

 *描述：FeedId
 *类型：String
 private String FeedId;

 *描述：userId
 *类型：long
 private long userId;
 */
- (void)stopEntryWithTNP:(TNPStaffCardInputForm *)TNP
             succeed:(void(^)())succeed
             failure:(void(^)(NSError *))failure;

/** 可用名片列表:
 
 包括：办理离职后收回的名片和未领取名片中终止入职之后的名片。
 
 其中以下参数为必传参数：
 
 *描述：组织FeedId
 *类型：String
 private String orgFeedId;
 
 */
- (void)enableMemberCardListWithTNP:(TNPStaffCardInputForm *)TNP
                 succeed:(void(^)(NSArray *))succeed
                 failure:(void(^)(NSError *))failure;

/** 在职人员列表:
 
 同一个组织的在职员工列表
 
 其中以下参数为必传参数：
 
 *描述：组织FeedId
 *类型：String
 private String orgFeedId;
 
 */
- (void)jobEmployeeListWithTNP:(TNPStaffCardInputForm *)TNP
                            succeed:(void(^)(NSArray *))succeed
                            failure:(void(^)(NSError *))failure;

/** 组织AF面:
 
 其中以下参数为必传参数：
 
 private String toFeedId;
 
 */
- (void)obtainOrgAFWithTNP:(TNPFeedIdInputForm *)TNP
                   succeed:(void(^)(NSDictionary *))succeed
                   failure:(void(^)(NSError *))failure;

/** 员工AF面:
 
 其中以下参数为必传参数：
 
 private String toFeedId;
 
 */
- (void)obtainStaffAFWithTNP:(TNPFeedIdInputForm *)TNP
                     succeed:(void(^)(NSDictionary *))succeed
                     failure:(void(^)(NSError *))failure;

/** 根据员工feedId获取该员工所在组织的所有员工的feedId:
 
 其中以下参数为必传参数：
 
 private String staffFeedId;//员工feedId
 
 private Long updateTime;//更新时间(默认传0)
 
* 根据员工feedId获取该员工所在组织的所有员工的feedId:
 
 其中以下参数为必传参数：
 
 private String orgFeedId; //组织feedId
 
 private Long updateTime;//更新时间(默认传0)
 
 */
- (void)obtainContactsByStaffFeedIdWithTNP:(TNPOrgStaffForm *)TNP
                     succeed:(void(^)(NSDictionary *))succeed
                     failure:(void(^)(NSError *))failure;

/** 根据组织userId/updateTime获取组织同事通讯录

其中以下参数为必传参数：

private String userId; //用户id

*/
- (void)obtainStaffFeedByUserIdWithTNP:(TNPOrgStaffForm *)TNP
                                   succeed:(void(^)(NSDictionary *))succeed
                                   failure:(void(^)(NSError *))failure;
@end
