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

#define _WLTriggersConfiguration_H_
#import <Foundation/Foundation.h>

/**
 * A configuration object containing the triggers.
 * The policy should be set in an instance of {@link WLLocationServicesConfiguration} which 
 * is then passed to {@link WLDevice#startAcquisition(WLLocationServicesConfiguration)}
 * <p>
 * This class, like most classes used for configuring location services, returns
 * a reference to this object from its setters, to enable chaining calls. 
 */
@interface WLTriggersConfiguration : NSObject  <NSCopying> {
	@private
	NSMutableDictionary* geoTriggers;
	NSMutableDictionary* wifiTriggers;
}



/**
	 * Creates a new instance with default (empty) triggers.
	 */
- (id) init  ;
/**
	 * Sets the Geo triggers. 
	 * 
	 * @param geoTriggers The new triggers to set. Each trigger needs a unique key in the map. If <code>null</code>, then an empty map will be set.
	 * @return A reference to this object.
	 */
- (WLTriggersConfiguration*) setGeoTriggers : (NSMutableDictionary*) geoTriggers ;
/**
	 * Sets the WiFi triggers.
	 * 
      * @param wifiTriggers The new triggers to set. Each trigger needs a unique key in the map. If <code>null</code>, then an empty map will be set.
	 * @return A reference to this object.
	 */
- (WLTriggersConfiguration*) setWifiTriggers : (NSMutableDictionary*) wifiTriggers ;
/**
	 * @return The Geo triggers
	 */
- (NSMutableDictionary*) getGeoTriggers  ;
/**
	 * @return The WiFi triggers
	 */
- (NSMutableDictionary*) getWifiTriggers  ;
- (WLTriggersConfiguration*) clone  ;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;

@end

