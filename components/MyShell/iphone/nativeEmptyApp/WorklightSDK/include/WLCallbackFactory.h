/*
 *
    COPYRIGHT LICENSE: This information contains sample code provided in source code form. You may copy, modify, and distribute
    these sample programs in any form without payment to IBM® for the purposes of developing, using, marketing or distributing
    application programs conforming to the application programming interface for the operating platform for which the sample code is written.
    Notwithstanding anything to the contrary, IBM PROVIDES THE SAMPLE SOURCE CODE ON AN "AS IS" BASIS AND IBM DISCLAIMS ALL WARRANTIES,
    EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, ANY IMPLIED WARRANTIES OR CONDITIONS OF MERCHANTABILITY, SATISFACTORY QUALITY,
    FITNESS FOR A PARTICULAR PURPOSE, TITLE, AND ANY WARRANTY OR CONDITION OF NON-INFRINGEMENT. IBM SHALL NOT BE LIABLE FOR ANY DIRECT,
    INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR OPERATION OF THE SAMPLE SOURCE CODE.
    IBM HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS OR MODIFICATIONS TO THE SAMPLE SOURCE CODE.

 */

//
//  WLCallbackFactory.h
//  WorklightStaticLibProject
//
//  Created by Dolev Dotan on 10/30/13.
//  Copyright (c) 2013 odedr@worklight.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol WLTriggerCallback;
@protocol WLGeoCallback;
@protocol WLGeoFailureCallback;
@protocol WLWifiConnectedCallback;
@protocol WLWifiFailureCallback;
@protocol WLDeviceContext;
@class    WLGeoError;
@class    WLWifiError;
@class    WLGeoPosition;
@class    WLWifiAccessPoint;


/**
 A utility class that allows using blocks wherever a callback object is needed in the Worklight Location Services API.
 */
@interface WLCallbackFactory : NSObject

/**
 Create a WLTriggerCallback that wraps the given block
 */
+ (id<WLTriggerCallback>)       createTriggerCallback:       (void (^)(id<WLDeviceContext> deviceContext)) callbackBlock;

/**
 Create a WLGeoCallback that wraps the given block
 */
+ (id<WLGeoCallback>)           createGeoCallback:           (void (^)(WLGeoPosition* pos))                callbackBlock;

/**
 Create a WLWifiConnectedCallback that wraps the given block
 */
+ (id<WLWifiConnectedCallback>) createWifiConnectedCallback: (void (^)(WLWifiAccessPoint* connectedAccessPoint, NSNumber* signalStrength)) callbackBlock;

/**
 Create a WLGeoFailureCallback that wraps the given block
 */
+ (id<WLGeoFailureCallback>)    createGeoFailureCallback:    (void (^)(WLGeoError* error))                 callbackBlock;

/**
 Create a WLWifiFailureCallback that wraps the given block
 */
+ (id<WLWifiFailureCallback>)   createWifiFailureCallback:   (void (^)(WLWifiError* error))                callbackBlock;

@end
