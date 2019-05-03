#include "ofApp.h"

int midX, midY, tot;

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetCircleResolution(500);
    ofSetFrameRate(60);
    //    ofBackground(255);
    
    
    //bg
    ofSetBackgroundAuto(true);
    img.load("picture.jpg");
    
    
    //font
    Comfortaa.load("Comfortaa.ttf",12, true,true);
    
    
    midX = ofGetWindowWidth() / 2;
    midY = ofGetWindowHeight() / 2;
    tot = 0;
   
 
    //mask1
    
//    img.load("picture.jpg");
//    fbo.allocate(img.getWidth(), img.getHeight(),GL_RGBA);
//    fbo.begin();
//        {
//           ofClear(0,0,0,0);
//         }
//    fbo.end();
    
    
    
    //Muse
    const int RECEIVE_PORT   = 7000;
    receiver.setup(RECEIVE_PORT);
    
    //BOOLEANS
    successString = false;
    startString = true;
    
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
            //set a total var, so the circle will be more obvious
            if (alphaMean < 25) {
                tot += alphaMean;
            }
            
            std::cout << alphaMean << "value" << endl;
        
        }
        
    }
    
}


//--------------------------------------------------------------
void ofApp::draw()
{
    //imagesize
    img.draw(0, 0);
    
     //mask1
//
//    fbo.begin();
//    {
//        ofSetColor(255);
//        ofDrawEllipse(midX, midY, tot, tot);
//
//    }
//    fbo.end();
//
//    img.getTexture().setAlphaMask(fbo.getTexture());
    
    
    //mask2
    img.load("colored.jpg");
        fbo.allocate(img.getWidth(), img.getHeight(),GL_RGBA);
    fbo.begin();
    {
//        ofClear(0,0,0,0);
    }
    fbo.end();

    fbo.begin();
    {
//        ofSetColor(255);
        ofDrawEllipse(midX, midY, tot/10.0, tot/10.0);
    }
    fbo.end();

    img.getTexture().setAlphaMask(fbo.getTexture());
    
    

    
    //text
    ofPushStyle();
    ofSetColor(255);
    if (successString){
        Comfortaa.drawString("Yayy! go to the next level.",74,ofGetHeight()-500);
    }
    if (startString){
        Comfortaa.drawString("Concentrate",ofGetWidth()/2-30,ofGetHeight()-60);
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
