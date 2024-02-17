#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
int main(){
    Mat image1,image2;
    image1=imread("/home/ma/garage/images/伽马矫正（人脸）.png");
    image2=imread("/home/ma/garage/images/伽马矫正（鱼）.jpeg");
    float gamma=0.5;
    unsigned char lut[256];
    for (int i = 0; i < 256; i++) {
        lut[i] = cv::saturate_cast<uchar>(pow((float)(i / 255.0), gamma) * 255.0);
    }
    Mat i3,i4;
    LUT(image1,Mat(1, 256, CV_8U, lut),i3);
    LUT(image2,Mat(1, 256, CV_8U, lut),i4);
    imshow("1",i3);
    imshow("2",i4);
    waitKey(0);
    destroyAllWindows;
    return 0;
}