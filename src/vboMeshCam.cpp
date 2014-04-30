#include "vboMeshCam.h"

//--------------------------------------------------------------
void vboMeshCam::setup(){
    ofSetFrameRate(60);
    ofBackground(ofColor::black);
    ofEnableDepthTest();
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    myCam.setDistance(400);
    myVideo.initGrabber(WIDTH, HEIGHT);
    
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
void vboMeshCam::update(){
    myVideo.update();
    
    if (myVideo.isFrameNew()) {
        unsigned char * pixels = myVideo.getPixels();
        for (int i = 0; i < WIDTH; i++) {
            for (int j = 0; j < HEIGHT; j++) {
                float r = (float)pixels[j * myVideo.width * 3 + i * 3] / 256.0;
                float g = (float)pixels[j * myVideo.width * 3 + i * 3 + 1] / 256.0;
                float b = (float)pixels[j * myVideo.width * 3 + i * 3 + 2] / 256.0;
                float brightness = (r + g + b) / 3.0f;
                myVerts[j * WIDTH + i] = ofVec3f(i - WIDTH / 2, j - HEIGHT / 2, brightness * 256.0);
                myColor[j * WIDTH + i] = ofFloatColor(r, g, b, 0.8);
            }
        }
        
        myVbo.updateVertexData(myVerts, NUM_PARTICLES);
        myVbo.updateColorData(myColor, NUM_PARTICLES);
    }
}

//--------------------------------------------------------------
void vboMeshCam::draw(){
    myCam.begin();
    
    ofScale(1, -1, 1);
    glPointSize(3.0);
    myVbo.draw(GL_POINTS, 0, NUM_PARTICLES);
    
    myCam.end();
}

//--------------------------------------------------------------
void vboMeshCam::keyPressed(int key){
    
}

//--------------------------------------------------------------
void vboMeshCam::keyReleased(int key){
    
}

//--------------------------------------------------------------
void vboMeshCam::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void vboMeshCam::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void vboMeshCam::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void vboMeshCam::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void vboMeshCam::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void vboMeshCam::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void vboMeshCam::dragEvent(ofDragInfo dragInfo){
    
}