//
//  WaveBreak.cpp
//  Project 1
//
//  Created by Vasiliki Myrto Diakaki on 3/6/16.
//
//

#include "WaveBreak.hpp"

WaveBreak::WaveBreak(){
    
}

void setup (float x, float a, float s) {
    
    xPos = x;
    span = ofRandom(10, 20);
    offsetY = ofRandom(60, 70);
    ang = a;
    step = s;
}



void drawTo(WaveBreak other) {
    
    ofStroke(color(255, 255, 255));
    ofDrawLine(other.posX, other.y, xPos, y);
}


void calc() {
    
    y = ofGetHeight - offsetY + (span * sin(radians(ang)));
    ang += step;
    
    vertex(xPos, y);
}
