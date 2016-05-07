//
//  Rectangle.hpp
//  animations
//
//  Created by Vasiliki Myrto Diakaki on 3/28/16.
//
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>

#endif /* Rectangle_hpp */

#include "ofMain.h"

class Rectangle{
public:
    
    //variables
    float pct;
    ofPoint posA; //point A
    ofPoint posB; //point B
    ofPoint pos; //output point
    
    //constructor
    Rectangle();
    
    //methods
    void interpolate(float myPct);
    void draw();
};
