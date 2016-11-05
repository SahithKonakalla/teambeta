#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>


void GUIManager::init()
{
    cv::namedWindow("teambeta", 0);
}


void GUIManager::show(bool isFile)
{
    cv::imshow("FRC teambeta", image);
    if(isFile)
        cv::waitKey(0);
    else
        cv::waitKey(10);
}

void GUIManager::setImage(cv::Mat inputImage)
{
    image = inputImage;
}
