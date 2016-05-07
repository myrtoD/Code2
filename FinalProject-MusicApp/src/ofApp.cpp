#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(true);
    
    wait = true;
    boxCount = 5;
    
    for (int i=0; i < boxCount; i++) {
        Box box;
        box.setup();
        boxes.push_back(box);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0; i<boxes.size(); i++){
        boxes[i].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i=0; i<boxes.size(); i++){
        boxes[i].draw();
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
    
    
    if (!wait) {
        
        boxes[boxes.size()-1].close();
        wait = true;
        return;
    }
    
    for(int i=0; i<boxes.size(); i++){
        if (boxes[i].hitTest(x, y)) {
            
            Box t = boxes[i];
            boxes[i] = boxes[boxes.size()-1];
            boxes[boxes.size()-1] = t;
            
            wait = false;
            break;
        }
    }
    
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
