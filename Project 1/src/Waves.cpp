//
//  Waves.cpp
//  Project 1
//
//  Created by Vasiliki Myrto Diakaki on 3/6/16.
//
//

#include "Waves.hpp"

Wave::Wave(){
    
}

    void setup(int b, int c){
        
        int col = c;
        int breaks = b;
        waveBreaks = new WaveBreak[breaks];
        float step = (ofGetWidth()/breaks-(1));
        float x = 0;
        float ang = ofRandom(0, 1);
        float aS = ofRandom(0, 5) - 2.5;
        
        for (int i=0; i < breaks; i++) {
            waveBreaks[i] = new WaveBreak(x, ang, aS);
            x += step;
            ang += aS;
        }
    }

    void draw(){
        
        ofFill(col);
        ofStroke(color(255,255,255));
        ofStrokeJoin(ROUND);
        beginShape();
        
        vertex(0,ofGetHeight);
        
        for (int i=0; i < breaks; i++) {
            waveBreaks[i].calc();
        }
        
        vertex(ofGetWidth, ofGetHeight);
        
        endShape(CLOSE);    
}

