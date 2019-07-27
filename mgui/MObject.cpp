//
//  MObject.cpp
//  opencvSamples
//
//  Created by maozheng on 2019/7/27.
//  Copyright © 2019 maozheng. All rights reserved.
//

#include "MObject.hpp"

void MObject::render()
{
    for(int i=0;i<fSubs.size();i++){
        cv::Mat *subCanvas = fSubs[i]->getCanvas();
        cv::Rect rect = fSubs[i]->getRect();
        subCanvas->copyTo((*fCanvas)(rect));
    }
}
