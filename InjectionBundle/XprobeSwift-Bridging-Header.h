//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#import "../XprobePlugin/Classes/Xtrace.h"
#import "../XprobePlugin/Classes/Xprobe.h"

@interface NSObject(InjectionSweep)
- (void)bsweep;
@end

@interface NSObject(RunXCTestCase)
+ (void)runXCTestCase:(Class)aTestCase;
@end
