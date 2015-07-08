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

#define _WLLocationServicesConfiguration_H_
#import <Foundation/Foundation.h>
@class WLAcquisitionPolicy;
@class WLTriggersConfiguration;

/**
 * The configuration for on-going acquisition, including the
 * acquisition policy, triggers, and failure callbacks for handling acquisition errors.
 * <p>
 * This class, like most classes used for configuring location services, returns
 * a reference to this object from its setters, to enable chaining calls. 
 * 
 * @see WLDevice#startAcquisition(WLLocationServicesConfiguration)
 */
@interface WLLocationServicesConfiguration : NSObject  <NSCopying> {
	@private
	WLAcquisitionPolicy* policy;
	WLTriggersConfiguration* triggers;
	NSMutableArray* failureCallbacks;
}


- (id) init  ;
/**
	 * @return The failure callbacks. During on-going acquisition, the failure callbacks will be called when errors occur.
	 */
- (NSMutableArray*) getFailureCallbacks  ;
/**
	 * @param failureCallbacks During on-going acquisition, the failure callbacks will be called when errors occur.
	 * @return A reference to this object.
	 */
- (WLLocationServicesConfiguration*) setFailureCallbacks : (NSMutableArray*) failureCallbacks ;
/**
	 * @return The acquisition policy
	 */
- (WLAcquisitionPolicy*) getPolicy  ;
/**
	 * @param policy the acquisition policy to set.
	 * @return A reference to this object.
	 * @see WLDevice#startAcquisition(WLLocationServicesConfiguration)
	 */
- (WLLocationServicesConfiguration*) setPolicy : (WLAcquisitionPolicy*) policy ;
/**
	 * @return The trigger configurations
	 */
- (WLTriggersConfiguration*) getTriggers  ;
/**
	 * @param triggers the triggers to be evaluated during ongoing acquisition.
	 * @return A reference to this object.
	 * @see WLDevice#startAcquisition(WLLocationServicesConfiguration)
	 */
- (WLLocationServicesConfiguration*) setTriggers : (WLTriggersConfiguration*) triggers ;
- (WLLocationServicesConfiguration*) clone  ;
- (int) hash  ;
- (BOOL) isEqual : (NSObject*) obj ;

@end

