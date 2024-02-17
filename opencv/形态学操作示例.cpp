#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main(){
    Mat image=imread("/home/ma/garage/images/形态学处理.png",0);
    Mat eroded,dilated,open,close;
    Mat element=getStructuringElement(MORPH_RECT,Size(7,7));
    erode(image,eroded,element);
    dilate(image,dilated,element);
    morphologyEx(image,open,MORPH_OPEN,element);
    morphologyEx(image,close,MORPH_CLOSE,element);
    imshow("腐蚀",eroded);
    imshow("膨胀",dilated);
    imshow("开运算",open);
    imshow("闭运算",close);
    waitKey(0);
    destroyAllWindows;
    return 0;
}