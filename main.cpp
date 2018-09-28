#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main(int argc, const char * argv[]) {
    if (argc !=2) {
        cout << "Usage wrong" << endl;
        return -1;
    }
    
    Mat image;
    image = imread(argv[1], CV_LOAD_IMAGE_COLOR);
    
    if(! image.data )
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
    
    namedWindow( "Display window", WINDOW_AUTOSIZE );
    imshow( "Display window", image );
    
    waitKey(0);
    
    //image = cvtCvtColor(image, image, COLOR_RGB2GRAY);
    
    std::cout << "Hello, Worlderrr2!\n";
    
    return 0;
}
