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

#define _WLWifiConnectTrigger_H_
#import "AbstractWifiFilterTrigger.h"
@class WLWifiAccessPointFilter;
@protocol WLTriggerCallback;

/**
 * A trigger that activates when connecting for the first time to an access point that
 * passes the policy's filters. The trigger can re-activate only after disconnecting
 * or connecting to an access point which doesn't pass the policy's filters.
 * @see WLWifiAcquisitionPolicy#setAccessPointFilters(java.util.List)
 * <p>
 * This class, like most classes used for configuring location services, returns
 * a reference to this object from its setters, to enable chaining calls. 
 */
@interface WLWifiConnectTrigger : AbstractWifiFilterTrigger {
}


- (id) init  ;
- (WLWifiConnectTrigger*) clone  ;
- (WLWifiConnectTrigger*) setCallback : (id<WLTriggerCallback>) callbackFunction ;
- (WLWifiConnectTrigger*) setEvent : (NSMutableDictionary*) event ;
- (WLWifiConnectTrigger*) setConnectedAccessPoint : (WLWifiAccessPointFilter*) connectedAccessPoint ;
- (WLWifiConnectTrigger*) setTransmitImmediately : (BOOL) transmitImmediately ;

@end

