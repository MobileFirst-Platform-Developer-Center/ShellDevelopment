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

//
//  WLDelegate.h
//  Worklight SDK
//
//  Created by Benjamin Weingarten on 8/22/10.

//

#import <UIKit/UIKit.h>
#import "WLResponse.h"
#import "WLFailResponse.h"

/*
 * A protocol that defines methods that a delegate for the WLClient invokeProcedure method should implement,
 * to receive notifications about the success or failure of the method call.
 */
@protocol WLDelegate <NSObject>

/*
 * This method will be called upon a successful call to WLCLient invokeProcedure with the WLResponse containing the 
 * results from the server, along with any invocation context object and status.
 */
-(void)onSuccess:(WLResponse *)response;

/*
 * This method will be called if any kind of failure occurred during the execution of WLCLient invokeProcedure. 
 * The WLFailResponse instance contains the error code and error message, and optionally the results from the server, 
 * along with any invocation context object and status.
 */
-(void)onFailure:(WLFailResponse *)response;


@end
