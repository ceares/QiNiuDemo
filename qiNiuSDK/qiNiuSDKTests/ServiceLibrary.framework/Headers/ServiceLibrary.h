//
//  ServiceLibrary.h
//  ServiceLibrary
//
//  Created by 王冬 on 15/5/7.
//  Copyright (c) 2015年 wangdong. All rights reserved.
//

/*  使用须知    
 
 1. 使用该库需要包括
 MobileCoreServices.framework
 SystemConfiguration.framework
 Security.framework
 AFNetworking.framework
 
 2. 在 Build Settings -> Other Linker Flags 中设置值 -ObjC <注意大小写>
 
 3. 包含<ServiceLibrary/ServiceLibrary.h>
 在app启动时调用
 
 ServiceRequest *rs = [ServiceRequest sharedInstance];
 [self.request routerLoadWithVerfiyInfo:info finish:^(BOOL flag, NSError *err) {
 if ( flag ) // 调用服务接口
 }];
 来启动服务并初始化路由系统表。
 */

#import <UIKit/UIKit.h>

//! Project version number for ServiceLibrary.
FOUNDATION_EXPORT double ServiceLibraryVersionNumber;//  9.4.9   version;

//! Project version string for ServiceLibrary.
FOUNDATION_EXPORT const unsigned char ServiceLibraryVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ServiceLibrary/PublicHeader.h>

#import <ServiceLibrary/ServiceRequest+UserRequest.h>
#import <ServiceLibrary/ServiceRequest+GroupRequest.h>
#import <ServiceLibrary/ServiceRequest+CardRequest.h>
#import <ServiceLibrary/ServiceRequest+ActivityRequest.h>
#import <ServiceLibrary/ServiceRequest+Conversation.h>
#import <ServiceLibrary/ServiceRequest+FindRequest.h>
#import <ServiceLibrary/ServiceRequest+DownloadRequest.h>
#import <ServiceLibrary/ServiceRequest+PluginRequest.h>
#import <ServiceLibrary/ServiceRequest+OrgRequest.h>
#import <ServiceLibrary/ServiceRequest+FileUpload.h>
#import <ServiceLibrary/ServiceRequest+FeedRequest.h>
#import <ServiceLibrary/ServiceRequest+InvitationRequest.h>
#import <ServiceLibrary/ServiceRequest+ContentRequest.h>
#import <ServiceLibrary/ServiceRequest+GroupBusiness.h>
#import <ServiceLibrary/ServiceRequest+Chatplugin.h>
#import <ServiceLibrary/ServiceRequest+Msgremote.h>
#import <ServiceLibrary/ServiceRequest+CoinRequest.h>
#import <ServiceLibrary/ServiceRequest+OperationlogRequest.h>
#import <ServiceLibrary/ServiceRequest+SchoolsRequest.h>
#import <ServiceLibrary/ServiceRequest+punctualitytrystRequest.h>
#import <ServiceLibrary/ServiceRequest+GiftshopRequest.h>
#import <ServiceLibrary/ServiceRequest+MsgbusinessRequest.h>
#import <ServiceLibrary/ServiceRequest+DaRequest.h>
#import <ServiceLibrary/ServiceRequest+FaceBagRequest.h>
#import <ServiceLibrary/ServiceRequest+ReportRequest.h>
#import <ServiceLibrary/ServiceRequest+UnReadTipRequest.h>
#import <ServiceLibrary/ServiceRequest+AgencyRequest.h>
#import <ServiceLibrary/ServiceRequest+RecumbentforumRequest.h>
#import <ServiceLibrary/ServiceRequest+AuthenRequest.h>
#import <ServiceLibrary/ServiceRequest+SrgsRequest.h>
#import <ServiceLibrary/ServiceRequest+BeaconRequest.h>
#import <ServiceLibrary/ServiceRequest+CommunityRequest.h>
#import <ServiceLibrary/ServiceRequest+MWAPRequest.h>

#import <ServiceLibrary/MJConst.h>
#import <ServiceLibrary/MJFoundation.h>
#import <ServiceLibrary/UIImageView+WebCache.h>
#import <ServiceLibrary/CommunalHeader.h>
#import <ServiceLibrary/IPObject.h>
#import <ServiceLibrary/SSKeychain.h>
