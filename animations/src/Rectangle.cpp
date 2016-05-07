//
//  Rectangle.cpp
//  animations
//
//  Created by Vasiliki Myrto Diakaki on 3/28/16.
//
//

#include "Rectangle.hpp"

//methods
Rectangle::Rectangle(){
    //point A is (10, 10)
    posA.x = 10;
    posA.y = 10;
    
    //point b is (1000, 10)
    posB.x = 1000;
    posB.y = 10;
    
}

void Rectangle::interpolate(float myPct){
    //linear interpolate
    //pos.x = (1 - myPct)*posA.x + myPct*posB.x;
    //pos.y = (1 - myPct)*posA.y + myPct*posB.y;
    
    //powers
    pct = powf(myPct, 2); //myPct^2 = myPct* myPct
    pos.x = (1 - pct)*posA.x + pct*posB.x;
    pos.y = (1 - pct)*posA.y + pct*posB.y;
    cout << "pos.x: " << pos.x << endl;
    cout << "pos.y: " << pos.y << endl;
    
}

void Rectangle::draw(){
    ofRect(pos.x, pos.y, 100, 100);
}