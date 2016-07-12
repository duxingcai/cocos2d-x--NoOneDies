//
//  GameController.cpp
//  NoOneDies
//
//  Created by 杜杜兴 on 16/7/11.
//
//

#include "GameController.hpp"


GameController* GameController::create(cocos2d::Layer *layer, float positionY){
    
    auto _ins=new GameController();
    _ins->init(layer, positionY);
    _ins->autorelease();
    
    return _ins;
     
}

bool GameController::init(cocos2d::Layer *layer, float positionY){
    _layer=layer;
    _positionY=positionY;
    
    visibleSize=Director::getInstance()->getVisibleSize();
    
    //add Edge
    edge=Edge::create();
    edge->setPosition(visibleSize.width/2,visibleSize.height/2+positionY);
    edge->setContentSize(visibleSize);
    layer->addChild(edge);

    
    //add ground
    auto ground=Sprite::create();
    ground->setColor(Color3B(0,0,0));
    ground->setTextureRect(Rect(0,0,visibleSize.width*3,3));
    ground->setPosition(visibleSize.width/2,positionY-20);
    layer->addChild(ground);
    
    
    //    //add hero
    //    auto hero= Hero::create();
    //    hero->setPosition(50,hero->getContentSize().height/2+positionY);
    //    layer->addChild(hero);
    //
    
    resetFrames();
    return true;
}
 

void GameController::resetFrames(){
    currentFrameIndex=0;
    nextFrameIndex=(rand()%120)+100;
}


//添加障碍物
void GameController::addBlock(){
    auto b=Block::create();
    _layer->addChild(b);
    b->setPositionY(b->getContentSize().height/2+_positionY);
}


void GameController::onUpdate(float dt){
    currentFrameIndex++;
    if(currentFrameIndex>=nextFrameIndex){
        resetFrames();
        
        addBlock();
    }

 }


bool GameController::hitTestPoint(cocos2d::Vec2 point){
    return edge->getBoundingBox().containsPoint((point));
}


void GameController::onUserTouch(){
    hero->getPhysicsBody()->setVelocity(Vec2(0,400));
}






