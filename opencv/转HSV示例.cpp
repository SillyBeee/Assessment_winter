#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main(){
    Mat image=imread("/home/ma/garage/images/1.jpg");
    Mat Hsv;
    cvtColor(image,Hsv,COLOR_RGB2HSV);
    imshow("HSV",Hsv);
    waitKey(0);
    destroyAllWindows;
    return 0;
}