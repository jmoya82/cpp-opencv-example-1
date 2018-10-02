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
void rgb3gray(cv::InputArray img_color, cv::OutputArray image_bw);

#endif /* helper_hpp */
