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

#define _WLGeoAcquisitionPolicy_H_
#import <Foundation/Foundation.h>

/**
* Controls how Geo positions will be acquired.
* <p>
* This class, like most classes used for configuring location services, returns
* a reference to this object from its setters, to enable chaining calls. 
*/
@interface WLGeoAcquisitionPolicy : NSObject  <NSCopying> {
	@private
	long long maximumAge;
	long long timeout;
	BOOL enableHighAccuracy;
	int desiredAccuracy;
	int minChangeDistance;
	int minChangeTime;
}


- (id) init  ;
+ (void) initialize  ;

/**
	 * Used to save power. Accurate location information is not provided. 
	 * @return a policy with the following preset values:
	 * <ul>
	 *   <li><code>enableHighAccuracy = false</code></li>
	 *   <li><code>minChangeTime = 300000</code> (5 minutes)</li>
	 *   <li><code>minChangeDistance = 1000</code> (1 kilometer)</li>
	 *   <li><code>maximumAge = 300000</code> (5 minutes)</li>
	 * </ul>
	 */
+ (WLGeoAcquisitionPolicy*) getPowerSavingProfile  ;
/**
      * Used to track devices, but at a rough granularity. 
      * @return a policy with the following preset values:
      * <ul>
      *   <li><code>enableHighAccuracy = true</code></li>
      *   <li><code>desiredAccuracy = 200</code> (200 meters)</li>
      *   <li><code>minChangeTime = 30000</code> (30 seconds)</li>
      *   <li><code>minChangeDistance = 50</code> (50 meters)</li>
      *   <li><code>maximumAge = 60000</code> (60 seconds)</li>
      * </ul>
      */
+ (WLGeoAcquisitionPolicy*) getRoughTrackingProfile  ;
/**
      * Used to track devices, and get the best position information available.
      * @return a policy with the following preset values:
      * <ul>
      *   <li><code>enableHighAccuracy = true</code></li>
      *   <li><code>maximumAge = 100</code> (100 milliseconds)</li>
      * </ul>
      */
+ (WLGeoAcquisitionPolicy*) getLiveTrackingProfile  ;
/**
	 * @return the maximum age. A cached position can be returned from acquisition if the age of that position is less than the returned value.
	 * The default and minimum value is 100 milliseconds.
	 */
- (double) getMaximumAge  ;
/**
	 * Set the maximum age of positions returned, in milliseconds.
	 * A cached position can be returned from acquisition if the age of that position is less than the specified value. 
	 * The default and minimum value is 100 milliseconds.
	 * @return A reference to this object.
	 */
- (WLGeoAcquisitionPolicy*) setMaximumAge : (long long) maximumAge ;
/**
	 * @return the duration, in milliseconds, this policy allows to wait for acquisitions before a {@link WLGeoError} is
	 *         sent with code {@link WLGeoErrorCodes#TIMEOUT}. -1 is used to indicate an infinite timeout
	 */
- (long long) getTimeout  ;
/**
	 * Set the timeout interval for position acquisition, specified in milliseconds. The default value is -1 which indicates an infinite timeout.
	 * If no position is acquired since the last position was acquired, or since {@link WLDevice#startAcquisition(com.worklight.location.api.WLLocationServicesConfiguration)}
	 * was called, then the failure function will be called.
	 * @return A reference to this object.
	 */
- (WLGeoAcquisitionPolicy*) setTimeout : (long long) timeout ;
/**
	 * @return true if it is possible to obtain high-accuracy measurements, for example by using GPS.
	 */
- (BOOL) isEnableHighAccuracy  ;
/**
	 * Control whether it is possible to obtain high-accuracy measurements, for example by using GPS.
	 * When true, the value of <code>desiredAccuracy</code> will be taken into account.
	 * @return A reference to this object.
	 */
- (WLGeoAcquisitionPolicy*) setEnableHighAccuracy : (BOOL) enableHighAccuracy ;
/**
	 * @return the desired accuracy in meters. This is only taken into account
	 * when {@link #isEnableHighAccuracy()} returns <code>true</code>.
	 */
- (int) getDesiredAccuracy  ;
/**
	 * Set the desired accuracy in meters. This is only taken into account
	 * when {@link #isEnableHighAccuracy()} returns <code>true</code>.
	 * @return A reference to this object.
	 */
- (WLGeoAcquisitionPolicy*) setDesiredAccuracy : (int) desiredAccuracy ;
/**
	 * @return the minimum distance in meters that the position must change by since the last update in order to receive a new updated position.
	 * The default value is 0.
	 */
- (int) getMinChangeDistance  ;
/**
	 * Set the minimum distance in meters that the position must change by since the last update in order to receive a new updated position.
	 * Higher values can improve battery life, although the effect is generally less than that of {@link #setMinChangeTime(int)}.
	 * The default value is 0.
	 * 
	 * @param minChangeDistance the minimum distance in meters that the position must change by since the last update in order to receive a new updated position.
	 * @return A reference to this object.
	 */
- (WLGeoAcquisitionPolicy*) setMinChangeDistance : (int) minChangeDistance ;
/**
	 * @return the minimum time in milliseconds between updates. The default value is 0.
	 */
- (int) getMinChangeTime  ;
/**
	 * The minimum time in milliseconds between updates. Higher values can improve battery life.
	 * @return A reference to this object.
	 */
- (WLGeoAcquisitionPolicy*) setMinChangeTime : (int) minChangeTime ;
- (WLGeoAcquisitionPolicy*) clone  ;
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



