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
class MarkerPoint
{
public:
	int markerID;
	cv::Mat bgraFrame;
	ARUint8 *markerFrame;
	int setupMarker(const char *patt_name);
	cv::Point positionOfMaker(cv::Mat currentFrame);
	int checkIfMarker(ARMarkerInfo *marker_info, int markerSize);
	uchar* convertToBGRA(cv::Mat currentFrame);
	MarkerPoint();
	~MarkerPoint();
};

