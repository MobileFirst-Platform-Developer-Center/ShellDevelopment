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

#define _AbstractWifiAreaTrigger_H_
#import "WLConfidenceLevel.h"
#import "WLWifiTrigger.h"
@class WLWifiAcquisitionPolicy;

/**
 * A trigger definition handling wifi areas (a list of {@link WLWifiAccessPointFilter}).
 */
@interface AbstractWifiAreaTrigger : WLWifiTrigger {
	@private
	NSMutableArray* areaAccessPoints;
	BOOL otherAccessPointsAllowed;
	WLConfidenceLevel confidenceLevel;
}


- (id) init  ;
- (BOOL) validate : (WLWifiAcquisitionPolicy*) policy ;
/**
	 * @return the filters which specify which access points are considered by the trigger.
	 */
- (NSMutableArray*) getAreaAccessPoints  ;
/**
	 * @return the confidence level used for determining WiFi access point visibility.
	 * The default is {@link WLConfidenceLevel#LOW}.	 
	 */
- (WLConfidenceLevel) getConfidenceLevel  ;
/**
	 * @return whether only the access points specified for areaAccessPoints should be visible or not.
	 * The default value is false.
	 * @see #setOtherAccessPointsAllowed(boolean)
	 */
- (BOOL) areOtherAccessPointsAllowed  ;
/**
	 * @param areaAccessPoints Defines which access points are considered by the trigger. Wildcards
	 * are not allowed.
	 * @return A reference to this object.
	 */
- (AbstractWifiAreaTrigger*) setAreaAccessPoints : (NSMutableArray*) areaAccessPoints ;
/**
	 * @param otherAccessPointsAllowed indicates whether only the access points specified for areaAccessPoints should be visible,
	 * or whether other access points might be visible as well, where visibility is determined according to the WiFi acquisition policy.
	 * If the value is true, the trigger can be activated even when other access points are visible.
	 * If the value is false, this trigger is not activated when other access points are visible. The default value is false.
	 * @return A reference to this object.
	 */
- (AbstractWifiAreaTrigger*) setOtherAccessPointsAllowed : (BOOL) otherAccessPointsAllowed ;
/**
	 * Only access points whose signal strength meets the confidence level are considered visible.
	 * @param confidenceLevel specifies the minimum signal strength necessary for an access point.
	 * The default is {@link WLConfidenceLevel#LOW}.
	 * @return A reference to this object.
	 * @see WLConfidenceLevel
	 */
- (AbstractWifiAreaTrigger*) setConfidenceLevel : (WLConfidenceLevel) confidenceLevel ;

@end

