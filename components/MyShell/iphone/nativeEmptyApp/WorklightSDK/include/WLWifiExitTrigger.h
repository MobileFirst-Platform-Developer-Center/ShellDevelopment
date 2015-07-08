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

#define _WLWifiExitTrigger_H_
#import "AbstractWifiAreaTrigger.h"
#import "WLConfidenceLevel.h"
@protocol WLTriggerCallback;

/**
 * A trigger for exiting an area. The device must first have been inside the area and
 * then exited the area in order for the trigger to activate. In order to re-activate
 * the device must first enter the area.
 * <p>
 * This class, like most classes used for configuring location services, returns
 * a reference to this object from its setters, to enable chaining calls.
 */
@interface WLWifiExitTrigger : AbstractWifiAreaTrigger {
}


- (id) init  ;
- (WLWifiExitTrigger*) clone  ;
- (WLWifiExitTrigger*) setAreaAccessPoints : (NSMutableArray*) areaFilters ;
- (WLWifiExitTrigger*) setOtherAccessPointsAllowed : (BOOL) otherAccessPointsAllowed ;
- (WLWifiExitTrigger*) setCallback : (id<WLTriggerCallback>) callbackFunction ;
- (WLWifiExitTrigger*) setEvent : (NSMutableDictionary*) event ;
- (WLWifiExitTrigger*) setTransmitImmediately : (BOOL) transmitImmediately ;
- (WLWifiExitTrigger*) setConfidenceLevel : (WLConfidenceLevel) confidenceLevel ;

@end

