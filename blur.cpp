#include <opencv2/core/core.hpp> 
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <stdio.h>
#include <iostream>
using namespace cv;
using namespace std;
int main() 
{
    Mat image = imread("f1.jpg", CV_LOAD_IMAGE_UNCHANGED); 

    if (! image.data ) 
    {
        cout << "Could not open or find the image.\n";
        return -1;
    }
    blur(image,image,Size(10,10)); 
    namedWindow( "f1", CV_WINDOW_AUTOSIZE ); 
    imshow( "f2", image ); 
    waitKey(0);
    return 0;
}