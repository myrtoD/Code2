//
//  WaveBreak.hpp
//  Project 1
//
//  Created by Vasiliki Myrto Diakaki on 3/6/16.
//
//

#ifndef WaveBreak_hpp
#define WaveBreak_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* WaveBreak_hpp */

class WaveBreak {
public:
    
    float ang;
    float span;
    float y;
    float offsetY;
    float step;
    int breaks;
    float posX;
    
    WaveBreak();
    
    void setup(float x, float a, float s);
    void draw(WaveBreak other);
    void calc();
};


