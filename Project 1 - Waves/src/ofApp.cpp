#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,ofRandom(100,255), 128 + ((255 - 128) / 128));
   
    wave1.span = ofRandom(120, 130);
    wave2.span = ofRandom(100, 110);
    wave3.span = ofRandom(80, 90);
    wave4.span = ofRandom(60, 70);
    wave5.span = ofRandom(50, 60);
    wave6.span = ofRandom(40, 30);
    wave7.span = ofRandom(20, 10);
    
    wave1.y = ofRandom(100, 188);
    wave2.y = ofRandom(200, 288);
    wave3.y = ofRandom(300, 388);
    wave4.y = ofRandom(400, 488);
    wave5.y = ofRandom(500, 588);
    wave6.y = ofRandom(600, 688);
    wave7.y = ofRandom(700, 888);
    
    wave1.setup();
    wave2.setup();
    wave3.setup();
    wave4.setup();
    wave5.setup();
    wave6.setup();
    wave7.setup();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    wave1.draw();
    wave2.draw();
    wave3.draw();
    wave4.draw();
    wave5.draw();
    wave6.draw();
    wave7.draw();

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
