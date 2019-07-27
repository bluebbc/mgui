//
//  MObject.hpp
//  opencvSamples
//
//  Created by maozheng on 2019/7/27.
//  Copyright © 2019 maozheng. All rights reserved.
//

#ifndef MObject_hpp
#define MObject_hpp

#include <stdio.h>
#include <vector>
#include<opencv2/opencv.hpp>

class MObject {
protected:
    cv::Mat *fCanvas;
    cv::Rect fRect;
    MObject *fFather;
    std::vector<MObject *> fSubs;
public:
    MObject(){
        fRect = cv::Rect(0,0,720,720);
        fCanvas = new cv::Mat(fRect.height,fRect.width,CV_8UC3, cv::Scalar(0,255,0));
    }
    MObject(cv::Rect rect){
        fRect = rect;
        fCanvas = new cv::Mat(rect.height,rect.width,CV_8UC3, cv::Scalar(0,255,0));
    }
    virtual ~MObject(){
        if(fCanvas){
            delete fCanvas;
        }
    }
    void render();
    virtual void onPaint()=0;
    
    void addChild(MObject *obj){fSubs.push_back(obj);};
    void setRect(cv::Rect rect){fRect = rect;}
    cv::Rect getRect(){return fRect;}
    cv::Mat *getCanvas(){return fCanvas;};
    
};

#endif /* MObject_hpp */
