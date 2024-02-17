#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main(){
    Mat image=imread("/home/ma/garage/images/1.jpg",0);
    int rows=image.rows;
    int cols=image.cols;
    for (int i=0;i<rows;i++){
        uchar *line=image.ptr<uchar>(i);
        for (int k=0;k<cols;k++){
            if (*line<127){
                *line=0;
                line++;
            }
            else{
                *line=255;
                line++;
            }
        }
    }
    imshow("二值化",image);
    waitKey(0);
    destroyAllWindows;
    return 0;
}