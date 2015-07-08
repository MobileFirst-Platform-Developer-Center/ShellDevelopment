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
//  WLProcedureInvocationData.h
//  Worklight SDK
//
//  Created by Benjamin Weingarten on 3/9/10.

//

#import <Foundation/Foundation.h>

/*
 * This class holds all data necessary for invoking a procedure, including:
 * 1) The name of the adapter and procedure to invoke
 * 2) Parameters required by the procedure
 */
@interface WLProcedureInvocationData : NSObject {
	@private NSString *adapter;
	NSString *procedure;
	
	// Array of primitive types: (NSString, NSNumber) BOOL values should be created as 
	NSArray *parameters;
	BOOL compressResponse;
}

// Sets the procedure parameters
// The Array should contain Objects that can be parsed via JSON. NSString and NSNumber work best.
// For Boolean values, use [NSNumber numberWithBool:]
@property (nonatomic, retain) NSArray *parameters;


-(NSDictionary *)toDictionary;

// Initializes with the adapter name and the procedure name.
-(id)initWithAdapterName:(NSString *)adapter procedureName:(NSString *)procedure;
-(id)initWithAdapterName:(NSString *)theAdapter procedureName:(NSString *)theProcedure compressResponse:(BOOL)isCompressResponse;
-(void)setCompressResponse :(BOOL)isCompressResponse;
@end
