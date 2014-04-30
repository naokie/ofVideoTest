#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(ofColor::black);
    
    myGrab.setVerbose(true);
    myGrab.initGrabber(640, 480);
}

//--------------------------------------------------------------
void ofApp::update(){
    myGrab.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    myGrab.draw(0, 0, ofGetWidth(), ofGetHeight());
    
    myCam.begin();
    
    myBox.set(200);
    myBox.setPosition(-150, 0 ,0);
    myBox.drawWireframe();
    
    mySphere.set(100, 16);
    mySphere.setPosition(ofGetWidth() * .2, ofGetHeight() * .75, 0);
    mySphere.drawWireframe();
    
    myCam.end();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}