//
//  Box.cpp
//  FinalProject-MusicApp
//
//  Created by Vasiliki Myrto Diakaki on 5/7/16.
//
//

#include "Box.hpp"

Box::Box(){
    
}

void Box::setup(){
    
    width = ofRandom(100,200);
    height = width;
    pos = ofPoint(ofRandom(0, ofGetWidth() - width), ofRandom(0, ofGetHeight() - height));
    color = ofColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
    hit = false;
    complete = false;
    steps = 15;
    collapse = false;
    startX = pos.x;
    
    // Determine the sound file based on colour
    if (color.g > color.r && color.g > color.b) {
        // Green
        soundFile = "Brahms Symphony - from Fourth Movement.mp3";
    } else
        
        if (color.r > color.g && color.r > color.b) {
            // Red
            soundFile = "Bach - Jesu, Joy of Man's Desiring.mp3";
        } else
            
            if (color.b > color.r && color.b > color.r) {
                // Blue
                soundFile = "The Irish Washerwoman.mp3";
            } else {
                // Rare grey
                soundFile = "Commercial DEMO - 13.mp3";
            }
    
    
}

void Box::update(){
    
    if (hit && !complete) {
        pos.x -= dx1;
        width += (dx1 + dx2);
        pos.y -= dy1;
        height += (dy1 + dy2);
        
        if (pos.x <= 0) {
            complete = true;
        }
    }
    
    if (collapse) {
        pos.x += dx1;
        width -= (dx1 + dx2);
        pos.y += dy1;
        height -= (dy1 + dy2);
        
        if (pos.x >= startX) {
            collapse = false;
            
            player.stop();
        }
    }
}

void Box::draw(){
    ofSetColor(color);
    ofDrawRectangle(pos.x, pos.y, width, height);
    
    //    if (hit) {
    //        ofStyle pStyle = ofGetStyle();
    //        ofStyle style;
    //        style.bFill = false;
    //        style.color = ofColor::black;
    //        style.lineWidth = 2.0f;
    //        ofSetStyle(style);
    //        ofDrawRectangle(pos.x, pos.y, width, height);
    //        ofSetStyle(pStyle);
    //    }
}

bool Box::hitTest(int x, int y){
    
    if (hit) return true;
    
    hit = ! (x < pos.x || x > pos.x + width || y < pos.y || y > pos.y + height);
    
    if (hit) {
        
        dx1 = (float) pos.x / (float)steps;
        dx2 = (float) (ofGetWidth() - (pos.x + width)) / (float)steps;
        dy1 = (float) pos.y / (float)steps;
        dy2 = (float) (ofGetHeight() - (pos.y + height)) / (float)steps;
        
        player.load(soundFile, true);
        player.play();
        
        cout << soundFile;
    }
    
    return hit;
}

void Box::close(){
    
    collapse = true;
    hit = false;
    complete = false;
    
    
}
