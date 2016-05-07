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
       // velX = ofRandom(-3, 3);
        //velY = ofRandom(-4, 4);
        
    }

    void Wave::update(){
        
        //xPos = xPos + velX;
        //yPos = yPos + velY;
    
}

    
    void Wave::draw(){
        
        ofSetColor(255,255,255);
        ofSetLineWidth(ofGetWidth());
        ofDrawLine(xPos, y, ofGetWidth(), yPos);
    }

