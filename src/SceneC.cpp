//
//  SceneC.cpp
//  2017_0528_lit_add_homework
//
//  Created by 狭間祐至 on 2017/05/28.
//
//

#include "SceneC.hpp"
#include "ofApp.h"

void SceneC::setup(){
    
}

void SceneC::update(){
    
}

void SceneC::draw(){
    ofBackground(0, 0, 0);
    
    /*-----------------------色のついた四角形を描画-----------------------*/
    ofSetColor(255, 0, 0);
    ofDrawRectangle(0, 0, ofGetWidth()/2, ofGetHeight()/2);
    
    ofSetColor(0, 255, 0);
    ofDrawRectangle(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2, ofGetHeight()/2);
    
    ofSetColor(0, 0, 255);
    ofDrawRectangle(ofGetWidth()/2, 0, ofGetWidth(), ofGetHeight()/2);
    
    ofSetColor(0, 0, 0);
    ofDrawRectangle(0, ofGetHeight()/2, ofGetWidth()/2, ofGetHeight());
    
    }





    
    



