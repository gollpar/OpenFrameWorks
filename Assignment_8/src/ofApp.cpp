#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    std::string url = "https://api.darksky.net/forecast/ecf1ca45225f2390b98fbcdcd569a0af/35.6892,51.3890";
    
    // Now parse the JSON
    bool parsingSuccessful = json.open(url);
    
    if (parsingSuccessful)
    {
        ofLogNotice("ofApp::setup") << json.getRawString(true);
    } else {
        ofLogNotice("ofApp::setup") << "Failed to parse JSON.";
    }
    
    //gui slider
    gui.setup();
    gui.add(posX.set("Temperature", 800, 800, 500));
    
    gui.add(color.set("Back ground color", 0, 0, 800));
    
    gui.add(toggle.setup("toggle", true));
    gui.add(button.setup("GO TO First scene"));
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    float humidity  = json["daily"]["data"][0]["humidity"].asFloat();
    
    ofColor black = ofColor(0,0,0);
    ofColor yellow = ofColor(255,250,70);
    ofColor result= black.lerp(yellow, humidity);
    ofBackground(result);
    
    
    
    std::string hightemp  = json["daily"]["data"][1]["temperatureHigh"].asString();
    std::string summary  = json["daily"]["data"][1]["summary"].asString();
    std::string sunrise  = json["daily"]["data"][0]["sunriseTime"].asString();
    std::string sunset  = json["daily"]["data"][0]["sunsetTime"].asString();
    
    
    
    // std::string text = hightemp + "-" + summary + "-" + sunrise + "-" + sunset;
    
    ofDrawBitmapString(hightemp, 20,  40);
    ofDrawBitmapString(summary, 20,  80);
    ofDrawBitmapString(sunrise, 20,  100);
    ofDrawBitmapString(sunset, 20,  120);
    
    // ofDrawBitmapString(text, 20, 40);
    
    //draw gui
    gui.draw();
    
    
    
    
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


