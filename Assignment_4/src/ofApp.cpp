#include "ofApp.h"

int midX, midY;
int sec ;
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    midX = ofGetWindowWidth() / 2;
    midY = ofGetWindowHeight() / 2;
 
}


bool drawFirst = true;
bool drawSecond = true;


//--------------------------------------------------------------
void ofApp::update(){
    
     sec = (ofGetFrameNum() / 60) % 60;
    
    drawFirst = sec < 2;
    drawSecond = sec < 4;

}


//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(160,82,45);
    if (drawFirst){
    ofDrawTriangle(502, 364, midX, midY, 522, 364);
    ofDrawCircle(midX+50, midY-50, 7);
    ofDrawCircle(midX-50, midY-50, 7);
    ofDrawBezier(midX, midY, 490, 420, 470, 384, 475,midY);
    ofDrawBezier(midX, midY, 534, 420, 554, 384, 549,midY);
    //ears
    ofDrawTriangle(370, 330, 470, 300, 390, 260);
    ofDrawTriangle(645, 330, 544, 300, 624, 260);
    //wiskers left
    ofDrawLine(midX, midY-10, midX-200, midY-50);
    ofDrawLine(midX, midY-10, midX-200, midY-10);
    //wiskers right
    ofDrawLine(midX, midY-10, midX+200, midY-50);
    ofDrawLine(midX, midY-10, midX+200, midY-10);
    } else if (drawSecond){
        ofDrawTriangle(502, 364, midX, midY, 522, 364);
        ofDrawCircle(midX+50, midY-50, 10);
        ofDrawCircle(midX-50, midY-50, 10);
        ofDrawBezier(midX, midY, 490, 420, 470, 384, 475,midY);
        ofDrawBezier(midX, midY, 534, 420, 554, 384, 549,midY);
        //ears
        ofDrawTriangle(370, 330, 470, 300, 390, 300);
        ofDrawTriangle(645, 330, 544, 300, 624, 300);
        //wiskers left
        ofDrawLine(midX, midY-10, midX-200, midY-5);
        ofDrawLine(midX, midY-10, midX-200, midY);
        //wiskers right
        ofDrawLine(midX, midY-10, midX+200, midY-5);
        ofDrawLine(midX, midY-10, midX+200, midY);
        //eyebrows
        ofDrawLine(midX+30, midY-60, midX+70, midY-70);
        ofDrawLine(midX-30, midY-60, midX-70, midY-70);
        
        
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
