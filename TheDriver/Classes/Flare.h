
#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Flare : NSObject {
    CCParticleSun *flareParticle; 
    BOOL isCollided; 
    BOOL isRed; 
}

@property (nonatomic,retain) CCParticleSun *flareParticle; 
@property (nonatomic,assign) BOOL isCollided; 
@property (nonatomic,assign) BOOL isRed; 

@end

