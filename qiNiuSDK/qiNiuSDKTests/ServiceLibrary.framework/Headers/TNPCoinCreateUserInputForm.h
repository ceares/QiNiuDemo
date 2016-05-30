//
//  TNPCoinCreateUserInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinCreateUserInputForm : NSObject

//基本信息与toon平台名称一致	 String 	客户端提供(toon平台或用户输入)	 不可为空
@property (nonatomic,copy) NSString * cUserName;
//用户类型：1：个人用户  2：企业用户	 int	手机客户端userType=1	 不可为空
@property (nonatomic,copy) NSString * cUserType;
//Toon平台内的用户id	 long	客户端提供(toon平台)	 不可为空
@property (nonatomic,copy) NSString * tUserId;
//平台支付密码	String	用户输入或客户端提供默认	不可为空
@property (nonatomic,copy) NSString * payPassWord;

@end
