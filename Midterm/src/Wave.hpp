//
//  Wave.hpp
//  Midterm
//
//  Created by Vasiliki Myrto Diakaki on 3/23/16.
//
//

#ifndef Wave_hpp
#define Wave_hpp

#include <stdio.h>

#endif /* Wave_hpp */

#include "ofMain.h"

class Wave: public ofBaseApp {
public:
    
    void setup(float xPos, float yPos, float radius);
    
    
private:
    
    float xPos, yPos;
    float radius;
};
