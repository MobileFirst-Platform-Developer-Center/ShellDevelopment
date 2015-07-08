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

#define _AbstractWifiDwellTrigger_H_
#import "AbstractWifiAreaTrigger.h"

/**
 * A trigger definition that deals with dwelling in an area of visible access points
 */
@interface AbstractWifiDwellTrigger : AbstractWifiAreaTrigger {
	@private
	long long dwellingTime;
}


- (id) init  ;
/**
      * @return The minimum time the device needs to be inside or outside
      * the area before the trigger will be activated.
      */
- (long long) getDwellingTime  ;
/**
      * @param dwellingTime a time defined in milliseconds. It defines how long the device must be inside, or outside,
      * the area before the trigger is activated.
      */
- (AbstractWifiDwellTrigger*) setDwellingTime : (long long) dwellingTime ;

@end

