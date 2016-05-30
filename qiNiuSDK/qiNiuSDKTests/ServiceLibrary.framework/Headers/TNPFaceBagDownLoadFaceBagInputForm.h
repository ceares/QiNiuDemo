//
//  TNPFaceBagDownLoadFaceBagInputForm.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/7.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPFaceBagDownLoadFaceBagInputForm : NSObject

//表情包Id long Y
@property (nonatomic,copy) NSString * faceBagId;

//用户Id long Y
@property (nonatomic,copy) NSString * userId;

//是否下载zip文件		0：不需要，1：需要	int	N	默认为0
@property (nonatomic,copy) NSString * isDownloadZip;
@end
