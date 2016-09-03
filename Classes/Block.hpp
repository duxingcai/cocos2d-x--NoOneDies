//
//  Block.hpp
//  NoOneDies
//
//  Created by 杜杜兴 on 16/7/11.
//
//

#ifndef Block_hpp
#define Block_hpp
#include <iostream>
#include "cocos2d.h"
#include <stdio.h>

USING_NS_CC;

class Block:public Sprite{
    
public:
    virtual bool init();
    virtual void update(float dt);
    CREATE_FUNC(Block);
};

#endif /* Block_hpp */
