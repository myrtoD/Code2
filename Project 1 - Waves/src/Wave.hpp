//
//  Wave.hpp
//  Project 1 - Waves
//
//  Created by Vasiliki Myrto Diakaki on 3/13/16.
//
//

#ifndef Wave_hpp
#define Wave_hpp

#include <stdio.h>

#endif /* Wave_hpp */
#include "ofMain.h"

class Wave{
public:
    
    //properties
    
    float x;
    float y;
    float xPos;
    float yPos;
    
    float width;
    
    float ang;
    float span;
    
    ofColor color;
    
    //constructor
    
    Wave();
    
    //methods
    
    void setup();
    void draw();

    
};

