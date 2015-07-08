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

#define _WLAcquisitionPolicy_H_
#import <Foundation/Foundation.h>
@class WLGeoAcquisitionPolicy;
@class WLWifiAcquisitionPolicy;

/**
 * The acquisition policy controls how Geo and WiFi locations will be acquired.
 * The policy should be set in an instance of {@link WLLocationServicesConfiguration} which 
 * is then passed to {@link WLDevice#startAcquisition(WLLocationServicesConfiguration)}
 * <p>
 * This class, like most classes used for configuring location services, returns
 * a reference to this object from its setters, to enable chaining calls. 
 */
@interface WLAcquisitionPolicy : NSObject  <NSCopying> {
	@private
	WLWifiAcquisitionPolicy* wifiPolicy;
	WLGeoAcquisitionPolicy* geoPolicy;
}



/**
	 * Creates a new policy with the default (<code>null</code>) policies.<br>
	 * This policy can be used to stop all on-going acquisition.
	 */
- (id) init  ;
/**
	 * Sets the WiFi acquisition policy. When <code>null</code>, it can be used to stop WiFi acquisition.
	 * 
	 * @param wifiPolicy the WiFi acquisition policy to set.
	 * @return A reference to this object.
	 */
- (WLAcquisitionPolicy*) setWifiPolicy : (WLWifiAcquisitionPolicy*) wifiPolicy ;
/**
	 * @return The WiFi acquisition policy.
	 */
- (WLWifiAcquisitionPolicy*) getWifiPolicy  ;
/**
	 * Sets the Geo acquisition policy. When <code>null</code>, it can be used to stop Geo acquisition.
	 * 
	 * @param geoPolicy the Geo acquisition policy to set.
	 * @return A reference to this object.
	 */
- (WLAcquisitionPolicy*) setGeoPolicy : (WLGeoAcquisitionPolicy*) geoPolicy ;
/**
	 * @return The Geo acquisition policy.
	 */
- (WLGeoAcquisitionPolicy*) getGeoPolicy  ;
- (WLAcquisitionPolicy*) clone  ;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;

@end

