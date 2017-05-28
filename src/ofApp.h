#pragma once

#include "ofMain.h"
#include "BaseScene.hpp"
#include "SceneA.hpp"
#include "SceneB.hpp"
#include "SceneC.hpp"

class ofApp : public ofBaseApp{

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    //関数を作成
    void cover_draw();
    void cover_decision();
    void click_sound();
    
    //とりあえずクラスをインスタンス化
    SceneA a;
    SceneB b;
    SceneC c;
		
    //複数のシーンを格納する動的配列
    vector <BaseScene *> scenes;
    
    //現在のシーン番号
    
    int currentScene;

    /*-----------------------BGMに関すること-----------------------*/
    int size_circle = 0;
    float *volume;
    ofSoundPlayer soundplayer;
    
    
    /*-----------------------押したら音なるやつに関すること-----------------------*/

    ofSoundPlayer sound_1;
    ofSoundPlayer sound_2;
    ofSoundPlayer sound_3;
    ofSoundPlayer sound_4;
    
    bool clickButton_1 = false;
    bool clickButton_2 = false;
    bool clickButton_3 = false;
    bool clickButton_4 = false;
    
    bool onButton_1 = false;
    bool onButton_2 = false;
    bool onButton_3 = false;
    bool onButton_4 = false;

};
