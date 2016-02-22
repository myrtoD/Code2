//
//  Planet.hpp
//  Universe
//
//  Created by Vasiliki Myrto Diakaki on 2/21/16.
//
//

#ifndef Planet_hpp
#define Planet_hpp

#include <stdio.h>

#endif /* Planet_hpp */

#include "ofMain.h"

class Planet {
    
public:
    
    int diameter;
    ofColor color;
    
    float x;
    float y;
    float speedY;
    float speedX;
    
    void setup();
    void update();  
    void draw();
    
    Planet();
    
};

