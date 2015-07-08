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

#define _WLWifiDwellInsideTrigger_H_
#import "AbstractWifiDwellTrigger.h"
#import "WLConfidenceLevel.h"
@protocol WLTriggerCallback;

/**
 * A trigger definition for dwelling a period of time inside an area. In order to re-activate
 * the device must first leave the area. The area is defined by the visibility
 * of a set of given access points.
 * <p>
 * This class, like most classes used for configuring location services, returns
 * a reference to this object from its setters, to enable chaining calls.
 */
@interface WLWifiDwellInsideTrigger : AbstractWifiDwellTrigger {
}


- (id) init  ;
- (WLWifiDwellInsideTrigger*) clone  ;
- (WLWifiDwellInsideTrigger*) setAreaAccessPoints : (NSMutableArray*) areaFilters ;
- (WLWifiDwellInsideTrigger*) setOtherAccessPointsAllowed : (BOOL) otherAccessPointsAllowed ;
- (WLWifiDwellInsideTrigger*) setCallback : (id<WLTriggerCallback>) callbackFunction ;
- (WLWifiDwellInsideTrigger*) setEvent : (NSMutableDictionary*) event ;
- (WLWifiDwellInsideTrigger*) setDwellingTime : (long long) dwellingTime ;
- (WLWifiDwellInsideTrigger*) setTransmitImmediately : (BOOL) transmitImmediately ;
- (WLWifiDwellInsideTrigger*) setConfidenceLevel : (WLConfidenceLevel) confidenceLevel ;

@end

