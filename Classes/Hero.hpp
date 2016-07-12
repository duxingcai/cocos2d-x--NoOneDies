//
//  Hero.hpp
//  NoOneDies
//
//  Created by 杜杜兴 on 16/7/11.
//
//

#ifndef Hero_hpp
#define Hero_hpp
#include <iostream>
#include "cocos2d.h"
#include <stdio.h>

USING_NS_CC;

class Hero:public Sprite{
public:
    
    virtual bool init();
    
    CREATE_FUNC(Hero);
};

#endif /* Hero_hpp */
