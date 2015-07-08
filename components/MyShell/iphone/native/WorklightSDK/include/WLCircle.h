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

#define _WLCircle_H_
#import <Foundation/Foundation.h>
#import "WLArea.h"
@class WLCoordinate;
@protocol AreaVisitor;

/**
 * A circle, defined by its center point and a radius.
 * This class is immutable.
 */
@interface WLCircle : NSObject  <WLArea> {
	@private
/**
	 * The circle's radius in meters
	 */
	double radius;
/**
	 * The circle's center
	 */
	WLCoordinate* center;
}



/**
	 * Creates a new circle
	 * 
	 * @param center The circle's center
	 * @param radius The circle's radius (in meters)
	 */
- (id)initWithCenter:(WLCoordinate*)center radius:(double)radius;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;
/**
	 * @exclude
	 */
- (NSObject*) accept : (id<AreaVisitor>) visitor ;
/**
      * @return the circle's radius in meters.
      */
- (double) getRadius  ;
/**
      * @return the center of the circle.
      */
- (WLCoordinate*) getCenter  ;

@end

