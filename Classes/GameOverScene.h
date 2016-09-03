//
//  GameOverScene.h
//  NoOneDies
//
//  Created by 杜杜兴 on 16/7/11.
//
//

#ifndef GameOverScene_h
#define GameOverScene_h
#include "cocos2d.h"
using namespace std;

class GameOver:public LayerColor{
 
private:
    Size visibleSize;
    
public:
    virtual bool init(){
        LayerColor::initWithColor(Color4B::WHITE);
        
        visibleSize=Director::getInstance()->getVisibleSize();
        auto label=Label::create();
        label->setString("Game Over");
        label->setSystemFontSize(40);
        label->setColor(Color3B::BLACK);
        addChild(label);
        label->setPosition(visibleSize.width/2,visibleSize.height/2);
        
        return true;
    };
    
    CREATE_FUNC(GameOver);
    
    static Scene* createScene(){
        auto s=Scene::create();
        auto l=GameOver::create();
        s->addChild(l);
        return s;
    };

};

#endif /* GameOverScene_h */
