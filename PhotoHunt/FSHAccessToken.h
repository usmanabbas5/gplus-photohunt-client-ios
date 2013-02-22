//
//  FSHAccessToken.h
//  PhotoHunt

#import "GTLObject.h"

// Object used to pass an OAuth 2.0 access token to PhotoHunt.
@interface FSHAccessToken : GTLObject

// The OAuth 2.0 access token.
@property (copy) NSString* access_token;

@end