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

#define _WLWifiAccessPointFilter_H_
#import <Foundation/Foundation.h>
@class WLWifiAccessPoint;

/**
 * Specifies which WiFi access points to detect.
 * <p>
 * The filter has an SSID name specification, and optionally a MAC specification.
 * The MAC specification can be a wildcard value, represented by {@link #WILDCARD}, which is an asterisk (*), 
 * in which case all MACs for the SSID are reported.
 * <p>
 * If no MAC is specified, and the given SSID is visible, then only its SSID is reported;
 * only a single {@link WLWifiAccessPoint}} instance will result from acquisition, regardless of the number of access points that have the SSID.
 * <p>
 * The SSID specification can be a wildcard, represented by {@link #WILDCARD}, which is an asterisk (*), in which case all visible networks are reported.
 */
@interface WLWifiAccessPointFilter : NSObject {
	@private
	NSString* ssid;
	NSString* mac;
}



+ (void) initialize  ;

/**
	 * Creates a new filter that accepts any MAC address
	 * 
	 * @param ssid The SSID specification. Cannot be null.
	 */
- (id) init : (NSString*) ssid ;
/**
	 * Creates a new filter
	 * 
	 * @param ssid The SSID specification. Cannot be null.
	 * @param mac The MAC specification
	 */
- (id)initWithSSID:(NSString*)ssid MAC:(NSString*)mac;
/**
	 * @param point The access point to check
	 * @return <code>true</code> iff the point's SSID and MAC match the filter's SSID and MAC
	 * @exclude
	 */
- (BOOL) matches : (WLWifiAccessPoint*) point ;
/**
	 * Returns true if there is a {@link WLWifiLocation} that can be matched by both filters
	 * 
	 * @param filter
	 * @return <code>true</code> There could exists a {@link WLWifiAccessPoint} that could be matched by both filters
	 * @exclude
	 */
- (BOOL) isIntersectionNotEmpty : (WLWifiAccessPointFilter*) filter ;
/**
	 * @return The MAC specification
	 */
- (NSString*) getMac  ;
/**
	 * @return The SSID specification
	 */
- (NSString*) getSsid  ;
- (NSString*) description  ;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;

@end

extern NSString* WILDCARD;


