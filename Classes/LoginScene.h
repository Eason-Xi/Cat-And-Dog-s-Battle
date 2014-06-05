//
//  LoginScene.h
//  CadBattle
//
//  Created by Eason_Xi on 14-6-5.
//
//

#ifndef __CadBattle__LoginScene__
#define __CadBattle__LoginScene__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;
class LoginScene : public cocos2d::CCLayer
{
public:
   
    virtual bool init();
  
    static cocos2d::CCScene* scene();
   
    CREATE_FUNC(LoginScene);
};



#endif /* defined(__CadBattle__LoginScene__) */
