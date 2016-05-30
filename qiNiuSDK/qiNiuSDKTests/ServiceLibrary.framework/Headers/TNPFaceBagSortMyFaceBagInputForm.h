//
//  TNPFaceBagSortMyFaceBagInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/7.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFaceBagSortMyFaceBagInputForm : NSObject

//用户ID long Y
@property (nonatomic,copy) NSString *userId;

//我的表情包列表 list	Y
@property (nonatomic,retain) NSArray *myFaceBagsList;

@end
