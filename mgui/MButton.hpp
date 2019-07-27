//
//  MButton.hpp
//  opencvSamples
//
//  Created by maozheng on 2019/7/26.
//  Copyright © 2019 maozheng. All rights reserved.
//

#ifndef MButton_hpp
#define MButton_hpp

#include <stdio.h>
#include<opencv2/opencv.hpp>

class MButton {
public:
    cv::Mat *fCanvas;
    cv::Rect fRect;

    MButton(int x,int y,int width,int height);
    ~MButton();
    void render(cv::Mat &bk);
    
private:
    void onPaint();

};

#endif /* MButton_hpp */
