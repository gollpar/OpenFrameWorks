#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

#define store 2


class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //image mask
    ofImage img;
    ofFbo fbo;
    
    //muse
    ofxOscReceiver receiver;
    float alpha, alphaTrans,alphaMean;
    float alphaStorage[store];
    int index = 0;

    
    ofTrueTypeFont Comfortaa;
    
    bool successString;
    bool startString;
};
