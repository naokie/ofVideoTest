#include "meshTest.h"

//--------------------------------------------------------------
void meshTest::setup(){
    ofSetFrameRate(60);
    ofBackground(ofColor::black);
    ofEnableDepthTest();
    myCam.setDistance(100);
    
    w = 200;
    h = 200;
    
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            myMesh.addColor(ofFloatColor(0.5, 0.8, 1.0));
        }
    }
}

//--------------------------------------------------------------
void meshTest::update(){
    myMesh.clearVertices();
    
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            float x = sin(i * 0.1 + ofGetElapsedTimef()) * 10.0;
            float y = sin(j * 0.15 + ofGetElapsedTimef()) * 10.0;
            float z = x + y;
            myMesh.addVertex(ofVec3f(i - w / 2, j - h / 2, z));
        }
    }
}

//--------------------------------------------------------------
void meshTest::draw(){
    ofSetHexColor(0xffffff);
    myCam.begin();
    
    glPointSize(2.0);
    glEnable(GL_POINT_SMOOTH);
    myMesh.drawVertices();
    
    myCam.end();
}

//--------------------------------------------------------------
void meshTest::keyPressed(int key){
    
}

//--------------------------------------------------------------
void meshTest::keyReleased(int key){
    
}

//--------------------------------------------------------------
void meshTest::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void meshTest::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void meshTest::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void meshTest::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void meshTest::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void meshTest::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void meshTest::dragEvent(ofDragInfo dragInfo){
    
}