//
//  NSString+AESCrypt.h
//
//  AES128Encryption + Base64Encoding
//

#import <Foundation/Foundation.h>
#import "NSData+AESCrypt.h"

@interface NSString (AESCrypt)

- (NSString *)AES128EncryptWithKey:(NSString *)key;

@end
