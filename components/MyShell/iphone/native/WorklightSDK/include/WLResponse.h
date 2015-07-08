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
//  WLResponse.h
//  Worklight SDK
//
//  Created by Benjamin Weingarten on 3/7/10.

//

#import <Foundation/Foundation.h>
#import "WLProcedureInvocationResult.h"

/*
 * This class contains the result of a procedure invocation. Worklight passes this class as an argument to the 
 * delegate methods of WLClient invokeProcedure methods.
 */
@interface WLResponse : NSObject {
	int status;
	WLProcedureInvocationResult *invocationResult;
	NSObject *invocationContext;
	NSString *responseText;
}

// Retrieves the HTTP status from the response.
@property (nonatomic) int status;
// The response data from the server.
@property (nonatomic, retain) WLProcedureInvocationResult *invocationResult;
// The invocation context object passed when calling invokeProcedure
@property (nonatomic, retain) NSObject *invocationContext;
// The original response text from the server.
@property (nonatomic, retain) NSString *responseText;

-(NSDictionary *)getResponseJson;


@end
