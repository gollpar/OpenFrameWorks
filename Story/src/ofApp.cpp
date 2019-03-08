#include "ofApp.h"

int sec ;
ofPoint myMouse;
int tailx =299.35;
int taily =595;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    fbo.allocate(200, 107, GL_RGBA);
    fbo.begin();
    ofClear(255, 255, 255);
    fbo.end();

}

bool drawFirst = true;
bool drawSecond = true;

bool tail = true;
//--------------------------------------------------------------
void ofApp::update(){
    sec = (ofGetFrameNum() / 60) % 60;
    
    drawFirst = sec < 2;
    drawSecond = sec < 100;
    
    fbo.begin();
    fbo.end();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofBackground(177, 224, 223);
    
    //fbo text
 
    fbo.draw(0,0);
    ofSetColor(0);
    ofDrawBitmapString("A Love Story", 200, 107);
    
    if (drawFirst){
    ofSetColor(0);
    //left ear
    ofDrawTriangle(381.81 , 202.06, 440.05, 237.12, 392.27, 266.1);
    //right ear
    ofDrawTriangle(469.62, 237.92, 518.51, 205.69, 499.26, 305.5);
    //face
    ofDrawRectangle(398.56, 236.96, 100, 68);
    ofDrawTriangle(499.3, 237.37, 518.77, 288.34, 499.9, 305.5);
    ofDrawTriangle(398.56, 237.96, 384.58, 283.65, 399.06, 305.5);
    
    //ear lines
    ofSetColor(255, 255, 255);
    ofPolyline earl;
    earl.addVertex(400.2, 248.6);
    earl.addVertex(396.51, 220.79);
    earl.addVertex(421.85, 236.18);
    earl.draw();
    
    ofPolyline earr;
    earr.addVertex(488.14, 239.44);
    earr.addVertex(504.84, 227.48);
    earr.addVertex(503.64, 252.57);
    earr.draw();
    
    //eyes
    ofSetColor(255, 255, 255);
    ofDrawCircle(433.19, 262.96, 3);
    ofDrawCircle(466.41, 263.97, 3);
    
    //nose
    ofSetColor(255, 255, 255);
    ofPolyline nose;
    nose.addVertex(441.68, 275.14);
    nose.addVertex(457.56, 274.24);
    nose.addVertex(450.02, 281.04);
    nose.close();
    nose.draw();
    
    //lips
    //left
    ofSetColor(255, 255, 255);
    ofPolyline lipl;
    lipl.addVertex(450.02, 281.04);
    lipl.addVertex(445.83, 291.39);
    lipl.addVertex(433.53, 293.09);
    lipl.addVertex(428.41, 285.18);
    
    lipl.draw();
    
    //right
    ofPolyline lipr;
    lipr.addVertex(450.02, 281.04);
    lipr.addVertex(457.78, 290.35);
    lipr.addVertex(469.26, 290.04);
    lipr.addVertex(473.68, 284.15);
    
    lipr.draw();
    
    //lop
    ofSetColor(255, 204, 255);
    ofDrawCircle(415.22, 285.86, 10.28);
    ofDrawCircle(486.15, 285.86, 10.28);
    
    //sibil
    ofSetColor(255, 255, 255);
    ofDrawLine(434.2, 277.19, 364.19, 263.86);
    ofDrawLine(433.93, 278.89, 397.13, 278.77);
    
    ofDrawLine(465.83, 276.94, 534.38, 269.32);
    ofDrawLine(466.53, 279.35, 500.98, 280.52);
    
    //body
    ofSetColor(0);
    ofDrawRectangle(390.4, 305.5, 67.16, 175);
    ofDrawTriangle(367.5, 339, 390.4, 305.5, 390.4, 468.35);
    
//        if(tail){
    //tail
       
        ofDrawBitmapString(ofGetMouseX(), 100, 100);
        ofPushMatrix();
        ofTranslate(414.5, 480);
        ofRotateZDeg(mouseX);
        drawTail(0,0);
        ofPopMatrix();

//        }
//        else {
//            ofPushMatrix();
//            ofTranslate(414.5, 480);
//
//            ofPolyline tail;
//            tail.addVertex(0, 0);
//            tail.addVertex(7, 154.56);
//            tail.addVertex(52, 133);
//            tail.addVertex(115.15, 115);
//            tail.draw();
//            ofPopMatrix();
//
//
//        }
    
    //tree
    ofSetColor(0);
    ofPolyline tree;
    tree.addVertex(798.32, 0);
    tree.addVertex(813.58, 365.36);
    tree.addVertex(639.58, 409.59);
    tree.addVertex(555.59, 381.84);
    tree.addVertex(491.09, 381.84);
    tree.addVertex(495.59, 402.09);
    tree.addVertex(555.59, 402.09);
    tree.addVertex(615.59, 423.09);
    tree.addVertex(509.09, 455.24);
    tree.addVertex(233.1, 436.59);
    tree.addVertex(233.1, 460.59);
    tree.addVertex(512, 487.59);
    tree.addVertex(811.57, 409.59);
    tree.addVertex(799.81, 768);
    tree.draw();
    }
    else if (drawSecond){
        
        //drawFirst again
        
        ofSetColor(0);
        //left ear
        ofDrawTriangle(381.81 , 202.06, 440.05, 237.12, 392.27, 266.1);
        //right ear
        ofDrawTriangle(469.62, 237.92, 518.51, 205.69, 499.26, 305.5);
        //face
        ofDrawRectangle(398.56, 236.96, 100, 68);
        ofDrawTriangle(499.3, 237.37, 518.77, 288.34, 499.9, 305.5);
        ofDrawTriangle(398.56, 237.96, 384.58, 283.65, 399.06, 305.5);
        
        //eat lines
        ofSetColor(255, 255, 255);
        ofPolyline earl;
        earl.addVertex(400.2, 248.6);
        earl.addVertex(396.51, 220.79);
        earl.addVertex(421.85, 236.18);
        earl.draw();
        
        ofPolyline earr;
        earr.addVertex(488.14, 239.44);
        earr.addVertex(504.84, 227.48);
        earr.addVertex(503.64, 252.57);
        earr.draw();
        
        //eyes
        ofSetColor(255, 255, 255);
        ofDrawCircle(433.19, 262.96, 3);
        ofDrawCircle(466.41, 263.97, 3);
        
        //nose
        ofSetColor(255, 255, 255);
        ofPolyline nose;
        nose.addVertex(441.68, 275.14);
        nose.addVertex(457.56, 274.24);
        nose.addVertex(450.02, 281.04);
        nose.close();
        nose.draw();
        
        //lips
        //left
        ofSetColor(255, 255, 255);
        ofPolyline lipl;
        lipl.addVertex(450.02, 281.04);
        lipl.addVertex(445.83, 291.39);
        lipl.addVertex(433.53, 293.09);
        lipl.addVertex(428.41, 285.18);
        
        lipl.draw();
        
        //right
        ofPolyline lipr;
        lipr.addVertex(450.02, 281.04);
        lipr.addVertex(457.78, 290.35);
        lipr.addVertex(469.26, 290.04);
        lipr.addVertex(473.68, 284.15);
        
        lipr.draw();
        
        //lop
        ofSetColor(255, 204, 255);
        ofDrawCircle(415.22, 285.86, 10.28);
        ofDrawCircle(486.15, 285.86, 10.28);
        
        //sibil
        ofSetColor(255, 255, 255);
        ofDrawLine(434.2, 277.19, 364.19, 263.86);
        ofDrawLine(433.93, 278.89, 397.13, 278.77);
        
        ofDrawLine(465.83, 276.94, 534.38, 269.32);
        ofDrawLine(466.53, 279.35, 500.98, 280.52);
        
        //body
        ofSetColor(0);
        ofDrawRectangle(390.4, 305.5, 67.16, 175);
        ofDrawTriangle(367.5, 339, 390.4, 305.5, 390.4, 468.35);
        
        //tail
        ofDrawBitmapString(ofGetMouseX(), 100, 100);
        ofPushMatrix();
        //ofSetLineWidth(5);
        float m =ofMap(mouseX,0, ofGetWidth(),263 ,126);
        ofTranslate(414.5, 480);
        ofRotateZDeg(m);
        drawTail(0,0);
        
        ofPopMatrix();
     
        
        //tree
        ofSetColor(0);
        ofPolyline tree;
        tree.addVertex(798.32, 0);
        tree.addVertex(813.58, 365.36);
        tree.addVertex(639.58, 409.59);
        tree.addVertex(555.59, 381.84);
        tree.addVertex(491.09, 381.84);
        tree.addVertex(495.59, 402.09);
        tree.addVertex(555.59, 402.09);
        tree.addVertex(615.59, 423.09);
        tree.addVertex(509.09, 455.24);
        tree.addVertex(233.1, 436.59);
        tree.addVertex(233.1, 460.59);
        tree.addVertex(512, 487.59);
        tree.addVertex(811.57, 409.59);
        tree.addVertex(799.81, 768);
        tree.draw();
        
    //drawSecond
    //cat2
    
        
        ofPushMatrix();
        ofTranslate(movex, movey);
    //ears
    ofSetColor(150, 150, 150);
    ofDrawTriangle(606.59, 534.08, 590.09, 441.09, 672.58, 478.59);
    ofDrawTriangle(782.08, 478.59, 876.57, 441.09, 851.07, 528.08);
    //face
    ofDrawRectangle(606.59, 478.59, 244.49, 140.99);
    ofDrawTriangle(606.59, 534.08, 606.59, 619.58, 574.34, 576.08);
    ofDrawTriangle(851.07, 528.08, 884.07, 565.58, 851.07, 619.58);
    //sibil
    //right
    ofDrawLine(837.81, 559.73, 957.69, 521.8);
    ofDrawLine(840.5, 570.05, 920.89, 584.7);
    //left
    ofDrawLine(658.25, 570.65, 490.43, 527.51);
    ofDrawLine(641.53, 574.35, 538.64, 599.23);
    //body
    ofDrawRectangle(606.59, 619.58, 244.49, 144.42);
    ofDrawTriangle(606.59, 619.58, 606.55, 768, 574.34, 769.57);
    ofDrawTriangle(851.07, 768, 940.13, 771.57, 851.07, 619.58);
    
    }
   
    ofPopMatrix();
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == OF_KEY_LEFT){
        movex = movex-100;
        movey=0;
        
        if(movex<-600){
            movex =ofGetWidth()-200;
        }
    }

}
//-------------------------------------------------------------
void ofApp::drawTail(float x, float y){
    

    
    ofSetColor(0);
    ofPolyline tail;
    //x =414.5
    //y=480

    
    tail.addVertex(x, y);
    tail.addVertex(x+73, y-75.5);
    tail.addVertex(x-52.5, y-133);
    tail.addVertex(x-115.15 ,y);
    tail.draw();

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
    tail = true;
 
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
