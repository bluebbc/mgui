//
//  main.cpp
//  opencvSamples
//
//  Created by maozheng on 2018/4/12.
//  Copyright © 2018年 maozheng. All rights reserved.
//

#include <iostream>

#include "MButton.hpp"
#include <vector>

#include<iostream>
#include<opencv2/opencv.hpp>

#include "MMainForm.hpp"
#include "MButton.hpp"

using namespace std;
using namespace cv;

void mouseCallback(int event, int x, int y, int flags, void *userdata);
void reander();

int main(int argc, const char * argv[]) {
    MMainForm mainForm(cv::Rect(0,0,960,540));
    
    MButton btn1(cv::Rect(100,100,40,50));
    mainForm.addChild(&btn1);
    
    MButton btn2(cv::Rect(200,200,40,50));
    mainForm.addChild(&btn2);
    
    MButton btn3(cv::Rect(300,300,140,150));
    mainForm.addChild(&btn3);
    
    mainForm.render();
    
    imshow("main", (*mainForm.getCanvas()));
    setMouseCallback("main", mouseCallback);
    waitKey();
    return 0;
}

void mouseCallback(int event, int x, int y, int flags, void *userdata)
{
    printf("e:%d x:%d y:%d flags:%d\n", event, x, y, flags);
}
