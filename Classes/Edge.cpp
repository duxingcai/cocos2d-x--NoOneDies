//
//  Edge.cpp
//  NoOneDies
//
//  Created by 杜杜兴 on 16/7/11.
//
//

#include "Edge.hpp"


bool Edge::init(){
    
    Node::init();
    
    Size visibleSize=Director::getInstance()->getVisibleSize();
    
    setPhysicsBody(PhysicsBody::createEdgeBox(visibleSize));
    
    setContentSize(visibleSize);
    
    return true;
}