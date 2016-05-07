//
//  Box.hpp
//  FinalProject-MusicApp
//
//  Created by Vasiliki Myrto Diakaki on 5/7/16.
//
//

#ifndef Box_hpp
#define Box_hpp

#include <stdio.h>

#endif /* Box_hpp */

#include "ofMain.h"

class Box{
public:
    
    //constructor
    Box();
    
    //methods
    void setup();
    void update();
    void draw();
    bool hitTest(int x, int y);
    void close();
    
private:
    //variables
    ofPoint pos; // position of the particle
    float width;
    float height;
    ofColor color;
    bool hit;
    bool complete;
    bool collapse;
    int collapseCount;
    int steps;
    float dx1;
    float dx2;
    float dy1;
    float dy2;
    string soundFile;
    ofSoundPlayer player;
    int startX;
};