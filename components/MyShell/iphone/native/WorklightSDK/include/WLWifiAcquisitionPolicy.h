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

#define _WLWifiAcquisitionPolicy_H_
#import <Foundation/Foundation.h>

/**
* Controls how WiFi locations will be acquired.
* <p>
* This class, like most classes used for configuring location services, returns
* a reference to this object from its setters, to enable chaining calls. 
*/
@interface WLWifiAcquisitionPolicy : NSObject  <NSCopying> {
	@private
	int signalStrengthThreshold;
	int interval;
	NSMutableArray* accessPointFilters;
}


- (id) init  ;
/**
	 * @return the signal strength threshold as a percentage.
	 * The default value is 15.
	 * @see #setSignalStrengthThreshold(int) 
	 */
- (int) getSignalStrengthThreshold  ;
/**
	 * @param signalStrengthThreshold specifies the signal strength threshold as a percentage. 
	 * Access points whose signal is weaker than this threshold are not reported in the list of visible access points. 
	 * However, the connected access point is still visible, even when its signal strength is below this threshold.
	 * The default value is 15.
	 * @return A reference to this object.
	 */
- (WLWifiAcquisitionPolicy*) setSignalStrengthThreshold : (int) signalStrengthThreshold ;
/**
	 * @param interval A polling interval, specified in milliseconds. WiFi polling is performed each interval.
	 * The default value is 10000 (10 seconds).
	 * @return A reference to this object.
	 */
- (WLWifiAcquisitionPolicy*) setInterval : (int) interval ;
/**
	 * @param accessPointFilters Only WiFi access points which match one of the access point filters will be visible. If the connected
	 * access point does not match any of the filters, it too will not be visible when using on-going acquisition (see
	 * {@link WLDevice#startAcquisition(com.worklight.location.api.WLLocationServicesConfiguration)}).
	 * If <code>null</code> will be treated as an empty list.
	 * @return A reference to this object.
	 */
- (WLWifiAcquisitionPolicy*) setAccessPointFilters : (NSMutableArray*) accessPointFilters ;
/**
	 * @return The access point filters; only Only WiFi access points which match at least one of these filters will be visible.
	 */
- (NSMutableArray*) getAccessPointFilters  ;
/**
	 * @return The polling interval, specified in milliseconds. WiFi polling is performed each interval.
      * The default value is 10000 (10 seconds).
	 */
- (int) getInterval  ;
- (WLWifiAcquisitionPolicy*) clone  ;
/*
	 * (non-Javadoc)
	 * @see java.lang.Object#hashCode()
	 */
- (int) hash  ;
/*
	 * (non-Javadoc)
	 * @see java.lang.Object#equals(java.lang.Object)
	 */
- (BOOL) isEqual : (NSObject*) obj ;

@end

