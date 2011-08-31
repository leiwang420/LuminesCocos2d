//
//  GamePlayLayer.h
//  LuminesCocos2d
//
//  Created by Lei Wang on 31/8/11.
//  Copyright 2011 Virtuos. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface GamePlayLayer : CCLayer {
    CCSprite *whiteCell;
    CCSprite *yellowCell;
    
    
}

+(CCScene*) scene;

@end
