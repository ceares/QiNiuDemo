//
//  TNPCoinGetOrderTradeRecordInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinGetOrderTradeRecordInputForm : NSObject

//通用户id String 	 	不可为空
@property (nonatomic,copy) NSString * tUserId;
//1：RMB 2：通宝币 int	 	不可为空
@property (nonatomic,copy) NSString * coinType;
//第几页	int	 	不可为空
@property (nonatomic,copy) NSString * fetchBegin;
//每页返回条数	int 	 	不可为空	
@property (nonatomic,copy) NSString * fetchNum;

@end
