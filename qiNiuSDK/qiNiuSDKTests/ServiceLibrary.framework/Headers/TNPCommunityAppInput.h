//
//  TNPCommunityAppInput.h
//  ServiceLibrary
//
//  Created by 王成龙 on 16/5/10.
//  Copyright © 2016年 wangdong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNPCommunityAppInput : NSObject

/**** 类型0原生; 1应用 */
@property (nonatomic,copy) NSString * appType;
@property (nonatomic,copy) NSString * caId;
/**** 是否可点击 */
@property (nonatomic,copy) NSString * click;
@property (nonatomic,copy) NSString * location;
/**** 名称 */
@property (nonatomic,copy) NSString * nameSpace;
/**** 0社区名片 1景区名片 2学校名片 */
@property (nonatomic,copy) NSString * type;
/**** 版本 v1.0.0 */
@property (nonatomic,copy) NSString * version;

@end
