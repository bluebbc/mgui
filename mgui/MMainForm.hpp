//
//  MMainForm.hpp
//  opencvSamples
//
//  Created by maozheng on 2019/7/27.
//  Copyright © 2019 maozheng. All rights reserved.
//

#ifndef MMainForm_hpp
#define MMainForm_hpp

#include <stdio.h>
#include<opencv2/opencv.hpp>

#include "MObject.hpp"

class MMainForm : public MObject{
public:
    
    MMainForm(cv::Rect rect);
    MMainForm();
    
    void onPaint();
};

#endif /* MMainForm_hpp */
