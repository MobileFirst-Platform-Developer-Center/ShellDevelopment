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

#define _WLPolygon_H_
#import <Foundation/Foundation.h>
#import "WLArea.h"
@class WLCoordinate;
@protocol AreaVisitor;

/**
 * A polygon is defined by a list of coordinates.
 * This class is immutable.
 */
@interface WLPolygon : NSObject  <WLArea> {
	@public
/**
	 * The number of coordinates in this polygon
	 */
	int length;
	@private
	NSMutableArray* coordinates;
}



/**
	 * @param coordinates The coordinates of the polygon
	 * @throws IllegalArgumentException if coordinates is null or empty
	 */
- (id) init : (NSMutableArray*) coordinates ;
/**
	 * @return A copy of the coordinates that make up this polygon
	 */
- (NSMutableArray*) getCoordinates  ;
- (NSString*) description  ;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;
/**
	 * @param idx The index of the coordinate to retrieve
	 * @return The coordinate with index <code>idx</code> in the list.
	 */
- (WLCoordinate*) get : (int) idx ;
/**
	 * @exclude
	 */
- (NSObject*) accept : (id<AreaVisitor>) visitor ;

@end

