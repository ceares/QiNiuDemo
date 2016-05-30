//
//  TNPMWAPUploadReqInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/1/22.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPMWAPUploadReqInputForm : NSObject

@property (nonatomic,copy) NSString * domainIP;    //路由域名
@property (nonatomic,copy) NSString * certificateType;// 证件类型  32身份证、16学生证、8营业执照、4房产证2、经营用房证 1场所证

@end
