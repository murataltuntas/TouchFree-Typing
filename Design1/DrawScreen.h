#include <stdio.h>
#include <stdlib.h>	  // malloc(), free()
#include <string>
#include <sstream>
#include <windows.h>  // for Sleep();
#include <ctime>      // time(&timev)  icin
#include <cstring>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/video/video.hpp>


using namespace std;
//using namespace cv;

#define TIME_COUNTER			20.0
#define NUMBER_COLOR			cv::Scalar(0, 0, 255)	// Sayilarin rengi
#define NUMBER2_COLOR			cv::Scalar(0, 200, 200)	// Secilen Sayilarin ekrandaki rengi
#define NUMBER3_COLOR			cv::Scalar(0, 200, 0)	// Secilen Sayilarin onay rengi
#define BORDER_COLOR			CV_RGB(10, 125, 125)	// cizgilerin rengi
#define PROGRESSBAR_COLOR		cv::Scalar(0, 250, 0)	// Progress Bar rengi
#define SHADOW_COLOR			CV_RGB(0, 0, 0)			// golge rengi

class DrawScreen
{
public:
	cv::Mat frames;
	int timeCounter = 0;
	bool num_color = true;
	string numbers = "";
	int keyTurn = -1;

	DrawScreen();
	~DrawScreen();
	void drawObject(int x, int y);
	void drawProgressBar(int number);
	void drawButtonArea();
	string intToString(int number);
	void drawNumbers();
	void drawWindow(cv::Point& coordinate);
	int returnPosition(double x, double y);
};

