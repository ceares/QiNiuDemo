//
//  ServiceRequest+FaceBagRequest.h
//  ServiceLibrary
//
//  Created by 王成龙 on 15/12/7.
//  Copyright © 2015年 wangdong. All rights reserved.
//

#import <ServiceLibrary/ServiceLibrary.h>

@interface ServiceRequest (FaceBagRequest)

/**获取表情包列表
 
 */
- (void)getFaceBagListWithTNP:(TNPFaceBagGetFaceBagListInputForm *)TNP
                    succeed:(void(^)(id))succeed
                    failure:(void(^)(NSError *))failure;

/**下载表情包
 
 */
- (void)downLoadFaceBagWithTNP:(TNPFaceBagDownLoadFaceBagInputForm *)TNP
                    progressBlock:(void (^)(int64_t bytesRead, int64_t totalBytesRead, int64_t totalBytesExpectedToRead))progressBlock
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;
/**移除我的表情包
 
 */
- (void)removeMyFaceBagWithTNP:(TNPFaceBagRemoveMyFaceBagInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;
/**更新我的表情包顺序

 */
- (void)sortMyFaceBagWithTNP:(TNPFaceBagSortMyFaceBagInputForm *)TNP
                      succeed:(void(^)(NSArray *))succeed
                      failure:(void(^)(NSError *))failure;
/**获得我的表情包列表
 
 */

- (void)getMyFaceBagListWithTNP:(TNPFaceBagGetMyFaceBagListInputForm *)TNP
                      succeed:(void(^)(NSArray *))succeed
                      failure:(void(^)(NSError *))failure;

/**获得表情包明细
 
 */

- (void)getFaceBagDetailWithTNP:(TNPFaceBagGetFaceBagDetailInputForm *)TNP
                        succeed:(void(^)(NSDictionary *))succeed
                        failure:(void(^)(NSError *))failure;

/**上传表情包（后台管理）
 
 */

- (void)uploadfacebagWithTNP:(TNPFaceBagUploadfacebagInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;
/**编辑表情包(包含上线下线)
 
 */

- (void)editfacebagWithTNP:(TNPFaceBagEditfacebagInputForm *)TNP
                      succeed:(void(^)(NSDictionary *))succeed
                      failure:(void(^)(NSError *))failure;
@end
