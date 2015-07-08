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
//  WLCordovaAppDelegate.h
//  Worklight SDK
//
//  Created by Benny Weingarten on 8/16/10.

//

#import <UIKit/UIKit.h>
#import "CDVAppDelegate.h"


@class Push;

@interface WLCordovaAppDelegate : CDVAppDelegate < UIApplicationDelegate, UIAlertViewDelegate > {
	Push *push;
	BOOL applicationPageLoaded;
	BOOL isIPAD;
    
}

extern NSString * const SKIN_LOADER_FILE_NAME;
extern NSString * const BUILD_TIME_FILE_NAME;
extern NSString * const APP_PATH_FILE_NAME;
extern NSString * const CHECKSUM_JS_FILE_NAME;
extern NSString * const CHECKSUM_KEY_NAME; // key for reading the checksum from checksum.js
extern NSString * const DEFAULT_SKIN_NAME;
extern NSString * const SAVED_CHECKSUM_KEY_NAME; // key for NSUserDefaults

@property (retain, nonatomic) Push *push;
@property (readonly) BOOL isIPAD;
@property (nonatomic, copy) NSString *appInitErrorString;


// Class public methods
+ (void) setAppChecksum:(NSString *)checksum;
+ (NSString *)readPrePackagedChecksum;
+ (long long) getFreeSpaceOnDevice;
+ (NSString*) wwwFolderName;
+ (NSString*) startPage;
+ (NSString*) pathForResource:(NSString*)resourcepath;

// This method can be used instead of application:didLaunchingWithOptions for application
// initialization IF some other delegate superclass is receiving the application:didLaunchingWithOptions
// message to do some pre-requisite initialization (such as a secure container authorization).
// The superclass will return to iOS, and then at some later point (such as when secure container
// authorization is successful) should invoke this method.
- (BOOL)appStart:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

