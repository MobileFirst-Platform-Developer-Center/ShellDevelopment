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

#define _WLEventTransmissionPolicy_H_
#import <Foundation/Foundation.h>

/**
 * The event transmission policy is used to control how events are transmitted to the server.
 * <p>
 * This class, like most classes used for configuring location services, returns
 * a reference to this object from its setters, to enable chaining calls. 
 */
@interface WLEventTransmissionPolicy : NSObject  <NSCopying> {
	@private
// default values 
	BOOL eventStorageEnabled;
	long long interval;
	int maxChunkSize;
	int maxMemSize;
	long long retryInterval;
	int numRetries;
}


- (id) init  ;
/**
	 * @return A new policy with all fields set to default values.
	 */
+ (WLEventTransmissionPolicy*) getDefaultPolicy  ;
/**
	 * @return <code>true</code> if events can be stored persistently, otherwise <code>false</code>. By default, is <code>false</code>.
	 */
- (BOOL) isEventStorageEnabled  ;
/**
	 * Determines where events are stored. If the value is <code>true</code>, events may be stored persistently. If the
	 * value is <code>false</code>, events that are waiting for transmission are stored in memory. The default value is
	 * <code>false</code>.
	 * 
	 * @param eventStorageEnabled the eventStorageEnabled to set
	 * @return A reference to this object.
	 */
- (WLEventTransmissionPolicy*) setEventStorageEnabled : (BOOL) eventStorageEnabled ;
/**
	 * @return the transmission interval, in milliseconds.
	 */
- (long long) getInterval  ;
/**
	 * Sets the transmission interval, in milliseconds. The default value is 60000 (one minute). Before events are
	 * transmitted, they are accumulated in memory and/or storage.
	 * 
	 * @param interval the interval to set
	 * @return A reference to this object.
	 */
- (WLEventTransmissionPolicy*) setInterval : (long long) interval ;
/**
	 * @exclude
	 * @return the maximumMemorySize in kilobytes
	 */
- (int) getMaxMemSize  ;
/**
	 * @exclude
	 * @param maximumMemorySize the maximumMemorySize to set in kilobytes
	 * @return A reference to this object.
	 */
- (WLEventTransmissionPolicy*) setMaxMemSize : (int) maximumMemorySize ;
/**
	 * @exclude
	 * @return the maximumChunkSize in kilobytes
	 */
- (int) getMaxChunkSize  ;
/**
	 * @exclude
	 * @param maximumChunkSize the maximumChunkSize to set in kilobytes
	 * @return A reference to this object.
	 */
- (WLEventTransmissionPolicy*) setMaxChunkSize : (int) maximumChunkSize ;
/**
	 * @exclude
	 * @return the retry interval
	 */
- (long long) getRetryInterval  ;
/**
	 * @exclude
	 * @param retryInterval the retry interval to set
	 * @return A reference to this object.
	 */
- (WLEventTransmissionPolicy*) setRetryInterval : (long long) retryInterval ;
/**
	 * @exclude
	 * @return the number of retries on failure
	 */
- (int) getNumRetries  ;
/**
	 * @exclude
	 * @param numRetries Set the number of retries on failure
	 * @return A reference to this object.
	 */
- (WLEventTransmissionPolicy*) setNumRetries : (int) numRetries ;
- (WLEventTransmissionPolicy*) clone  ;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;

@end

