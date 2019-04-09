#include "ofApp.h"

string ATemp,AHumid,ASum;
string BTemp,BHumid,BSum;

//--------------------------------------------------------------
void ofApp::setup(){
    //Fonts
    cityFont.load("AbrilFatface-Regular.ttf", 40);
    textFont.load("Comfortaa.ttf", 10);
    
    //Tehran
    std::string url = "https://api.darksky.net/forecast/ecf1ca45225f2390b98fbcdcd569a0af/35.6892,51.3890";
    
    //NY
    std::string url2 = "https://api.darksky.net/forecast/ecf1ca45225f2390b98fbcdcd569a0af/40.7128,-74.0060";
    
    
    // Now parse the JSON
    //Tehran
    bool parsingSuccessful = json.open(url);
    cout << "start on first" << endl;
    if (parsingSuccessful)
    {
        ofLogNotice("ofApp::setup") << json.getRawString(true);
    } else {
        ofLogNotice("ofApp::setup") << "Failed to parse JSON.";
    }
    
    //Setting up Tehran
    ATemp = json["currently"]["temperature"].asString();
    ASum  = json["daily"]["data"][0]["summary"].asString();
    AHumid = json["daily"]["data"][0]["humidity"].asString();
    
    //ny
    bool parsingSuccessful2 = json.open(url2);
    cout << "start on second" << endl;
    if (parsingSuccessful2)
    {

       ofLogNotice("ofApp::setup") << json.getRawString(true);
    } else {
        ofLogNotice("ofApp::setup") << "Failed to parse JSON.";
    }
    
        //Setting up New York
    BTemp = json["currently"]["temperature"].asString();
    BSum  = json["daily"]["data"][0]["summary"].asString();
    BHumid = json["daily"]["data"][0]["humidity"].asString();
    
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
    
    
    //NEWYORK
    float tempN  = std::stof(BTemp);

    float mapN = ofMap(mapN, 0, 100, 0, 1);
    ofColor blue = ofColor(76,76,255);
    ofColor red = ofColor(255,50,50);
    ofColor resultN = blue.lerp(red, mapN);
    ofSetColor(resultN);
    ofDrawCircle(350, 500, 50);
    
    
    
    std::string tempn  = BTemp;
    std::string summaryN  = BSum;
    std::string humidityN  = BHumid;
    
    //NEWYORK
    ofSetColor(resultN);
    cityFont.drawString("NEWYORK", 180, 200);
    textFont.drawString("Temprature:", 200, 230);
    ofDrawBitmapString(tempn, 320,  230);
    ofDrawBitmapString(summaryN, 200,  260);
    textFont.drawString("Humidity:", 200, 290);
    ofDrawBitmapString(humidityN, 300,  290);

    //TEHRAN
    
    float tempT  = std::stof(ATemp);
    
//    float mapT = ofMap(mapT, 0, 100, 0, 1);

//    ofColor bluet = ofColor(76,76,255);
//    ofColor redt = ofColor(255,50,50);
    ofColor resultt= blue.lerp(red, tempT);
    ofSetColor(resultt);
    ofDrawCircle(600, 500, 50);


    std::string tempt  = ATemp;
    std::string summaryT  = ASum;
    std::string humidityT  = AHumid;
    
    
    
    // std::string text = hightemp + "-" + summary + "-" + sunrise + "-" + sunset;
    //TEHRAN
    ofSetColor(resultt);
    cityFont.drawString("TEHRAN", 560, 200);
    textFont.drawString("Temprature:", 580, 230);
    ofDrawBitmapString(tempt, 700,  230);
    ofDrawBitmapString(summaryT, 580,  260);
    textFont.drawString("Humidity:", 580, 290);
    ofDrawBitmapString(humidityT, 680,  290);
    
    
    
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


