//
//  Block.cpp
//  NoOneDies
//
//  Created by 杜杜兴 on 16/7/11.
//
//

#include "Block.hpp"

bool Block::init(){
    Sprite::init();
    Size s=Size((rand()%20)+5,(rand()%30)+10);
    Size visibleSize=Director::getInstance()->getVisibleSize();
    
    setPhysicsBody(PhysicsBody::createBox(s));
    setTextureRect(Rect(0,0,s.width,s.height));
    setColor(Color3B(0,0,0));
    setContentSize(s);
    
    setPositionX(visibleSize.width);
    scheduleUpdate();
    
    //障碍物不是动态物体
    getPhysicsBody()->setDynamic(false);
    
    getPhysicsBody()->setContactTestBitmask(1);
    return true;

}

void Block::update(float dt){
    //障碍物移动的速度
    this->setPositionX(getPositionX()-3);
    
    if(getPositionX()<0){
        unscheduleUpdate();
        removeFromParent();
    }
}




