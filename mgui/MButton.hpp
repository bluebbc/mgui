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

#include "MObject.hpp"

class MButton :public MObject{
public:
    
    MButton(cv::Rect rect);
    ~MButton();
    
    void onPaint();
};

#endif /* MButton_hpp */
