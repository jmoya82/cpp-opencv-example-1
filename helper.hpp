//
//  helper.hpp
//  main
//
//  Created by Javier on 02.10.18.
//

#ifndef helper_hpp
#define helper_hpp

#include <stdio.h>

int rgb2gray(int a, int b);
cv::Mat rgb3gray(cv::Mat img_color, cv::Mat img_bw);

#endif /* helper_hpp */
