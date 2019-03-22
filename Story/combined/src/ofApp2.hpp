//
//  ofApp2.hpp
//  Story2
//
//  Created by Golpar J on 3/21/19.
//

#ifndef ofApp2_hpp
#define ofApp2_hpp

#pragma once

#include "ofMain.h"
#include "ofxGui.h"

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
    
    ofFbo fbo;
    void drawTail(float x, float y);
    void drawEar();
    float movex =0;
    float movey =0;
    
    //GUI
    
    ofxPanel gui;
    
    //    ofParameter<glm::vec2> position;
    // ofxVec2Slider position;
    ofParameter<int>posX;
    ofParameter<ofColor> color;
    //ofxColorSlider color;
    
    ofxFloatSlider floatSlider;
    ofxToggle toggle;
    ofxButton button;
};
