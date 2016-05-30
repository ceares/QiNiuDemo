//
//  TNPCoinNotifyForServerInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinNotifyForServerInputForm : NSObject

//交易编号 String 	 	不可为空
@property (nonatomic,copy) NSString * reqSerialNumber;
//支付宝立即通知的状态 String(int)	 	不可为空
@property (nonatomic,copy) NSString * resultStatus;
@end
