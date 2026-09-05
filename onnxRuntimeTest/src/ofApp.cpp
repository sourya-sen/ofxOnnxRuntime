#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofxOnnxRuntime::BaseHandler testHandler;
	testHandler.setup("wd14_tagger.onnx");

	auto dims = testHandler.getInputDims();
	std::string dimStr;
	for (auto d : dims) dimStr += ofToString(d) + " ";
	ofLogNotice("test") << "input dims: " << dimStr;

	auto& output = testHandler.run(); // safe to call with unfilled (zero) input just to inspect shape
	auto outShape = output.GetTensorTypeAndShapeInfo().GetShape();
	std::string outStr;
	for (auto d : outShape) outStr += ofToString(d) + " ";
	ofLogNotice("test") << "output dims: " << outStr;
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::exit(){

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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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
