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

#define _WLGeoPosition_H_
#import "AbstractPosition.h"
@class WLCoordinate;

/**
 * An acquisition of a {@link WLCoordinate}.
 */
@interface WLGeoPosition : AbstractPosition {
	@private
	WLCoordinate* coordinate;
}



/**
	 * Creates a new WLGeoPosition with acquisition time
	 * 
	 * @param coordinate The coordinate acquired
	 * @param acquisitionTime The time of the acquisition
	 * @exclude
	 */
- (id)initWithCoordinate:(WLCoordinate*)coordinate acquisitionTime:(long long)acquisitionTime;
- (id) init  ;
- (NSString*) description  ;
/**
	 * @return The acquired coordinate
	 */
- (WLCoordinate*) getCoordinate  ;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;

@end

