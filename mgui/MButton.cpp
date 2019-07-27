//
//  MButton.cpp
//  opencvSamples
//
//  Created by maozheng on 2019/7/26.
//  Copyright © 2019 maozheng. All rights reserved.
//

#include "MButton.hpp"

MButton::MButton(int x,int y,int width,int height)
{
    fRect.x = x;
    fRect.y = y;
    fRect.width = width;
    fRect.height = height;
    fCanvas = new cv::Mat(height,width,CV_8UC3, cv::Scalar(255,255,0));
    onPaint();
}

MButton::~MButton()
{
    delete fCanvas;
}

void MButton::render(cv::Mat &bk)
{
    fCanvas->copyTo(bk(fRect));
}

void MButton::onPaint()
{
    int radius = fRect.width/2;
    if(fRect.height<fRect.width){
        radius = fRect.height/2;
    }
    cv::circle(*fCanvas,cv::Point(fRect.width/2,fRect.height/2),radius,cv::Scalar(255,0,0));
}
