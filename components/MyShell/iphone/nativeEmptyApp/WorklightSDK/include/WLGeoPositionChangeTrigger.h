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

#define _WLGeoPositionChangeTrigger_H_
#import "WLGeoTrigger.h"
@protocol WLTriggerCallback;

/**
 * A trigger for tracking changes in the device's position. It is possible to specify
 * a minimum distance that must be moved before the trigger will activate.
 * <p>
 * This class, like most classes used for configuring location services, returns
 * a reference to this object from its setters, to enable chaining calls.
 */
@interface WLGeoPositionChangeTrigger : WLGeoTrigger {
	@private
	double minChangeDistance;
}


- (id) init  ;
/**
	 * @return The sensitivity
	 */
- (double) getMinChangeDistance  ;
/**
	 * After the first acquisition,  this trigger will be activated only when the reported position has changed by at least <code>minChangeDistance</code> amount.
	 * This is different from setting the parameter in {@link WLGeoAcquisitionPolicy#setMinChangeDistance(int)} as other triggers may still activate
	 * due to changes in the device's position, and no power will be saved by using this method. 
	 * @param minChangeDistance the minimum distance in meters which the position must change by in order for this trigger object to be activated.
	 * The value should be greater than that of the parameter set in {@link WLGeoAcquisitionPolicy#setMinChangeDistance(int)}, otherwise it will have no effect.
	 * @return A reference to this object
	 */
- (WLGeoPositionChangeTrigger*) setMinChangeDistance : (double) minChangeDistance ;
- (WLGeoPositionChangeTrigger*) clone  ;
- (WLGeoPositionChangeTrigger*) setCallback : (id<WLTriggerCallback>) callbackFunction ;
- (WLGeoPositionChangeTrigger*) setEvent : (NSMutableDictionary*) event ;
- (WLGeoPositionChangeTrigger*) setTransmitImmediately : (BOOL) transmitImmediately ;

@end

