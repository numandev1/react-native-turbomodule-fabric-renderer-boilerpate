#import <Foundation/Foundation.h>

#import <React-Codegen/MyApplicationLibrary/MyApplicationLibrary.h>

/**
 * Sample iOS-specific impl of a TurboModule, conforming to the spec protocol.
 * This class is also 100% compatible with the NativeModule system.
 */
@interface MyApplicationLibrary : NSObject <MyApplicationLibrarySpec>

@end
