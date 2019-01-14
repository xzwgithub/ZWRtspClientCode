//
//  RTSPClientConnection.h
//  Live555Demo
//
//  Created by xzw on 2018/1/1.
//  Copyright © 2018年 xzw. All rights reserved.
//

#import <Foundation/Foundation.h>  

@protocol rtspDelegete <NSObject>

@required
//解码一帧数据，frame为帧数据，size为帧数据大小
-(void)decodeNalu:(uint8_t*)buffer Size:(uint32_t)size;
    
@end

@interface RTSPClientConnection : NSObject

@property (nonatomic,weak) id<rtspDelegete> delegate;

//单例
+(instancetype)shareInstance;

//传人rtsp地址，开启rtsp
-(void)startRtspWithUrl:(NSString *)rtspURL;

//关闭rtsp
-(void)closeRTSP;

//是否连接
-(BOOL)isRtspConnected;

@end
