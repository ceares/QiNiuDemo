//
//  TNPCoinToonboTransferAccountInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinToonboTransferAccountInputForm : NSObject

//通用户id	收款人通用户id	String	 	 可为空，同时有值以tUserId为准
@property (nonatomic,copy) NSString * tUserId;
//手机号码	收款人手机号	String	 	  不可为空
@property (nonatomic,copy) NSString * mobilePhone;
//通宝数量	 通宝金额	String	 	 不可为空
@property (nonatomic,copy) NSString * orderValue;
//通用户id	扣款人通用户id	String	 	 不可为空
@property (nonatomic,copy) NSString * fromtUserId;
//备注信息	 转账备注	 String	 	可为空
@property (nonatomic,copy) NSString * note;
@end
