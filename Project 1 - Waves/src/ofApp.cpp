#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0,0,ofRandom(100,255), 128 + ((255 - 128) / 128));
   
  
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float x = ofMap( ofNoise( ofGetElapsedTimef()), 0, 1, 0, ofGetWidth());
    ofDrawCircle(x,200,30);
    
    ofNoFill();
    ofBeginShape();
    for (int i = 0; i < 1000; i++){
        float x = i;
        float noise = ofNoise(i/20.0);
        float y = ofMap(noise, 0,1, 0, 100);
        ofVertex(x,y);
    }
    
    ofEndShape();

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
