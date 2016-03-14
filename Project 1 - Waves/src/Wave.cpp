//
//  Wave.cpp
//  Project 1 - Waves
//
//  Created by Vasiliki Myrto Diakaki on 3/13/16.
//
//

#include "Wave.hpp"

Wave::Wave(){
}

    void Wave::setup(){
        
        xPos = 0;
        ang = 128;
        span = ofRandom(10, 20);
        y = ofRandom(500, 800);
        yPos = y + (span * sin(ofWrapRadians(ang)));
        
    }

    
    void Wave::draw(){
        
        ofSetColor(255,255,255);
        ofSetLineWidth(ofGetWidth());
        ofDrawLine(xPos, y, ofGetWidth(), yPos);
    }

