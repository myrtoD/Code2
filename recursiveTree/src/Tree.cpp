//
//  Tree.cpp
//  recursiveTree
//
//  Created by Vasiliki Myrto Diakaki on 2/29/16.
//
//

#include "Tree.hpp"

Tree::Tree(){
    
}

void Tree:: seed1(float dotSize, float angle, float x, float y){
    ofSetColor(255, 0, 0);
    ofFill();
    if(dotSize > 1.0){
        float r = ofRandomuf(); // returns a random # btwn 0,1
        
        if(r > 0.02 ){
            // this happens 98% of the time
            ofDrawCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            seed1(dotSize*0.99, angle - offSetAngleA, newX, newY);
        } else {
            // this happens 2% of the time
            ofDrawCircle(x, y, dotSize);
            float newX = x + cos(angle);
            float newY = y + sin(angle);
            seed1(dotSize*0.99, angle + offSetAngleA, newX, newY);
            seed2(dotSize*0.6, angle + offSetAngleB, newX, newY);
            seed1(dotSize*0.5, angle - offSetAngleB, newX, newY);
        }
        
    }
    
}




void Tree:: seed2(float dotSize, float angle, float x, float y){
    ofSetColor(0, 0, 255);
    ofFill();
    if(dotSize > 1.0){
        float r = ofRandomuf();
        
        if(r > 0.05){
            ofDrawCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            seed2(dotSize*0.99, angle + offSetAngleA, newX, newY);
        } else {
            ofDrawCircle(x, y, dotSize);
            float newX = x + cos(angle);
            float newY = y + sin(angle);
            seed2(dotSize*0.99, angle - offSetAngleA, newX, newY);
            seed1(dotSize*0.6, angle + offSetAngleB, newX, newY);
            seed2(dotSize*0.5, angle - offSetAngleB, newX, newY);
            
        }
    }
}
