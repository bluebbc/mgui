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
using namespace std;
using namespace cv;

void mouseCallback(int event, int x, int y, int flags, void *userdata);
void reander();

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cv::Mat buffer(540, 960, CV_8UC3, Scalar(255,0,0));
    
    MButton btn1(100,100,40,50);
    btn1.render(buffer);
    
    MButton btn2(200,200,40,10);
    btn2.render(buffer);
    
    MButton btn3(300,300,30,40);
    btn3.render(buffer);
    
    imshow("main", buffer);
    setMouseCallback("main", mouseCallback);
    waitKey();
    return 0;
}

void mouseCallback(int event, int x, int y, int flags, void *userdata)
{
    printf("e:%d x:%d y:%d flags:%d\n", event, x, y, flags);
}
