//
//  SceneA.hpp
//  2017_0528_lit_add_homework
//
//  Created by 狭間祐至 on 2017/05/28.
//
//

#pragma once

#include "ofMain.h"
#include "BaseScene.hpp"

#define NUM 300

//BaseSceneを"継承"したSceneA
class SceneA : public BaseScene{
public:
    //仮想関数ではない本当の関数
    void setup();
    void update();
    void draw();
    
    int posx1 = ofGetWidth()/2;
    int posx2 = ofGetWidth()/2;
    int posy1 = ofGetHeight()/2;
    int posy2 = ofGetHeight()/2;

};
