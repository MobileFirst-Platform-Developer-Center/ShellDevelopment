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
//  WLProcedureInvocationResult.h
//  Worklight SDK
//
//  Created by Benjamin Weingarten on 6/29/10.

//

#import <Foundation/Foundation.h>

/*
 * Contains the result of invoking a backend service, including statuses and data items retrieved by the adapter 
 * function from the server.
 */
@interface WLProcedureInvocationResult : NSObject {

		
	@private 
	NSMutableDictionary *response;
	NSDictionary *result;
	NSMutableArray *recordNames;
	NSArray *errors;
	NSArray *warnings;
	NSArray *info;
	NSNumber *success;
}

// Returns an NSDictionary which represents the JSON response returned by the Worklight Server.
@property (nonatomic, readonly) NSDictionary *response;

-(id)initWithInvocationResultDictionary:(NSDictionary *)theResult;

// Returns YES if the invocation was successful, and NO otherwise
-(BOOL)isSuccessful;

// Returns an NSArray of applicative error messages collected by the Server during the procedure invocation.
-(NSArray *)procedureInvocationErrors;

-(NSArray *)warnMessages;
-(NSArray *)infoMessages;
@end
