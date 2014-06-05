//
//  MenuScene.cpp
//  CadBattle
//
//  Created by Eason_Xi on 14-6-5.
//
//

#include "MenuScene.h"

CCScene* MenuScene::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    MenuScene *layer = MenuScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

bool MenuScene::init(){
    
    if(!CCLayer::init()){
        return false;
    }
    
    
    return true;
}