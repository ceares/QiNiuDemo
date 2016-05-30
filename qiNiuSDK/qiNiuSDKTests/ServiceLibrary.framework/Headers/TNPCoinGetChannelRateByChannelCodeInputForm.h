//
//  TNPCoinGetChannelRateByChannelCodeInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/10/21.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCoinGetChannelRateByChannelCodeInputForm : NSObject

//渠道码，现仅有一个ToonRecharge,不可为空	String
@property (nonatomic,copy) NSString * channelCode;
@end
