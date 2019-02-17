#include "ofApp.h"

int midX, midY;
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    midX = ofGetWindowWidth() / 2;
    midY = ofGetWindowHeight() / 2;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(160,82,45);
    
    ofDrawTriangle(502, 364, midX, midY, 522, 364);
    ofDrawCircle(midX+50, midY-50, 7);
    ofDrawCircle(midX-50, midY-50, 7);
    ofDrawBezier(midX, midY, 490, 420, 470, 384, 475,midY);
    ofDrawBezier(midX, midY, 534, 420, 554, 384, 549,midY);
    ofDrawTriangle(370, 330, 470, 300, 390, 260);
    ofDrawTriangle(645, 330, 544, 300, 624, 260);


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
