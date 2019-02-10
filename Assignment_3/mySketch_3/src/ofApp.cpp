#include "ofApp.h"
int midX, midY;

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableAntiAliasing();
    ofSetFrameRate(60);
    midX = ofGetWidth() / 2;
    midY = ofGetHeight() / 2;
    
}
bool drawFirst = true;
//--------------------------------------------------------------
void ofApp::update(){
    int sec = (ofGetFrameNum() / 2 % 60);
    drawFirst = sec < 2;
    
    //if (ofGetFrameNum() % 2 == 0);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSetColor(255,44,66);
   // ofDrawCircle(midX, midY, 30);
    //ofDrawTriangle(midX,midY,10,40,90,40);
    //ofDrawLine(10,10,midX,midY);
    ofDrawRectangle(midX, midY,-100, 80, 80);
 
    
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
