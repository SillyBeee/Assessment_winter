#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;


int main() {
    VideoCapture cap(0);
    namedWindow("摄像头",WINDOW_AUTOSIZE);
    while (true){
        Mat frame;
        cap >>frame;
        imshow("摄像头",frame);
        if (waitKey(1)==27){
            break;
        }
    }
    cap.release();
    destroyAllWindows;
    return 0;
}
