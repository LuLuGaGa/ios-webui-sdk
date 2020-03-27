#import <WebKit/WebKit.h>
#if SWIFT_PACKAGE
#include <QueueITLibrary/QueueITEngine.h>
#else
#import "QueueITEngine.h"
#endif

@interface QueueITWKViewController : UIViewController

-(instancetype)initWithHost:(UIViewController *)host
                queueEngine:(QueueITEngine*) engine
                   queueUrl:(NSString*)queueUrl
             eventTargetUrl:(NSString*)eventTargetUrl
                 customerId:(NSString*)customerId
                    eventId:(NSString*)eventId;

@end

