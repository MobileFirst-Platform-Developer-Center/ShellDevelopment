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

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>
#import "TLFPublicDefinitions.h"

@class TLFLogging;
@class TLFMonitoringLevel;
@class TLFCache;

@interface TLFCustomEvent : NSObject <TLFSavePrintScreenOperationDelegate> {

	TLFLogging *_currentLogging;
	TLFMonitoringLevel *_currentMonitoringLevel;
	TLFCache *_currentCache;
	
	BOOL _isTLFEnabled;
	
	// Exception handling 
	// We set these variables before the exceoption happens
	NSString *_hostName;
	NSString *_fileName;
}

/*
 Returns the singleton Tealeaf Custom Events instance.
 */
+ (TLFCustomEvent*)sharedInstance;

/**
 Requests that the framework logs a named event with no additional information.
 @param eventName The event name.
 */
- (BOOL)logEvent:(NSString*)eventName;

/**
 Requests that the framework logs a named event and an associated string.
 @param eventName The event name.
 @param value The associated string.
 */
- (BOOL)logEvent:(NSString*)eventName value:(NSString*)value;

/**
 Requests that the framework logs a named event and an associated dictionary. The dictionary will be converted to its JSON representation.
 @param eventName The event name.
 @param values The associated dictionary.
 */
- (BOOL)logEvent:(NSString*)eventName values:(NSDictionary*)values;

/**
 Requests that the framework logs a named event, specifying the monitoring level.
 @param eventName The event name.
 @param level The monitoring level of the event.
 */
- (BOOL)logEvent:(NSString*)eventName level:(kTLFMonitoringLevelType)level;

/**
 Requests that the framework logs a named event and an associated string, specifying the monitoring level.
 @param eventName The event name.
 @param value The associated string.
 @param level The monitoring level of the event.
 */
- (BOOL)logEvent:(NSString*)eventName value:(NSString*)value level:(kTLFMonitoringLevelType)level;

/**
 Requests that the framework logs a named event and an associated dictionary, specifying the monitoring level. The dictionary will be converted to its JSON representation.
 @param eventName The event name.
 @param values The associated dictionary.
 @param level The monitoring level of the event.
 */
- (BOOL)logEvent:(NSString*)eventName values:(NSDictionary*)values level:(kTLFMonitoringLevelType)level;

/**
 Requests that the framework logs the carrier information. This is not logged automatically because it requires the Core Telephony framework.
 @param carrierName The carrier name.
 @param isoCountryCode The ISO country code.
 @param level The monitoring level of the event.
 */
- (BOOL)logCarrierEvent:(NSString*)carrierName country:(NSString*)isoCountryCode level:(kTLFMonitoringLevelType)level;

/**
 Requests that the framework logs the location information. This is not logged automatically to avoid making unnecessary location updates and to protect the privacy of your application's users by ensuring that location is reported only when the app has some other reason to request it. Your application must include the Core Location framework.
 */
- (BOOL)logLocationUpdateEventWithLatitude:(double)latitude longitude:(double)longitude level:(kTLFMonitoringLevelType)level;

/**
 Requests that the framework logs an error as described in an NSError instance.
 @param error The NSError instance.
 @param message An associated message.
 @param level The monitoring level of the event.
 */
- (BOOL)logNSErrorEvent:(NSError*)error 
				message:(NSString*)message
				  level:(kTLFMonitoringLevelType)level;

/**
 Log error event - [x logNSErrorEvent:error message:@"File not found" file:__FILE__ line:__LINE__];
 */
- (BOOL)logNSErrorEvent:(NSError*)error 
				message:(NSString*)message 
				   file:(const char*)file 
				   line:(unsigned int)line 
				  level:(kTLFMonitoringLevelType)level;

/**
 Requests that the framework logs an exception trapped by your own exception handler. These methods do not use the Cocoa SDK, which is not exception-safe.
 @param exception The NSException instance.
 @param level The monitoring level of the event.
 */
- (BOOL)logNSExceptionEvent:(NSException *)exception level:(kTLFMonitoringLevelType)level;
- (BOOL)logNSExceptionEvent:(NSException *)exception dataDictionary:(NSDictionary*)dataDictionary level:(kTLFMonitoringLevelType)level;

/**
 Requests that the framework logs a Print Screen event. The screenshot in that moment is automatically associated.
 */
- (BOOL)logPrintScreenEvent;

/**
 Requests that the framework logs a an Image. 
 */
- (BOOL)logImage:(UIImage *)image;
- (BOOL)logImageSynchronous:(UIImage*)image;
- (BOOL)logUILabelTextChange:(UILabel*)label;
- (BOOL)logCustomControl:(id<TLFCustomControlDelegate>)customControl;

/**
 Requests that the framework logs an application context. 
 @param logicalPageName Page name or title e.g. "Login View Controller"; Must not be empty.
 @param applicationContext : valid values are "LOAD" or "UNLOAD"; Must not be empty.
 @param referrer Page name or title that loads logicalPageName. Could be empty.
 */
- (BOOL)logAppContext:(NSString*)logicalPageName
   applicationContext:(NSString*)applicationContext
             referrer:(NSString*)referrer;

-(BOOL)logConnection:(NSURLConnection*)connection error:(NSError*)error;
-(BOOL)logConnection:(NSURLConnection*)connection response:(NSURLResponse*)response responseTimeInMilliseconds:(long long)responseTime;
-(BOOL)logConnection:(NSURLConnection*)connection request:(NSURLRequest*)request;
-(BOOL)logClickEvent:(UIView*)view data:(NSDictionary*)data;
-(BOOL)logValueChangeEvent:(UIView*)view data:(NSDictionary*)data;
-(BOOL)logTextChangeEvent:(UIView*)view data:(NSDictionary*)data;
@end
