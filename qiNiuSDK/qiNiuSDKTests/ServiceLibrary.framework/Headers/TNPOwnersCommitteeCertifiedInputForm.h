//
//  TNPOwnersCommitteeCertifiedInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/4/14.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPOwnersCommitteeCertifiedInputForm : NSObject

//描述：业委会名称 类型：String
@property (nonatomic,copy) NSString *  committeeName;
//描述：邻里通FeedId 类型：String
@property (nonatomic,copy) NSString *  feedId;
//描述：名片FeedID 类型：String
@property (nonatomic,copy) NSString *  cardFeedId;
//描述：创建业委会用户ID 类型：Long
@property (nonatomic,copy) NSString *  userId;
//描述：推广语 类型：String
@property (nonatomic,copy) NSString *  promLan;
//描述：业委会简介 类型：String
@property (nonatomic,copy) NSString *  committeeDesc;
//描述：业委会logo 类型：String
@property (nonatomic,copy) NSString *  committeeLogo;
//描述：状态：1:待审核  2:审核通过  3：审核拒绝 类型：Integer
@property (nonatomic,copy) NSString *  status;
//描述： 批文照片 类型：String
@property (nonatomic,copy) NSString *  approvalPic;
//描述：身份证照片正面  类型：String
@property (nonatomic,copy) NSString *  idPicFront;
//描述：身份证照片背面  类型：String
@property (nonatomic,copy) NSString *  idPicBack;
//描述：创建时间  类型：Long
@property (nonatomic,copy) NSString *  createTime;
//描述：审核时间 类型：Long
@property (nonatomic,copy) NSString *  updateTime;
//描述：开始时间 类型：Long
@property (nonatomic,copy) NSString *  startTime;
//描述：结束时间 类型：Long
@property (nonatomic,copy) NSString *  endTime;
//描述：开始索引 类型：Integer
@property (nonatomic,copy) NSString *  startIndex;

@end
