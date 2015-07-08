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

#define _WLWifiLocation_H_
#import "AbstractPosition.h"
@class WLWifiAccessPoint;

/**
 * A wifi location as determined by the visible access points and connected access point, filtered by a policy.
 */
@interface WLWifiLocation : AbstractPosition {
	@private
	NSMutableArray* accessPoints;
	WLWifiAccessPoint* connectedAccessPoint;
	NSNumber* connectedSignalStrength;
}



/**
	 * Creates a new {@link WLWifiLocation}
	 * 
	 * @param accessPoints The access points acquired, which have passed the filter of the policy
	 * @param acquisitionTime The time of the acquisition
	 * @exclude
	 */
- (id)initWithAccessPoints:(NSMutableArray*)accessPoints connectedAccessPoint:(WLWifiAccessPoint*)connectedAccessPoint connectedSignalStrength:(NSNumber*)connectedSignalStrength acquisitionTime:(long long)acquisitionTime;
- (id) init  ;
/**
	 * @return Filtered access points (a subset of all visible access points filtered according to policy).
	 */
- (NSMutableArray*) getAccessPoints  ;
/**
	 * @return Information about the connected access point if it is passes the policy filters.
	 * If it doesn't pass the policy filters, then returns <code>null</code>.
	 */
- (WLWifiAccessPoint*) getConnectedAccessPoint  ;
/**
	 * @return The signal strength for the connected access point as a percentage. Returns <code>null</code> if
	 *         {@link #getConnectedAccessPoint()} returns <code>null</code>.
	 */
- (NSNumber*) getConnectedSignalStrength  ;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;
- (NSString*) description  ;

@end

