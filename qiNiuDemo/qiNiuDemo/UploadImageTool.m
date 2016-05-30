////
////  UploadImageTool.m
////  qiniuDemo
////
////  Created by 程国帅 on 16/5/25.
////  Copyright © 2016年 chengs. All rights reserved.
////
//
//#import "UploadImageTool.h"
//#import"AFNetworking.h"
//
//#import"AFNetworkActivityIndicatorManager.h"
//
////#import"VCOApi.h"
//
////#import"VCOAPIClient.h"
//
////#import"QiniuUploadHelper.h"
//
//#define QiNiuBaseUrl @"http://7xozpn.com2.z0.glb.qiniucdn.com/"
//
//@implementation UploadImageTool
//
//
////给图片命名
//
//+ (NSString*)getDateTimeString
//
//{
//
//    NSDateFormatter*formatter;
//
//    NSString*dateString;
//
//    formatter = [[NSDateFormatter alloc]init];
//
//    [formatter setDateFormat:@"yyyy-MM-dd"];
//
//    dateString = [formatter stringFromDate:[NSDate date]];
//
//    return dateString;
//
//}
//
////+ (NSString*)randomStringWithLength:(int)len
////
////{
////
////    NSString*letters =@"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
////
////    NSMutableString*randomString = [NSMutableStringstringWithCapacity: len];
////
////    for(inti=0; i
////
////        [randomStringappendFormat:@"%C", [letterscharacterAtIndex:arc4random_uniform((int)[letterslength])]];
////
////        }
////
////        returnrandomString;
////
////        }
//
//        //上传单张图片
//
////        + (void)uploadImage:(UIImage*)image progress:(QNUpProgressHandler)progress success:(void(^)(NSString*url))success failure:(void(^)())failure {
////
////            [UploadImageTool getQiniuUploadToken:^(NSString*token) {
////
////                NSData*data =UIImageJPEGRepresentation(image,0.01);
////
////                if(!data) {
////
////                    if(failure) {
////
////                        failure();
////
////                    }
////
////                    return;
////
////                }
////
////                NSString*fileName = [NSString stringWithFormat:@"%@_%@.png", [UploadImageToolgetDateTimeString], [UploadImageToolrandomStringWithLength:8]];
////
////                QNUploadOption*opt = [[QNUploadOption alloc]initWithMime:nil
////
////                                                        progressHandler:progress
////
////                                                                 params:nil
////
////                                                               checkCrc:NO
////
////                                                     cancellationSignal:nil];
////
////                QNUploadManager*uploadManager = [QNUploadManager sharedInstanceWithConfiguration:nil];
////
////                [uploadManager putData:data
////
////                                   key:fileName
////
////                                 token:token
////
////                              complete:^(QNResponseInfo*info,NSString*key,NSDictionary*resp) {
////
////                                  if(info.statusCode==200&& resp) {
////
////                                      NSString*url= [NSString stringWithFormat:@"%@%@",QiNiuBaseUrl, resp[@"key"]];
////
////                                      if(success) {
////
////                                          success(url);
////
////                                      }
////
////                                  }
////
////                                  else{
////
////                                      if(failure) {
////
////                                          failure();
////
////                                      }
////
////                                  }
////
////                              }option:opt];
////
////            }failure:^{
////
////            }];
////
////        }
//
//        //上传多张图片
//
////        + (void)uploadImages:(NSArray*)imageArray progress:(void(^)(CGFloat))progress success:(void(^)(NSArray*))success failure:(void(^)())failure
//
////        {
////
////            NSMutableArray*array = [[NSMutableArray alloc]init];
////
////            __blockCGFloattotalProgress =0.0f;
////
////            __blockCGFloatpartProgress =1.0f/ [imageArray count];
////
////            __blockNSUIntegercurrentIndex =0;
////
////            QiniuUploadHelper*uploadHelper = [QiniuUploadHelper sharedUploadHelper];
////
////            __weaktypeof(uploadHelper) weakHelper = uploadHelper;
////
////            uploadHelper.singleFailureBlock= ^() {
////
////                failure();
////
////                return;
////
////            };
////
////            uploadHelper.singleSuccessBlock= ^(NSString*url) {
////
////                [array addObject:url];
////
////                totalProgress += partProgress;
////
////                progress(totalProgress);
////
////                currentIndex++;
////
////                if([arraycount] == [imageArraycount]) {
////
////                    success([arraycopy]);
////
////                    return;
////
////                }else{
////
////                    NSLog(@"---%ld",currentIndex);
////
////                    [UploadImageTool uploadImage:imageArray[currentIndex] progress:nil success:weakHelper.singleSuccessBlock failure:weakHelper.singleFailureBlock];
////
////                }
////
////            };
////
////            [UploadImageTool uploadImage:imageArray[0] progress:nil success:weakHelper.singleSuccessBlock failure:weakHelper.singleFailureBlock];
////            
////        }
//
//        //获取七牛的token
//        
////        + (void)getQiniuUploadToken:(void(^)(NSString*))success failure:(void(^)())failure {
////            
////            NSString*aPath = [NSStringstringWithFormat:@"%@%@getQiniuUpToken",BaseUrl,Url_info];
////            
////            [[VCOAPIClient sharedClient] requestJsonDataWithPath:aPath withParams:nil withMethodType:Post andBlock:^(id data,NSError*error) {
////                
////                if(data) {
////                    
////                    if(success) {
////                        
////                        success([data objectForKey:@"data"]);
////                        
////                    }
////                    
////                }else{
////                    
////                    if(failure) {
////                        
////                        failure();
////                        
////                    }
////                    
////                }
////                
////            }];
////            
////        }
//
//        
//        @end
