//
//  Planet.cpp
//  Universe
//
//  Created by Vasiliki Myrto Diakaki on 2/21/16.
//
//

#include "Planet.hpp"

Planet::Planet(){
    
}

void Planet::setup(){
    
    x = 0;
    y = 0;
    
    speedX = 0.5;
    speedY = 0.25;
    
    diameter = 25;
    
    color.set(255, 6, 8);
    

}

void Planet::update(){
    
    
    x+=speedX;
    y+=speedY;
    
}

void Planet::draw(){
    
    ofSetColor(color);
    ofDrawCircle(x, y, diameter);
    
}

