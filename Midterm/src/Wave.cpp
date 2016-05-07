//
//  Wave.cpp
//  Midterm
//
//  Created by Vasiliki Myrto Diakaki on 3/23/16.
//
//

#include "Wave.hpp"

void Wave::setup(float xPos, float yPos, float radius) {
    
    // TODO: Draw a circle with center <xPos>, <yPos> and a radius of <radius>
    
    ofSetColor(255,255,255);
    ofNoFill();
    ofSetLineWidth(8);
    ofDrawCircle(xPos, yPos, radius);
    float nextRadius = radius * 1.5f;
    float maxRadius = max( ofGetWidth(), ofGetHeight() ) / 2;
    
    // Recursion
    if (nextRadius < maxRadius) {
        
        // Create and draw the next wave with higher radius
        
        Wave wave;
        wave.setup(xPos, yPos, nextRadius);
        
    }
    
}