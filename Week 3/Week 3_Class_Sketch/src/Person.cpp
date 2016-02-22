//
//  Person.cpp
//  Week 3_Class_Sketch
//
//  Created by Vasiliki Myrto Diakaki on 2/8/16.
//
//

#include "Person.hpp"
#include "ofMain.h"

//Person::Person(){
   // height = 10;
  //  smell = "good";
  //  name = "bob";
//}

void Person::walk(){
    cout << "I'm walking!"<< endl;
    
}

void Person::sleep(){
    cout << "I'm sleeping!"<< endl;
    
}

void Person::talk(){
    cout << "I'm talking!"<< endl;
    
}

void Person::eat(){
    cout << "I'm eating!"<< endl;
    
}

void Person::draw(float xPos, float yPos){
    
    cout << "I'm drawing!" << endl;
    ofSetColor(r, g, b);
    ofFill();
    ofDrawEllipse(xPos, yPos, height, height);
}