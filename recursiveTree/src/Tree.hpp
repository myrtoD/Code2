//
//  Tree.hpp
//  recursiveTree
//
//  Created by Vasiliki Myrto Diakaki on 2/29/16.
//
//

#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Tree_hpp */

class Tree{
public:
    
    //properties
    float span;
    float offSetAngleA;
    float offSetAngleB;
    
    //constructor
    Tree();
    
    //methods
    void seed1(float dotSize, float angle, float x, float y);
    void seed2(float dotSize, float angle, float x, float y);
    
};
