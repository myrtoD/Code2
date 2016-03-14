//
//  Branch.hpp
//  Tree
//
//  Created by Vasiliki Myrto Diakaki on 3/7/16.
//
//

#ifndef Branch_hpp
#define Branch_hpp

#include <stdio.h>

#endif /* Branch_hpp */

#include "ofMain.h"

#include "ofMain.h"

class Branch : public ofBaseApp {
public:
    //properties
    
    
    //constructor
    
    //methods
    void setup( float _xPos, float _yPos,
               float _length,
               float _width,
               float _splitPercentage,
               float _maxSplitAngle,
               float _maxSubdivions,
               float _maxSegments,
               float _segmentsSinceStart,
               float _angle,
               float _curvature,
               ofColor _color
               );
    
private:
    
    float xPos, yPos; //position
    float length, width; //length and width of branches
    float splitPercentage; //perc my branch will actually split
    float maxSplitAngle;
    float maxSubdivisions; //max number of divisions
    float maxSegments; //max number of branches
    float segmentsSinceStart; // counter
    float angle, curvature; //give curvature to branches
    ofColor color; // color of the branch
    bool split; // flip state1 and state2
    
};