#pragma once

#include "ofMain.h"

class meshTest : public ofBaseApp{
    public:
        void setup();
        void update();
        void draw();
        
        void keyPressed(int key);
        void keyReleased(int key);
        void mouseMoved(int x, int y);
        void mouseDragged(int x, int y, int button);
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
        void windowResized(int w, int h);
        void dragEvent(ofDragInfo dragInfo);
        void gotMessage(ofMessage msg);
    
        static const int WIDTH = 200;
        static const int HEIGHT = 200;
        static const int NUM_PARTICLES = WIDTH * HEIGHT;
    
        ofEasyCam myCam;
        ofVbo myVbo;
        ofVec3f myVerts[NUM_PARTICLES];
        ofFloatColor myColor[NUM_PARTICLES];
};
