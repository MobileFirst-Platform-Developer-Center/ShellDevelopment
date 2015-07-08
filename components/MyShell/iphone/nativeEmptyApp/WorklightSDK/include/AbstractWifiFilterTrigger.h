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

#define _AbstractWifiFilterTrigger_H_
#import "WLWifiTrigger.h"
@class WLWifiAccessPointFilter;
@class WLWifiAcquisitionPolicy;

/**
 * Parent class of connected and disconnected triggers
 */
@interface AbstractWifiFilterTrigger : WLWifiTrigger {
	@private
	WLWifiAccessPointFilter* connectedAccessPoint;
}


- (id) init  ;
+ (BOOL) doesPolicyIntersectWithFilter : (WLWifiAcquisitionPolicy*) policy : (WLWifiAccessPointFilter*) filter ;
/**
	 * @exclude
	 */
- (BOOL) validate : (WLWifiAcquisitionPolicy*) policy ;
/**
	 * @return the filter which the connected Wifi access point must match in order for the trigger to activate.
	 */
- (WLWifiAccessPointFilter*) getConnectedAccessPoint  ;
/**
	 * @param connectedAccessPoint the filter which the connected Wifi access point must match in order for the trigger
	 * to activate.
	 * @return A reference to this object.
	 */
- (AbstractWifiFilterTrigger*) setConnectedAccessPoint : (WLWifiAccessPointFilter*) connectedAccessPoint ;

@end

