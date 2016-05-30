//
//  TNPAgencyItemInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/1/25.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPAgencyItemInputForm : NSObject

//名片id	string	 feeId可以上传多个 逗号分隔
@property (nonatomic,copy) NSString * feedId;
//服务项id	 Integer
@property (nonatomic,copy) NSString * composeId;

@end
