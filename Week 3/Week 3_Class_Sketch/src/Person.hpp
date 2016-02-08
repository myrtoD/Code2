//
//  Person.hpp
//  Week 3_Class_Sketch
//
//  Created by Vasiliki Myrto Diakaki on 2/8/16.
//
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>

#endif /* Person_hpp */
#include "ofMain.h"


class Person{
public:
    
    //properties
    int height;
    int r, g, b;
    string smell;
    string name;
    
    //methods
    void walk();
    void sleep();
    void talk();
    void eat();
    void draw(float xPos, float yPos);
    
};

