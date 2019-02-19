
#include "ofApp.h"

ofSoundPlayer boop;

int midX, midY; //screen midpoint



//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(60);
    midX = ofGetWindowWidth() / 2;
    midY = ofGetWindowHeight()/2;
    
    
    // load every sound you will need here
    boop.load("bensound-buddy.mp3");
    
    
    
}


//--------------------------------------------------------------

int direction = 1;

void ofApp::update(){

    //if (x%500 == 0) {  // every 500th update, play sound
//        boop.play();
   // }
    
   // x += inc; // add inc to x
    
    midX += 5 * direction;
    
    if( midX >= ofGetWidth()){
        direction *= -1 ;
        boop.play();
    }
    if(midX <= 0){
        direction *= -1;
        boop.play();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofPolyline closedStar;

    ofSetColor(255,0,255);

    closedStar.addVertex(midX, midY-100);
    closedStar.addVertex(midX+25, midY-15);
    closedStar.addVertex(midX+100, midY);
    closedStar.addVertex(midX+25, midY+15);
    closedStar.addVertex(midX, midY+100);
    closedStar.addVertex(midX-25, midY+15);
    closedStar.addVertex(midX-100, midY);
    closedStar.addVertex(midX-25, midY-15);
    closedStar.close();
    closedStar.draw();
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    cout<< x << " " << y <<endl;
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
