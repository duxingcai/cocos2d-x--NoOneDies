//
//  GameController.hpp
//  NoOneDies
//
//  Created by 杜杜兴 on 16/7/11.
//
//

#ifndef GameController_hpp
#define GameController_hpp

#include "cocos2d.h"
#include <stdio.h>
#include "Edge.hpp"
#include "Hero.hpp"
#include "Block.hpp"

USING_NS_CC;

class GameController:public Ref{
private:
    Layer *_layer;
    float _positionY;
    Size visibleSize;
    int currentFrameIndex,nextFrameIndex;//当前帧，下一帧
    Edge *edge;
    Hero *hero;
private:
    void resetFrames();
    void addBlock();//添加障碍物
    
public:
    virtual bool init(Layer* layer,float positionY);
    static GameController* create(Layer* layer,float positionY);
    void onUpdate(float dt);
    bool hitTestPoint(Vec2 point);
    void onUserTouch();
    
    
    //CREATE_FUNC(GameController);
};

#endif /* GameController_hpp */
