#include "meshTest.h"

//--------------------------------------------------------------
void meshTest::setup(){
    ofSetFrameRate(60);
    ofBackground(ofColor::black);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    myCam.setDistance(100);
    
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            myVerts[j * WIDTH + i].set(i - WIDTH / 2, j - HEIGHT / 2, 0);
            myColor[j * WIDTH + i].set(0.5, 0.8, 1.0, 1.0);
        }
    }
    
    myVbo.setVertexData(myVerts, NUM_PARTICLES, GL_DYNAMIC_DRAW);
    myVbo.setColorData(myColor, NUM_PARTICLES, GL_DYNAMIC_DRAW);
}

//--------------------------------------------------------------
void meshTest::update(){
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            float x = sin(i * 0.1 + ofGetElapsedTimef()) * 10.0;
            float y = sin(j * 0.15 + ofGetElapsedTimef()) * 10.0;
            float z = x + y;
            myVerts[j * WIDTH + i] = ofVec3f(i - WIDTH / 2, j - HEIGHT / 2, z);
        }
    }
    
    myVbo.updateVertexData(myVerts, NUM_PARTICLES);
}

//--------------------------------------------------------------
void meshTest::draw(){
    myCam.begin();
    
    glPointSize(2.0);
    myVbo.draw(GL_POINTS, 0, NUM_PARTICLES);
    
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