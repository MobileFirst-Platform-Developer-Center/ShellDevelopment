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

#define _AbstractGeoAreaTrigger_H_
#import "WLConfidenceLevel.h"
#import "WLGeoTrigger.h"
@protocol WLArea;

/**
 * Defines parameter for Geo-WLTriggersConfiguration with area considerations
 */
@interface AbstractGeoAreaTrigger : WLGeoTrigger {
	@private
	id<WLArea> area;
	double bufferZoneWidth;
	WLConfidenceLevel confidenceLevel;
}


- (id) init  ;
/**
     * @return The trigger's area.
     */
- (id<WLArea>) getArea  ;
/**
     * @return The trigger's buffer zone width. The value indicates in meters how much to change the area.
     * It can have either a positive or negative value. If it has a positive value, the area becomes bigger.
     * If it has a negative value, the area becomes smaller. All geofence triggers operate on this new area.
     * The default value is 0, which leaves the area unchanged.
     */
- (double) getBufferZoneWidth  ;
/**
     * @param area the area for which the trigger will activate.
     * @return A reference to this object.
     */
- (AbstractGeoAreaTrigger*) setArea : (id<WLArea>) area ;
/**
     * @param bufferZoneWidth the bufferZoneWidth to set. Its value indicates in meters how much to change the area.
     * It can have either a positive or negative value. If it has a positive value, the area becomes bigger.
     * If it has a negative value, the area becomes smaller. All geofence triggers operate on this new area.
     * The default value is 0, which leaves the area unchanged.
     * @return A reference to this object.
     */
- (AbstractGeoAreaTrigger*) setBufferZoneWidth : (double) bufferZoneWidth ;
/**
     * @return the confidenceLevel. This indicates how a position's accuracy is to be taken into account.
     * @see WLConfidenceLevel
     */
- (WLConfidenceLevel) getConfidenceLevel  ;
/**
     * @param confidenceLevel the confidenceLevel to set. This indicates how a position's accuracy is to be taken into account.
     * @return A reference to this object.
     * @see WLConfidenceLevel
     */
- (AbstractGeoAreaTrigger*) setConfidenceLevel : (WLConfidenceLevel) confidenceLevel ;

@end

