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

#define _WLAcquisitionFailureCallbacksConfiguration_H_
#import <Foundation/Foundation.h>
@protocol WLGeoFailureCallback;
@protocol WLWifiFailureCallback;

/**
 * Configuration of the callbacks to be called when there is an acquisition failure.
 * <p>
 * This class, like most classes used for configuring location services, returns
 * a reference to this object from its setters, to enable chaining calls. 
 */
@interface WLAcquisitionFailureCallbacksConfiguration : NSObject  <NSCopying> {
	@private
	id<WLGeoFailureCallback> geoFailureCallback;
	id<WLWifiFailureCallback> wifiFailureCallback;
}


- (id) init  ;
/**
	 * @return The wifi failure callback. The default is <code>null</code>.
	 */
- (id<WLWifiFailureCallback>) getWifiFailureCallback  ;
/**
	 * @return The geo failure callback. The default is <code>null</code>.
	 */
- (id<WLGeoFailureCallback>) getGeoFailureCallback  ;
/**
	 * Sets the wifi failure callback.
	 * 
	 * @param wifiFailureCallbacks the callback to set.
	 * @return A reference to this object.
	 */
- (WLAcquisitionFailureCallbacksConfiguration*) setWifiFailureCallback : (id<WLWifiFailureCallback>) wifiFailureCallbacks ;
/**
	 * Sets the geo failure callback.
	 * 
	 * @param geoFailureCallbacks the callback to set.
	 * @return A reference to this object.
	 */
- (WLAcquisitionFailureCallbacksConfiguration*) setGeoFailureCallback : (id<WLGeoFailureCallback>) geoFailureCallbacks ;
- (WLAcquisitionFailureCallbacksConfiguration*) clone  ;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;

@end

