//
//  ElectroCardiogramView.hpp
//  oscReceiver
//
//  Created by HirokiNaganuma on 2018/03/01.
//

#ifndef ElectroCardiogramView_hpp
#define ElectroCardiogramView_hpp

#include "ofMain.h"
#include "HeartRate.hpp"
#include "ofxPostGlitch.h"

class ElectroCardiogramView{
public:
    ElectroCardiogramView(){};
    
    static void init();
    static void update();
    static void draw();
    void post_effects();
    
    ofxPostGlitch myGlitch;
    static ofFbo myFbo;
};

#endif /* ElectroCardiogramView_hpp */
