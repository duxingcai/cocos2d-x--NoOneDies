#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "GameController.hpp"
#include "cocos2d.h"
#include "Edge.hpp"
#include "Block.hpp"
#include "GameOverScene.h"
//#include "Hero.hpp"


class HelloWorld : public cocos2d::LayerColor//有颜色的层
{
private:
    cocos2d::Vector<GameController*> gcs;
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    virtual void update(float dt);
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
