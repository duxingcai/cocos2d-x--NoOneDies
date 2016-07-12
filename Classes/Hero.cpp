//
//  Hero.cpp
//  NoOneDies
//
//  Created by 杜杜兴 on 16/7/11.
//
//

#include "Hero.hpp"
#include "FlashTool.h"

bool Hero::init(){
    
    Sprite::init();
    
    Size  s=Size(44,52);
    
    runAction(RepeatForever::create(FlashTool::readJsonSpriteSheet("Hero.josn", 0.3f)));
    
    setPhysicsBody(PhysicsBody::createBox(s));
    setContentSize(s);
    
    getPhysicsBody()->setRotationEnable(false);
    getPhysicsBody()->setContactTestBitmask(1);

    
    return true;
}