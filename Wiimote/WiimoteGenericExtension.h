//
//  WiimoteGenericExtension.h
//  Wiimote
//
//  Created by alxn1 on 31.07.12.
//  Copyright 2012 alxn1. All rights reserved.
//

#import "WiimoteExtension+PlugIn.h"

@interface WiimoteGenericExtension : WiimoteExtension
{
}

+ (NSData*)extensionSignature;
+ (NSRange)calibrationDataMemoryRange;
+ (WiimoteExtensionMeritClass)meritClass;

- (id)initWithOwner:(Wiimote*)owner
    eventDispatcher:(WiimoteEventDispatcher*)dispatcher;

- (WiimoteEventDispatcher*)eventDispatcher;

- (void)handleCalibrationData:(NSData*)data;
- (void)handleReport:(NSData*)extensionData;

@end