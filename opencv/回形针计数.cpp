#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;
int main(){
    Mat image=imread("/home/ma/garage/images/回形针.png");
    int rows=image.rows;
    int cols=image.cols;
    //转化成灰度图
    Mat grey,edge,blur,thresholded;
    cvtColor(image,grey,COLOR_BGR2GRAY);
    threshold(grey,thresholded,127,255,THRESH_BINARY);//二值化
    Canny(thresholded,edge,0,200,3,true);//边缘检测
    imshow("canny",edge);
    //对轮廓进行计数
    vector<vector<Point>> contours;
    vector<Vec4i> layer;
    findContours(edge,contours,layer,RETR_EXTERNAL,CHAIN_APPROX_NONE);
    printf("%ld",contours.size());
    waitKey(0);
    destroyAllWindows;
    return 0;
    

}