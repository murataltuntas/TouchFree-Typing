// DrawScreen.cpp
#include "DrawScreen.h"

DrawScreen::DrawScreen()
{
}

DrawScreen::~DrawScreen()
{
}

// ekrana arti isaretini cizmeye yarayan fonksiyon
void DrawScreen::drawObject(int x, int y){
	//cv::circle(frames, cv::Point(x, y), 20, cv::Scalar(0, 255, 0), 2);
	if (y - 25>0)
		cv::line(frames, cv::Point(x, y), cv::Point(x, y - 25), cv::Scalar(0, 255, 0), 2);
	else cv::line(frames, cv::Point(x, y), cv::Point(x, 0), cv::Scalar(0, 255, 0), 2);
	if (y + 25<480)
		cv::line(frames, cv::Point(x, y), cv::Point(x, y + 25), cv::Scalar(0, 255, 0), 2);
	else line(frames, cv::Point(x, y), cv::Point(x, 480), cv::Scalar(0, 255, 0), 2);
	if (x - 25>0)
		line(frames, cv::Point(x, y), cv::Point(x - 25, y), cv::Scalar(0, 255, 0), 2);
	else line(frames, cv::Point(x, y), cv::Point(0, y), cv::Scalar(0, 255, 0), 2);
	if (x + 25<640)
		line(frames, cv::Point(x, y), cv::Point(x + 25, y), cv::Scalar(0, 255, 0), 2);
	else line(frames, cv::Point(x, y), cv::Point(640, y), cv::Scalar(0, 255, 0), 2);

	putText(frames, intToString(x) + "," + intToString(y), cv::Point(x, y + 30), 1, 1, cv::Scalar(0, 255, 0), 2);
}

/* secilen kutucuk cevresine cember cizen fonksiyon */
void DrawScreen::drawProgressBar(int number){
	switch (number)
	{
	case 1:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(115, 145), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(115, 145), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 2:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(115, 235), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(115, 235), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 3:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(115, 325), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(115, 325), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 4:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(115, 415), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(115, 415), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 5:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(205, 415), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(205, 415), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 6:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(295, 415), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(295, 415), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 7:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(385, 415), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(385, 415), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 8:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(385, 325), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(385, 325), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 9:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(385, 235), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(385, 235), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 10:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(385, 145), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(385, 145), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 11:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(250, 145), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR2, 6, 8, 0);
		cv::ellipse(frames, cv::Point(250, 145), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR2, 6, 8, 0);
		break;
	case 12:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(250, 235), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR2, 6, 8, 0);
		cv::ellipse(frames, cv::Point(250, 235), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR2, 6, 8, 0);
		break;
	case 13:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(250, 325), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR2, 6, 8, 0);
		cv::ellipse(frames, cv::Point(250, 325), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR2, 6, 8, 0);
		break;
	default:
		break;
	}
}

// verilen koordinatta kareleri cizer (minX,minY) den (maxX,maxY) ye kadar
void DrawScreen::drawButtonArea(){
	line(frames, cv::Point(70, 10), cv::Point(430, 10), BORDER_COLOR, 3, 2, 0);	   // yatay 1.
	line(frames, cv::Point(70, 100), cv::Point(430, 100), BORDER_COLOR, 3, 2, 0);  // yatay 2.
	line(frames, cv::Point(70, 370), cv::Point(430, 370), BORDER_COLOR, 3, 2, 0);  // yatay 3.
	line(frames, cv::Point(70, 460), cv::Point(430, 460), BORDER_COLOR, 3, 2, 0);  // yatay 4.

	line(frames, cv::Point(70, 10), cv::Point(70, 460), BORDER_COLOR, 3, 2, 0);	   // dikey 1.
	line(frames, cv::Point(160, 100), cv::Point(160, 460), BORDER_COLOR, 3, 2, 0); // dikey 2.
	line(frames, cv::Point(340, 100), cv::Point(340, 460), BORDER_COLOR, 3, 2, 0); // dikey 3.
	line(frames, cv::Point(430, 10), cv::Point(430, 460), BORDER_COLOR, 3, 2, 0);  // dikey 4.

	line(frames, cv::Point(70, 190), cv::Point(160, 190), BORDER_COLOR, 3, 2, 0);  // ara 1.
	line(frames, cv::Point(70, 280), cv::Point(160, 280), BORDER_COLOR, 3, 2, 0);  // ara 2.
	line(frames, cv::Point(250, 370), cv::Point(250, 460), BORDER_COLOR, 3, 2, 0); // ara 3.
	line(frames, cv::Point(340, 280), cv::Point(430, 280), BORDER_COLOR, 3, 2, 0); // ara 4.
	line(frames, cv::Point(340, 190), cv::Point(430, 190), BORDER_COLOR, 3, 2, 0); // ara 5.

	circle(frames, cv::Point(250, 145), 36, CV_RGB(255, 0, 0), 3, 8, 0);   // iptal
	circle(frames, cv::Point(250, 235), 36, CV_RGB(255, 255, 0), 3, 8, 0); // sil
	circle(frames, cv::Point(250, 325), 36, CV_RGB(0, 255, 0), 3, 8, 0);   // onay
}

// numarayi stringe ceviren fonksiyon 
std::string DrawScreen::intToString(int number){
	std::stringstream ss;
	ss << number;
	return ss.str();
}

// karelerin icine rakamlari ve kabul/iptal tuslarini basar
void DrawScreen::drawNumbers(){
	// draw 1
	putText(frames, intToString(1), cv::Point(95, 165), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	// draw 2
	putText(frames, intToString(2), cv::Point(95, 255), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	// draw 3
	putText(frames, intToString(3), cv::Point(95, 345), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	// draw 4
	putText(frames, intToString(4), cv::Point(95, 435), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	// draw 5
	putText(frames, intToString(5), cv::Point(185, 435), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	// draw 6
	putText(frames, intToString(6), cv::Point(275, 435), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	// draw 7
	putText(frames, intToString(7), cv::Point(365, 435), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	// draw 8
	putText(frames, intToString(8), cv::Point(365, 345), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	// draw 9
	putText(frames, intToString(9), cv::Point(365, 255), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	// draw 0
	putText(frames, intToString(0), cv::Point(365, 165), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);

	// draw false
	line(frames, cv::Point(235, 130), cv::Point(265, 160), CV_RGB(255, 0, 0), 3, 8, 0);
	line(frames, cv::Point(265, 130), cv::Point(235, 160), CV_RGB(255, 0, 0), 3, 8, 0);

	// draw <- (remove)
	line(frames, cv::Point(230, 235), cv::Point(245, 250), CV_RGB(255, 255, 0), 4, 8, 0);
	line(frames, cv::Point(230, 235), cv::Point(245, 220), CV_RGB(255, 255, 0), 4, 8, 0);
	line(frames, cv::Point(230, 235), cv::Point(275, 235), CV_RGB(255, 255, 0), 4, 8, 0); // line

	// draw right		
	line(frames, cv::Point(250, 345), cv::Point(265, 310), CV_RGB(0, 255, 0), 3, 8, 0);
	line(frames, cv::Point(235, 325), cv::Point(250, 345), CV_RGB(0, 255, 0), 3, 8, 0);
}

// marker'in hangi numara ustunde oldugunu ve donduren fonkiyon
int DrawScreen::returnPosition(double x, double y){
	int counter = 1;
	for (int i = 1; i < 5; i++){
		if (x < 160 && x > 70 && y < 90 * i + 100 && y > 90 * i + 10)
			return counter;
		else
			counter++;
	}

	for (int i = 1; i < 4; i++){
		if (x < i * 90 + 160 && x > i * 90 + 70 && y < 460 && y > 370)
			return counter;
		else
			counter++;
	}

	for (int i = 3; i > 0; i--){
		if (x < 430 && x > 340 && y < 90 * i + 100 && y > 90 * i + 10)
			return counter;
		else
			counter++;
	}
	// iptal
	if (x < 295 && x > 205 && y < 190 && y > 100)
		return 11;
	// silme
	else if (x < 295 && x > 205 && y < 280 && y > 190)
		return 12;
	// onay
	else if (x < 295 && x > 205 && y < 370 && y > 280)
		return 13;
	else
		return -1;
}

// ekrana çizen fonksiyon.
void DrawScreen::drawWindow(cv::Point& coordinate){
	// sayilari ciz
	drawButtonArea();
	drawNumbers();

	/* renk degistiren cizgi */
	/*
	uchar*row = frames.ptr<uchar>(300);
	line(frames, cv::Point(440, 300), cv::Point(460, 460), CV_RGB(255 - row[440], 255 - row[440], 255 - row[440]), 3, 2, 0); // dikey 3.
	*/

	// secilen sayilari ekrana basar
	if (num_color) {
		putText(frames, numbers, cv::Point(75, 85), 7, 3, NUMBER2_COLOR, 3);
	}
	else {
		putText(frames, numbers, cv::Point(75, 85), 7, 3, NUMBER3_COLOR, 3);
	}

	if (coordinate.x != -1 && coordinate.y != -1){
		int temp = returnPosition(coordinate.x, coordinate.y);
		// eger temp 0'dan buyukse ve keyTurn onceden bir tusun ustunde bulunmussa timeCounter artilir
		if (temp > 0 && temp == keyTurn){
			timeCounter++;
		}
		// eger temp 0'dan buuykse ama keyTurk tempe esit degilse , ilk kez o numaraya giriyor demektir , timeCounter 1 yapilir ve keyTurn'e temp degeri atanir
		else if (temp > 0){
			keyTurn = temp;
			timeCounter = 1;
		}
		// bunlarin hicbiri olmamissa timeCounter ve keyTurn default degerlerine dondurulur
		else{
			keyTurn = -1;
			timeCounter = 0;
		}

		// dairesel progress bar ciz
		drawProgressBar(temp);

		// eger timeCounter degeri istenen miktara ulasmissa bu deger artik bir input olmus demektir
		if (timeCounter >= TIME_COUNTER){
			// eger bu deger 11'den kucuk ve 0'dan buyuk ise bu bir rakam demektir , 10'a gore mod alinir
			if (keyTurn < 11 && keyTurn>0){
				keyTurn = keyTurn % 10;
				printf("Deger %d\n", keyTurn);
				numbers = numbers + intToString(keyTurn);
			}
			// 11 ise iptal butonudur
			else if (keyTurn == 11){
				printf("CANCEL\n");
				num_color = true;
				numbers = "";
			}
			// 12 ise silme butonudur
			else if (keyTurn == 12){
				int lng = numbers.length() - 1;
				if (lng >= 0)
				{
					string str2 = numbers.substr(0, numbers.length() - 1);
					printf("REMOVE\n");
					numbers = str2;
				}
			}
			// 13 ise onaylama butonudur
			else if (keyTurn == 13){
				printf("ONAY\n");
				num_color = false;
			}
			// timeCounter ve keyTurn degerlerini default degerlerine getir
			timeCounter = 0;
			keyTurn = -1;
		}
		// marker icin arti isaretini ciz
		if (temp == -1)
		{
			drawObject(coordinate.x, coordinate.y);
		}
	}

	// marker bulunamamissa keyTurn ve timeCounter degerlerini default degerlerine getir
	else{
		keyTurn = -1;
		timeCounter = 0;
	}
}
