//
//  DeviceInfo.h
//  DeviceInfo
//
//  Created by Superman on 2018/7/20.
//  Copyright © 2018年 Superman. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeviceInfo : NSObject

/**
 *  auth    Daniel Yao
 *  method  获取设备IDFA
 *  @return 设备IDFA
 */
+(NSString *)dy_getDeviceIDFA;

/**
 *  auth    Daniel Yao
 *  method  获取设备IDFV
 *  @return 设备IDFV
 */
+(NSString *)dy_getDeviceIDFV;

/**
 *  auth    Daniel Yao
 *  method  获取设备IMEI
 *  @return 设备IMEI
 */
+(NSString*)dy_getDeviceIMEI;

/**
 *  auth    Daniel Yao
 *  method  获取设备MAC
 *  @return 设备MAC
 */
+(NSString*)dy_getDeviceMAC;

/**
 *  auth    Daniel Yao
 *  method  获取设备UUID
 *  @return 设备UUID
 */
+(NSString*)dy_getDeviceUUID;

/**
 *  auth    Daniel Yao
 *  method  获取设备UDID
 *  @return 设备UDID
 */
+(NSString*)dy_getDeviceUDID;
@end
