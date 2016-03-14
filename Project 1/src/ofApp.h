#pragma once

#include "ofMain.h"
#include "Waves.hpp"
#include "WaveBreak.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    Wave;
    
    float x1, x2, y1, y2;
    float angle1, angle2;
    float scalar = 70;
    
    int maxWaves = 5;
    Wave[] waves = new Wave[maxWaves];
		
    
};
