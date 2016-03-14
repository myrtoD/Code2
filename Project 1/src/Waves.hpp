//
//  Waves.hpp
//  Project 1
//
//  Created by Vasiliki Myrto Diakaki on 3/6/16.
//
//

#ifndef Waves_hpp
#define Waves_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Waves_hpp */

class Wave {
public:
    
    int breaks;
    int col;
    float x1, x2, y1, y2;
    float angle1, angle2;
    float scalar = 70;
    
    WaveBreak[] waveBreaks;
    int maxWaves = 5;
    
    Wave();
    
    void setup(int b, int c);
    void draw();
};