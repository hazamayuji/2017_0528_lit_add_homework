#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0, 0, 0);
    //透明度を設定可能に
    ofEnableAlphaBlending();
    
    
    /*-----------------------画面切り替え----------------------*/
    //シーンを新規に生成し、配列に追加
    //A
    BaseScene *sa = new SceneA();
    sa -> setup();
    scenes.push_back(sa);
    
    //B
    BaseScene *sb = new SceneB();
    sb -> setup();
    scenes.push_back(sb);
    
    //C
    BaseScene *sc = new SceneC();
    sc -> setup();
    scenes.push_back(sc);
    
    // currentScene = 0;
    
    
    /*-----------------------音楽を再生&ループ----------------------*/
    soundplayer.load("flash.mp3");
    soundplayer.setLoop(true);
    soundplayer.setVolume(0.3);
    soundplayer.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    if(currentScene == 0){
        a.update();
    }else if(currentScene == 1){
        b.update();
    }else if(currentScene == 2){
        c.update();
    }
    
    //まだ理解できてない
    //scenes[currentScene] -> update();
    
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    if(currentScene == 0){
        a.draw();
    }else if(currentScene == 1){
        b.draw();
    }else if(currentScene == 2){
        c.draw();
    }
    
    //まだ理解できてない
    //scenes[currentScene] -> draw();
    
    
    
    /*-----------------------カバーの処理----------------------*/
    cover_draw();//sceneC
    
    
    
    if(clickButton_1){
        sound_1.load("1.wav");
        sound_1.setVolume(100.0);
        sound_1.play();
        sound_1.setMultiPlay(false);
    
    }
    
    if(clickButton_2){
        sound_2.load("2.wav");
        sound_2.setVolume(100.0);
        sound_2.play();
        sound_2.setMultiPlay(false);
        
    }
    
    if(clickButton_3){
        sound_3.load("3.wav");
        sound_3.setVolume(100.0);
        sound_3.play();
        sound_3.setMultiPlay(false);
        
    }
    
    if(clickButton_4){
        sound_4.load("4.wav");
        sound_4.setVolume(100.0);
        sound_4.play();
        sound_4.setMultiPlay(false);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch (key) {
        case '1':
            currentScene = 0;
            break;
        case '2':
            currentScene = 1;
            break;
        case '3':
            currentScene = 2;
            break;
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
    /*-----------------------カバーの処理----------------------*/
    cover_decision();//sceneC
    

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    click_sound();//sceneC
    
    

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    if(currentScene == 2){
        if( mouseX > 0 &&  mouseY > 0  && mouseX < ofGetWidth()/2 && mouseY < ofGetHeight()/2){
            clickButton_1 = false;
        }else{
            clickButton_1 = true;
        }
    }
    
    if(currentScene == 2){
        if( mouseX > ofGetWidth()/2 &&  mouseY > 0  && mouseX < ofGetWidth() && mouseY < ofGetHeight()/2){
            clickButton_2 = false;
        }else{
            clickButton_2 = true;
        }
    }
    
    if(currentScene == 2){
        if( mouseX > 0 &&  mouseY > ofGetHeight()/2  && mouseX < ofGetWidth()/2 && mouseY < ofGetHeight()){
            clickButton_3 =false;
        }else{
            clickButton_3 = true;
        }
    }
    
    if(currentScene == 2){
        if( mouseX > ofGetWidth()/2 &&  mouseY > ofGetHeight()/2  && mouseX < ofGetWidth() && mouseY < ofGetHeight()){
            clickButton_4 = false;
        }else{
            clickButton_4 = true;
        }
    }


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


/*-----------------------ボタン押したら音なるの処理----------------------*/

void ofApp::click_sound(){

    if(currentScene == 2){
        if( mouseX > 0 &&  mouseY > 0  && mouseX < ofGetWidth()/2 && mouseY < ofGetHeight()/2){
            clickButton_1 = true;
        }else{
            clickButton_1 = false;
        }
    }
    
    if(currentScene == 2){
        if( mouseX > ofGetWidth()/2 &&  mouseY > 0  && mouseX < ofGetWidth() && mouseY < ofGetHeight()/2){
            clickButton_2 = true;
        }else{
            clickButton_2 = false;
        }
    }
    
    if(currentScene == 2){
        if( mouseX > 0 &&  mouseY > ofGetHeight()/2  && mouseX < ofGetWidth()/2 && mouseY < ofGetHeight()){
            clickButton_3 = true;
        }else{
            clickButton_3 = false;
        }
    }
    
    if(currentScene == 2){
        if( mouseX > ofGetWidth()/2 &&  mouseY > ofGetHeight()/2  && mouseX < ofGetWidth() && mouseY < ofGetHeight()){
            clickButton_4 = true;
        }else{
            clickButton_4 = false;
        }
    }

}


/*-----------------------カバーの処理----------------------*/
void ofApp::cover_draw(){
    ofFill();
    ofSetColor(255, 255, 255, 127);

    if(onButton_1){
        ofDrawRectangle(0, 0, ofGetWidth()/2, ofGetHeight()/2);
    }
    
    if(onButton_2){
        ofDrawRectangle(ofGetWidth()/2, 0, ofGetWidth(), ofGetHeight()/2);
    }
    
    if(onButton_3){
        ofDrawRectangle(0, ofGetHeight()/2, ofGetWidth()/2, ofGetHeight());
    }
    
    if(onButton_4){
        ofDrawRectangle(ofGetWidth()/2, ofGetHeight()/2,ofGetWidth(), ofGetHeight());
    }
    
}

void ofApp::cover_decision(){
    if(currentScene == 2){
        if( mouseX > 0 &&  mouseY > 0  && mouseX < ofGetWidth()/2 && mouseY < ofGetHeight()/2){
            onButton_1 = true;
        }else{
            onButton_1 = false;
        }
    }
    
    if(currentScene == 2){
        if( mouseX > ofGetWidth()/2 &&  mouseY > 0  && mouseX < ofGetWidth() && mouseY < ofGetHeight()/2){
            onButton_2 = true;
        }else{
            onButton_2 = false;
        }
    }
    
    if(currentScene == 2){
        if( mouseX > 0 &&  mouseY > ofGetHeight()/2  && mouseX < ofGetWidth()/2 && mouseY < ofGetHeight()){
            onButton_3 = true;
        }else{
            onButton_3 = false;
        }
    }
    
    if(currentScene == 2){
        if( mouseX > ofGetWidth()/2 &&  mouseY > ofGetHeight()/2  && mouseX < ofGetWidth() && mouseY < ofGetHeight()){
            onButton_4 = true;
        }else{
            onButton_4 = false;
        }
    }
}
