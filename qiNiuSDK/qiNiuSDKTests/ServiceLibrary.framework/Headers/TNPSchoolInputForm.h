//
//  TNPSchoolInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/26.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPSchoolInputForm : NSObject

//描述：学校名称   类型:String
@property (nonatomic,copy) NSString * schoolName;
//描述：学校类型  类型：String  取值范围：小学、中学、大学
@property (nonatomic,copy) NSString * schoolType;

@end
