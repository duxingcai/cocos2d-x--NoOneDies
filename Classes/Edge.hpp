//
//  Edge.hpp
//  NoOneDies
//
//  Created by 杜杜兴 on 16/7/11.
//
//

#ifndef Edge_hpp
#define Edge_hpp
#include <iostream>
#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

class Edge:public Node{
    
public:
    
    virtual bool init();
    CREATE_FUNC(Edge);
};
#endif /* Edge_hpp */
