//
//  HMMessageModel.h
//  01-QQ聊天界面
//
//  Created by apple on 14-8-22.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef enum {
    HMMessageModelGatsby = 0,//Gatsby
    HMMessageModelJobs//Jobs
}HMMessageModelType;
@interface HMMessageModel : NSObject

//正文
@property (nonatomic, copy)NSString *text;

//时间
@property (nonatomic, copy)NSString *time;

//发送类型
@property (nonatomic, assign)HMMessageModelType type;

//是否隐藏时间
@property (nonatomic,assign)BOOL hideTime;

- (instancetype)initWithDict:(NSDictionary *)dict;

+ (instancetype)messageWithDict:(NSDictionary *)dict;

@end
