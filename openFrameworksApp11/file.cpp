#include "Header.h"
#include "src\ofApp.h"

//void ofApp::setup(){
//	gui.setup();
//	gui.add(radius.setup("radius", 140, 10, 3000));
//}

void ofApp::draw(){
	ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, radius);
	gui.draw();
}