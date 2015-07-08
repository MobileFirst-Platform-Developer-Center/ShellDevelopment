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

#define _WLCoordinate_H_
#import <Foundation/Foundation.h>

/**
 * A coordinate on the globe
 */
@interface WLCoordinate : NSObject {
	@private
	double latitude;
	double longitude;
	double accuracy;
	NSNumber* altitude;
	NSNumber* altitudeAccuracy;
	NSNumber* heading;
	NSNumber* speed;
}



/**
	 * @param latitude The coordinate's latitude value
	 * @param longitude The coordinate's longitude value
	 */
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;
/**
	 * @param latitude The coordinate's latitude value
	 * @param longitude The coordinate's longitude value
	 * @param accuracy The coordinate's accuracy
	 */
- (id)initWithLatitude:(double)latitude longitude:(double)longitude accuracy:(double)accuracy;
- (id)initWithLatitude:(double)latitude longitude:(double)longitude altitude:(NSNumber*)altitude accuracy:(double)accuracy altitudeAccuracy:(NSNumber*)altitudeAccuracy heading:(NSNumber*)heading speed:(NSNumber*)speed;
- (NSString*) description  ;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;
/**
      * @return the coordinate's latitude.
      */
- (double) getLatitude  ;
/**
      * @return the coordinate's longitude.
      */
- (double) getLongitude  ;
/**
      * @return The coordinate's accuracy, in meters.
      */
- (double) getAccuracy  ;
/**
      * @return The coordinate's altitude, in meters. Optional - may be null.
      */
- (NSNumber*) getAltitude  ;
/**
      * @return The coordinate's altitude accuracy, in meters. Optional - may be null.
      */
- (NSNumber*) getAltitudeAccuracy  ;
/**
      * @return The coordinate's heading, in degrees [0-360). Optional - may be null.
      */
- (NSNumber*) getHeading  ;
/**
      * @return The coordinate's speed, in meters per second. Optional - may be null.
      */
- (NSNumber*) getSpeed  ;

@end

