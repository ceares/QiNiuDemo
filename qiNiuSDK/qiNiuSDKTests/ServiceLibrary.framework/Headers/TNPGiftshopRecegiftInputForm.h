//
//  TNPGiftshopRecegiftInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/4.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGiftshopRecegiftInputForm : NSObject

//拉取列表起始位置  默认为0 int N
@property (nonatomic,copy) NSString * fetchBegin;

//拉取列表的数量  根据滑动幅度，前端来定 int N
@property (nonatomic,copy) NSString * fetchNum;

//用户Id  long N
@property (nonatomic,copy) NSString * userId;

//名片id	 string	Y
@property (nonatomic,copy) NSString * feedId;

@end
