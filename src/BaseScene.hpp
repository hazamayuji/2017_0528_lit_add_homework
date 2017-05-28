//
//  BaseScene.hpp
//  2017_0528_lit_add_homework
//
//  Created by 狭間祐至 on 2017/05/28.
//
//
#pragma once
#include "ofMain.h"

class BaseScene{
    
public:
    //仮想関数として定義する
    //ここにはかきこまない
    //仮想関数は抽象的な概念
    //仮想関数　= オーバーライドされる関数
    //オーバーライドされる　= 継承クラスで変更される　= 再定義される
    
    //オーバーライドしてもらいたいメソッドには「virtual」指定子をつけてあげる事がある。
    //virtual指定子がなくてもオーバーライドする事は可能。
    
    //純粋仮想関数を含むクラスを「抽象クラス」と呼ぶ　->　インスタンスは作成できない
    
    virtual void setup(){};
    virtual void update(){};
    virtual void draw(){};
    virtual void keyPressed(int key){};
    virtual void keyReleased(int key){};
    virtual void mouseMoved(int x, int y){};
    virtual void mouseDragged(int x, int y, int button){};
    virtual void mousePressed(int x, int y, int button){};
    virtual void mouseReleased(int x, int y, int button){};
    virtual void mouseEntered(int x, int y){};
    virtual void mouseExited(int x, int y){};
    virtual void windowResized(int w, int h){};
    
    
};
