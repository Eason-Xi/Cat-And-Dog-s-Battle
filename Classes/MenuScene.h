//
//  MenuScene.h
//  CadBattle
//
//  Created by Eason_Xi on 14-6-5.
//
//

#ifndef __CadBattle__MenuScene__
#define __CadBattle__MenuScene__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;
class MenuScene : public cocos2d::CCLayer
{
public:
    
    virtual bool init();
    
    
    static cocos2d::CCScene* scene();
    
    
    CREATE_FUNC(MenuScene);
};
#endif /* defined(__CadBattle__MenuScene__) */
