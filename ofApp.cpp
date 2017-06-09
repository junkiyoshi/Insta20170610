#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(0);
	ofSetWindowTitle("20170609");

	this->angle_noise = ofRandom(10);
}

//--------------------------------------------------------------
void ofApp::update(){
	this->angle_noise += 0.01;
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	this->cam.begin();

	float radius, angle;
	float x, y;
	float tmp_noise;
	ofVec3f pre_vec;

	for (int i = 0; i < 360; i += 10) {
		pre_vec = ofVec3f(0, 0, 0);
		tmp_noise = this->angle_noise;

		for (radius = 50; radius < ofGetWidth() / 2; radius += 50) {
			angle = i + ofNoise(tmp_noise) * 360;
			x = radius * cos(angle * DEG_TO_RAD);
			y = radius * sin(angle * DEG_TO_RAD);

			ofLine(ofVec3f(x, y, 0), pre_vec);

			pre_vec = ofVec3f(x, y, 0);
			tmp_noise += 1;
		}
	}

	cam.end();
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
