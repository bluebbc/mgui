//
//  MButton.cpp
//  opencvSamples
//
//  Created by maozheng on 2019/7/26.
//  Copyright © 2019 maozheng. All rights reserved.
//

#include "MButton.hpp"

MButton::MButton(cv::Rect rect) : MObject(rect){
    onPaint();
}

MButton::~MButton()
{
    
}

void MButton::onPaint()
{
    int radius = fRect.width/2;
    if(fRect.height<fRect.width){
        radius = fRect.height/2;
    }
    cv::circle(*fCanvas,cv::Point(fRect.width/2,fRect.height/2),radius,cv::Scalar(255,0,255));
}
