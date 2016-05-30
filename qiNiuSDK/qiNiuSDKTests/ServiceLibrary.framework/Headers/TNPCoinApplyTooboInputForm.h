//
//  TNPCoinApplyTooboInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinApplyTooboInputForm : NSObject

//通用户id	 	String	 	不可为空
@property (nonatomic,copy) NSString * tUserId;
//订单金额	想要购买的通宝个数	String	 	不可为空
@property (nonatomic,copy) NSString * orderValue;
//渠道编码	 	String	 	不可为空
@property (nonatomic,copy) NSString * channelCode;

@end
