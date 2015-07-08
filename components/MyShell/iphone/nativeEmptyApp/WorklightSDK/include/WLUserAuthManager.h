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
//  WLUserAuthManager.h
//  WorklightStaticLibProject
//

#import <Foundation/Foundation.h>

@interface WLUserAuthManager : NSObject

/**
 * Get the alias used for client user x509 certificate.  Entity is currently not used.
 */
+ (NSString *) getAlias:(NSString *)entity;

/**
 * Get certififacte Label as used when saved in keychain.
 */
+ (NSData *) getCertificateIdentifierFromEntity:(NSString *)provisioningEntity;

/**
 * Get private/public key Label as used when saved in keychain.
 */
+ (NSData *) getKeyIdentifier:(BOOL)isPublic withEntity:(NSString *)provisioningEntity;

/**
 * Checks to see if a user auth certificate exists in the keychain and that it is a valid certificate.
 */
+(BOOL) doesValidCertificateExist:(NSString *)provisioningEntity;

/**
 * Cleans User Cert Credential from KeyChain
 */
+ (BOOL) clearUserCertCredentialsFromKeyChain:(NSString *)provisioningEntity;

@end

