#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "lib/binops/include/binops.hpp"

using namespace cv;
using namespace std;

int main(int argc, const char* argv[]) {
  if (argc != 2) {
    cout << "Usage wrong" << endl;
    return -1;
  }

  Mat image;
  image = imread(argv[1], CV_LOAD_IMAGE_COLOR);

  if (!image.data) {
    cout << "Could not open or find the image" << std::endl;
    return -1;
  }

  namedWindow("Display window", WINDOW_AUTOSIZE);
  imshow("Display window", image);

  waitKey(0);

  Mat image_bw;
  cvtColor(image, image_bw, COLOR_RGB2GRAY);

  namedWindow("Display window - b&w", WINDOW_AUTOSIZE);
  imshow("Display window - b&w", image_bw);

  waitKey(0);

  Mat image_bin;
  threshold(image_bw, image_bin, 125, 255, THRESH_BINARY);

  namedWindow("Display window - bin", WINDOW_AUTOSIZE);
  imshow("Display window - bin", image_bin);

  waitKey(0);

  BinOps::Addition a = BinOps::Addition();
  a.setLHS(4);
  a.setRHS(4);
  int result = a.perform();

  std::cout << "Hello, Lena!\n" << result << endl;
  return 0;
}
