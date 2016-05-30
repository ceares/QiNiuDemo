//
//  TNPFaceBagGetFaceBagDetailInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/9.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFaceBagGetFaceBagDetailInputForm : NSObject

//我的表情包Id 传入id时，会返回一条记录 long N
@property (nonatomic,copy) NSString *faceBagId;

//用户Id long Y
@property (nonatomic,copy) NSString *userId;

@end
