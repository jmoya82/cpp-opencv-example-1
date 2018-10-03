//
//  helper.cpp
//  main
//
//  Created by Javier on 02.10.18.
//

#include <opencv2/imgproc/imgproc.hpp>
#include "helper.hpp"

void rgb2gray(cv::InputArray img_color, cv::OutputArray image_bw) {
    cv::cvtColor(img_color, image_bw, cv::COLOR_RGB2GRAY);
}
