// TouchFree Typing
// ============================================================================
//	Includes
// ============================================================================

#include <stdio.h>
#include <stdlib.h>					// malloc(), free()
#include <string>
#include <sstream>
#include <windows.h>  // for Sleep();
#include <ctime>  // time(&timev)  icin
#include <cstring>
#ifdef __APPLE__
#  include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <AR/gsub.h>
#include <AR/config.h>
#include <AR/video.h>
#include <AR/param.h>			// arParamDisp()
#include <AR/ar.h>
#include <AR/gsub_lite.h>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/video/video.hpp>
#include "MarkerPoint.h"
#include "DrawScreen.h"

using namespace std;
using namespace cv;

// ============================================================================
//	Global variables
// ============================================================================
static MarkerPoint mp;
DrawScreen ds;
//video Record
time_t  timev;
string timer;
stringstream ss;
//cv::VideoWriter videoRC; // kameradan vido kaydi yapmak icin.
static ARParam		gARTCparam;
static cv::VideoCapture video;

int main(int argc, char** argv)
{
	// kamerayi acmak icin dosya adresi
	char *cparam_name = "Data/camera_para.dat";
	char *vconf = "";
	char *patt_name = "Data/patt.hiro";

	string videoName = "1445163130";
	video = cv::VideoCapture(0);  // kameradan görüntü alirken
	//video = cv::VideoCapture("C:\\Users\\Murat\\Desktop\\Bitirme\\BitirmeTestingVideo\\" + videoName + ".avi"); // videodan görüntü alirken

	int frame_width = video.get(CV_CAP_PROP_FRAME_WIDTH);
	int frame_height = video.get(CV_CAP_PROP_FRAME_HEIGHT);
	time(&timev);
	ss << timev;
	timer = ss.str();
	//timer = "C:\\Users\\Murat\\Desktop\\Bitirme\\BitirmeTestingVideo\\" + timer + ".avi";
	// kamera açikken aç. videodan çalistirirken kapat
	//videoRC = cv::VideoWriter(timer, CV_FOURCC('M', 'J', 'P', 'G'), 10, cv::Size(frame_width, frame_height), true);

	// setup Camera (Kameranin markeri tanimasi icin)
	arParamLoad(cparam_name, 1, &gARTCparam);
	arParamChangeSize(&gARTCparam, 640, 480, &gARTCparam);
	arInitCparam(&gARTCparam);

	// Load marker(s).
	if (!mp.setupMarker(patt_name)) {
		fprintf(stderr, "main(): Unable to set up AR markerrr.\n");
		//exit(-1);
	}

	char key = 0;
	while (key != 'q'){
		video.read(ds.frames);
		//videoRC.write(ds.frames);  // kameradan alinan goruntuyu kaydeder.
		if (!ds.frames.empty()){
			flip(ds.frames, ds.frames, 1);
			cv::Point markerPosition = mp.positionOfMaker(ds.frames);
			ds.drawWindow(markerPosition);
			// kamera goruntusunu pencerede goster
			imshow("TouchFree Typing", ds.frames);
		}
		key = cv::waitKey(20);
	}

	return (0);
}