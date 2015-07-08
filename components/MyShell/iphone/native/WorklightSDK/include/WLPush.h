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
//  WLPush.h
//  WorklightStaticLibProject
//
//  Created by worklightdev on 24/01/13.
//  Copyright (c) 2013 odedr@worklight.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WLClient.h"
#import "WLOnReadyToSubscribeListener.h"
#import "WLEventSourceListener.h"
#import "WLDelegate.h"
#import "WLPushOptions.h"

@interface WLPush : NSObject

@property (retain) id <WLOnReadyToSubscribeListener> onReadyToSubscribeListener;
@property (retain) NSMutableDictionary *registeredEventSources;
@property  BOOL isTokenUpdatedOnServer;
@property (retain) NSString *serverToken;
@property (retain) NSString *deviceToken;
@property (retain) NSMutableArray *subscribedEventSources;
@property (retain) NSString *tokenFromClient;

+(WLPush *) sharedInstance;

-(void) setOnReadyToSubscribeListener:(id <WLOnReadyToSubscribeListener>)listener;

-(void) registerEventSourceCallback:(NSString *)alias :(NSString *)adapter :(NSString *)eventsource :(id <WLEventSourceListener>)eventSourceListener;

-(BOOL)isAbleToSubscribe :(NSString * )alias :(BOOL)isRegistering;

-(void) updateToken :(NSString *)svrToken;

-(void) updateTokenCallback :(NSString *)deviceToken;

-(void) clearSubscribedEventSources;

-(void) updateSubscribedEventSources :(NSDictionary *) eventSources;

-(void) subscribe :(NSString *)alias :(WLPushOptions *)options : (id <WLDelegate>)responseListener;

-(void) unsubscribe :(NSString *)alias :(id <WLDelegate>)responseListener;

-(BOOL) isSubscribed :(NSString *)alias;

-(BOOL)isPushSupported;

@end
