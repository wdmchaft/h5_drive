
#import <Foundation/Foundation.h>
#import "cocos2d.h" 
#import "SimpleAudioEngine.h" 
#import "HomeLayer.h" 

@interface PauseLayer : CCLayer {
    CGSize screenSize; 
    CCLayer *gameLayer; 
}

+(id) scene; 
-(id) initWithLayer:(CCLayer *) layer; 
-(void) setupMenu; 

@property (nonatomic,retain) CCLayer *gameLayer; 

@end
