//
//  TNPUserSetSecretQuestionsInputForm.h
//  systemModelDemo
//
//  Created by syswin on 15/5/13.
//  Copyright (c) 2015年 ___SYSWIN___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPUserSetSecretQuestionsInputForm : NSObject
//描述：用户ID
//类型：Long
@property (nonatomic,copy) NSString * userId;//用户ID
//描述：用户安全问题（采用格式例如：1:谢谢;2:谢谢;3:谢谢    注：1.2.3 代表预先设定好的问题序号）
//类型：String
@property (nonatomic,copy) NSString * secretQuestion;//
@end
