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

#define _AbstractTrigger_H_
#import <Foundation/Foundation.h>
@protocol WLTriggerCallback;

/**
 * Defines data for triggers
 */
@interface AbstractTrigger : NSObject  <NSCopying> {
	@private
	id<WLTriggerCallback> callbackFunction;
	NSMutableDictionary* event;
	BOOL transmitImmediately;
}


- (id) init  ;
/**
	 * @return the callback object whose execute() method that will be called when the trigger is activated.
	 */
- (id<WLTriggerCallback>) getCallback  ;
/**
	 * @return The event to transmit. If <code>null</code> then it won't be transmitted.
	 * The current device context is automatically added to the event when it is transmitted.
	 */
- (NSMutableDictionary*) getEvent  ;
/**
	 * @return <code>true</code> If the event should be transmitted immediately.
	 */
- (BOOL) isTransmitImmediately  ;
/**
	 * @param callbackFunction the callback object whose execute() method will be called when the trigger is activated.
	 * @return A reference to this object.
	 */
- (AbstractTrigger*) setCallback : (id<WLTriggerCallback>) callbackFunction ;
/**
	 * Sets the event to be transmitted to the server.
	 * @param event the event to set. If <code>null</code> then it won't be transmitted.
	 * @return A reference to this object.
	 */
- (AbstractTrigger*) setEvent : (NSMutableDictionary*) event ;
/**
	 * @param transmitImmediately indicates whether the event should be transmitted immediately or according to the transmission policy.
	 * If its value is true, the event is added to the transmission buffer and the whole contents of the transmission buffer are flushed to the server.
	 * Otherwise the event is added only to the transmission buffer.
	 * @return A reference to this object.
	 */
- (AbstractTrigger*) setTransmitImmediately : (BOOL) transmitImmediately ;
- (NSMutableDictionary*) cloneEvent  ;
- (AbstractTrigger*) clone  ;

@end

