#import <Foundation/Foundation.h>

@protocol QueuePassedDelegate;

@interface QueueITEngine : NSObject
@property (nonatomic)id<QueuePassedDelegate> queuePassedDelegate;
@property (nonatomic, strong)NSString* errorMessage;

-(instancetype)initWithHost:(UIViewController *)host
                 customerId:(NSString*)customerId
             eventOrAliasId:(NSString*)eventOrAliasId
                 layoutName:(NSString*)layoutName
                   language:(NSString*)language;

-(void)run;
-(void)raiseQueuePassed:(NSString *)queueId;

@end

@protocol QueuePassedDelegate <NSObject>

-(void)notifyYourTurn:(NSString*)queueId;

@end