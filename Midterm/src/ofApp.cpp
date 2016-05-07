#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //ofSetBackgroundAuto(false);
    ofBackground(0, 0, 200);
    //ofEnableSmoothing();
    //ofEnableAntiAliasing();
    
    radius=10;


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    wave.setup((ofGetWidth()/2), (ofGetHeight()/2), radius);
    radius+=1;
    
    if (radius>ofGetWidth()/2){
        radius = 10;
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
