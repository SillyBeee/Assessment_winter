#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main(){
    Mat image=imread("/home/ma/garage/images/1.jpg",0);
    int rows=image.rows;
    int cols=image.cols;
    for (int i=0;i<rows;i++){
        for (int k=0;k<cols;k++){
            int temp=image.at<uchar>(i,k);
            if (temp<=127){
                image.at<uchar>(i,k)=0;
            }
            else{
                image.at<uchar>(i,k)=255;
            }
        }
    }
    imshow("二值化",image);
    waitKey(0);
    destroyAllWindows;
    return 0;
}