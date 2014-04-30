#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofEnableSmoothing();
    ofEnableDepthTest();
    
    ofBackground(ofColor::black);
    
    // myGrab.setVerbose(true);
    // myGrab.initGrabber(640, 480);
    
    myLight.enable();
    myLight.setSpotlight();
    myLight.setPosition(-100, 100, 100);
    myLight.setAmbientColor(ofFloatColor(0.5, 0.2, 0.2, 1.0));
    myLight.setDiffuseColor(ofFloatColor(0.5, 0.5, 1.0));
    myLight.setSpecularColor(ofFloatColor(1.0, 1.0, 1.0));
}

//--------------------------------------------------------------
void ofApp::update(){
    // myGrab.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    // myGrab.draw(0, 0, ofGetWidth(), ofGetHeight());
    
    myCam.begin();
    
    myBox.set(200);
    myBox.setPosition(-150, 0 ,0);
    myBox.draw();
    
    mySphere.set(100, 16);
    mySphere.setPosition(150, 0, 0);
    mySphere.draw();
    
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