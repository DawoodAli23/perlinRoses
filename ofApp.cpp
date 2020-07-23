#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
	gui.setup();
	//gui.add(radiusDecrement.setup("RADIUS DECREMENT", .08, 0, 1));
	gui.add(noiseMutiplier.setup("NOISE MULTIPLIER", .065, 0, 1));
	ofSetWindowShape(540, 540);
	ofBackground(0);
	radius = 300;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	gui.draw();
	ofSetBackgroundAuto(false);
	ofSeedRandom();
	ofTranslate(ofGetHeight() / 2, ofGetWidth() / 2);
	ofNoFill();
	ofSetColor(255, 25);
	ofSetLineWidth(1);
	//float noiseMutiplier = .035;
	
	ofBeginShape();
	for (int i = 0; i < 360; i++) {
		float noiseFactor = ofNoise(i * noiseMutiplier, ofGetElapsedTimef());
		int x = radius * cos(ofDegToRad(i)) * noiseFactor;
		int y = radius * sin(ofDegToRad(i)) * noiseFactor;
		ofCurveVertex(x, y);
	}
	if (radius > 0) {
		radius -= .1;
	}
	
	ofEndShape(true);
	//std::cout << radius << std::endl;
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
