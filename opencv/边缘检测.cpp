#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main(){
    Mat image=imread("/home/ma/garage/1.jpg",0);
    int rows=image.rows;
    int cols=image.cols;
    Mat edge=Mat::zeros(rows,cols,CV_8UC1);
    Canny(image,edge,100,200);
    imshow("边缘检测",edge);
    waitKey(0);
    destroyAllWindows;
    return 0;
}