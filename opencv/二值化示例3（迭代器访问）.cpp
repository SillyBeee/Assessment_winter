#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main(){
    Mat image=imread("/home/ma/garage/images/1.jpg",0);
    for (Mat_<uchar>::iterator it=image.begin<uchar>();it<image.end<uchar>();it++ ){
        if (*it<127){
            *it=0;
        }
        else{
            *it=255;
        }
    }
    imshow("二值化",image);
    waitKey(0);
    destroyAllWindows;
    return 0;
}