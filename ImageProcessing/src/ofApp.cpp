#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    w = ofGetWidth();
    h = ofGetHeight();

    
    myImage.loadImage("Butterfly.jpg");


}


//--------------------------------------------------------------
void ofApp::update(){
    
    unsigned char *data = new unsigned char[w * h * 4];
    //the "*" is a pointer; we will worry about this later
    
    for (int y=0; y<h; y++) {
        for (int x=0; x<w;  x++) {
            
            int red = ofMap( sin(ofGetElapsedTimef()), -1, 1, 0, 255 );
            int green = ofMap( cos(ofGetElapsedTimef()), -1, 1, 0, 255 );
            int blue = ofMap( tan(ofGetElapsedTimef()), -1, 1, 0, 255 );
            int alpha = 255;
            
            int index = 4 * ( x + w * y );
            cout << "indexs: " << index << endl;
            data[ index ] = red;
            data[ index + 1 ] = green;
            data[ index + 2 ] = blue;
            data[ index + 3 ] = alpha;
            
        }
    }
    
    myImage.setFromPixels(data, w, h, OF_IMAGE_COLOR_ALPHA);
    delete[] data;


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix();
    //ofTranslate(0, 0, 0);
    
    ofSetColor(0, 0, 255, 150);
    myImage.draw(0, 0, 256, 192);
   
    ofSetColor(0, 0, 255);
    myImage.draw(256, 0, 256, 192);
    
    ofSetColor(0, 0, 255);
    myImage.draw(0, 192, 512, 192);
    
    ofPopMatrix();
    
    
    
    
    ofPushMatrix();
    
    ofTranslate(1024, 384);
    ofRotate(180);
    ofSetColor(0, 0, 255, 150);
    myImage.draw(0, 0, 256, 192);
    
    ofSetColor(0, 0, 255);
    myImage.draw(256, 0, 256, 192);
    
    ofSetColor(0, 0, 255);
    myImage.draw(0, 192, 512, 192);
    
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(0, 110);
    ofScale(2,1.45);
    ofSetColor(0, 0, 255);
    myImage.draw(0, 192, 512, 192);
    
    ofPopMatrix();
    
    
    
    ofBackground(255, 255, 255);
    ofSetColor( 255, 255, 255 );
    myImage.draw( 0, 0 );
//    
//    ofPushMatrix();
//    ofTranslate(100, 300, 0);
//    ofRotate(50, 1, 0.5, 0);
//    ofScale(0.5,1,1);
//    ofSetColor(255, 0, 0);
//    myImage.draw(100, 100, 700, 400);
//    ofPopMatrix();

    


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
