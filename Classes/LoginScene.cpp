//
//  LoginScene.cpp
//  CadBattle
//
//  Created by Eason_Xi on 14-6-5.
//
//

#include "LoginScene.h"
USING_NS_CC;

CCScene* LoginScene::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    LoginScene *layer = LoginScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

bool LoginScene::init(){
    
    if(!CCLayer::init()){
        return false;
    }
    
    
    return true;
}

