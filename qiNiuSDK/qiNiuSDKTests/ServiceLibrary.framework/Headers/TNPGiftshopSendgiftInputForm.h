//
//  TNPGiftshopSendgiftInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/11/4.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPGiftshopSendgiftInputForm : NSObject

//礼物ID  string Y
@property (nonatomic,copy) NSString * giftId;

//获赠者ID  long Y
@property (nonatomic,copy) NSString * userId;

//获赠者名片ID	string	Y
@property (nonatomic,copy) NSString * feedId;

//赠送者ID  long Y
@property (nonatomic,copy) NSString * sourceId;

//赠送者名片ID	string	Y
@property (nonatomic,copy) NSString * sourceFeedId;


@end
