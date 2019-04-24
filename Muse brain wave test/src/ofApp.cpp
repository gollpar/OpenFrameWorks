#include "ofApp.h"

int midX, midY;

//--------------------------------------------------------------
void ofApp::setup()
{
    //font
    Comfortaa.load("Comfortaa.ttf",12, true,true);
    
    ofSetFrameRate(60);
    ofBackground(0);
    
    midX = ofGetWindowWidth() / 2;
    midY = ofGetWindowHeight() / 2;
    
    //mask
    img.load("picture.jpg");
    fbo.allocate(img.getWidth(), img.getHeight(),GL_RGBA);
    fbo.begin();
    {
        ofClear(0,0,0,0);
    }
    fbo.end();
//
//    fbo.begin();
//    {
//        ofClear(0,0,0,0);
//        ofSetColor(255);
//        ofDrawEllipse(midX, midY, 50, 50);
//    }
//    fbo.end();
//
//    img.getTexture().setAlphaMask(fbo.getTexture());
    
    
    //Muse
    const int RECEIVE_PORT   = 7000;
    receiver.setup(RECEIVE_PORT);
    
//    //BOOLEANS
//    centerCircle = FALSE;
//    successString = false;
//    startString = true;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //osc
    ofxOscMessage m;
    while(receiver.hasWaitingMessages()){
        receiver.getNextMessage(m);
        if (m.getAddress() == "Muse-2C07/elements/alpha_relative"){
            alpha = m.getArgAsFloat(1);
            alphaTrans = ofMap(alpha, 0,0.4,1,100);
            if (alphaTrans != alphaStorage[(index - 1 + store)/store]){
                alphaStorage[index] = alphaTrans;
                index = (index + 1) % store;
            }
            alphaMean =
            (alphaStorage[0]+alphaStorage[1]+alphaStorage[2]+alphaStorage[3]+alphaStorage[4])*0.2;
            
            std::cout << alphaMean << "value" << endl;
        
            
           
        }
    }
    
}


//--------------------------------------------------------------
void ofApp::draw()
{
    //mask
    
    fbo.begin();
    {
        ofClear(0,0,0,0);
        ofSetColor(255);
        ofDrawEllipse(midX, midY, alphaMean , alphaMean );
    }
    fbo.end();
    
    img.getTexture().setAlphaMask(fbo.getTexture());
    
    //
    img.draw(100, 100);
    
    ofPushStyle();
    ofSetColor(80);
    if (successString){
        Comfortaa.drawString("Yayy! go to the next level.",74,ofGetHeight()-340);
    }
    
    if (startString){
        Comfortaa.drawString("Concentrate, The red dot grows and rises as you focus harder.",40,ofGetHeight()-80);
    }
    ofPopStyle();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
