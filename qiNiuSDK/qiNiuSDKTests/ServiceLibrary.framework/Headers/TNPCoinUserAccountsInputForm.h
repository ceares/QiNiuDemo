//
//  TNPCoinUserAccountsInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinUserAccountsInputForm : NSObject

//Toon平台内的用户ID	long 	客户端提供	 否
@property (nonatomic,copy) NSString * tUserId;
//查询账户的类型:1现金账户 2.通宝账户	int	客户端提供	可空(全部)
@property (nonatomic,copy) NSString * acctType;
@end
