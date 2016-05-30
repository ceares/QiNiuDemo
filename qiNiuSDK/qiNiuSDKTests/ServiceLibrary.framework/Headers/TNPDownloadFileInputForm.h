//
//  TNPDownloadFileInputForm.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/6/18.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPDownloadFileInputForm : NSOperation

@property (nonatomic, copy) NSString *fileUrl;

@property (nonatomic, copy) NSString *path; //本地路径
@end
