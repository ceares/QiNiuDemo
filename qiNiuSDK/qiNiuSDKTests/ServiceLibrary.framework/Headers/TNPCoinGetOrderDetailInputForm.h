//
//  TNPCoinGetOrderDetailInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinGetOrderDetailInputForm : NSObject

//订单id	String
@property (nonatomic,copy) NSString * paySerial;
//1：RMB 2：通宝币	String	
@property (nonatomic,copy) NSString * coinType;

@end
