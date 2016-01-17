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
		cv::ellipse(frames, cv::Point(125, 125), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(125, 125), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 2:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(225, 125), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(225, 125), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 3:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(325, 125), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(325, 125), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 4:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(125, 225), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(125, 225), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 5:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(225, 225), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(225, 225), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 6:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(325, 225), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(325, 225), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 7:
		// dairesel progress bar ciz
		//cv::ellipse(frames, cv::Point(125, 325), cv::Size(36, 36), 0, -90, -90 + 360.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 3, 8, 0);
		cv::ellipse(frames, cv::Point(125, 325), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(125, 325), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 8:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(225, 325), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(225, 325), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 9:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(325, 325), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(325, 325), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 10:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(125, 425), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(125, 425), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 11:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(225, 425), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(225, 425), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 12:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(325, 425), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(325, 425), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	default:
		break;
	}
}

// verilen koordinatta kareleri cizer (minX,minY) den (maxX,maxY) ye kadar
void DrawScreen::drawButtonArea(double x, double  y){
	double cx = 0, cy = 0;
	if (x != 0)	cx = x;
	if (y != 0)	cy = y;

	cv::Scalar bordor(100, cx, cy);	// cizgilerin rengi
	// ust alan
	line(frames, cv::Point(70, 5), cv::Point(370, 5), bordor, 3, 2, 0);	// ust
	line(frames, cv::Point(70, 60), cv::Point(370, 60), bordor, 3, 2, 0);	// alt
	line(frames, cv::Point(70, 5), cv::Point(70, 60), bordor, 3, 2, 0);	// sol
	line(frames, cv::Point(370, 5), cv::Point(370, 60), bordor, 3, 2, 0);// sag
	// ekrana numara karelerini vcizen dongu	
	for (int i = 1; i < 5; i++){
		for (int j = 1; j < 4; j++){
			circle(frames, cv::Point(100 * j + 25, 100 * i + 25), 36, bordor, 3, 8, 0);
		}
	}
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
	if (keyTurn == 1)
		putText(frames, intToString(1), cv::Point(106, 140), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(1), cv::Point(109, 143), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(1), cv::Point(106, 140), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 2
	if (keyTurn == 2)
		putText(frames, intToString(2), cv::Point(206, 140), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(2), cv::Point(209, 143), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(2), cv::Point(206, 140), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 3
	if (keyTurn == 3)
		putText(frames, intToString(3), cv::Point(306, 140), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(3), cv::Point(309, 143), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(3), cv::Point(306, 140), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 4
	if (keyTurn == 4)
		putText(frames, intToString(4), cv::Point(106, 240), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(4), cv::Point(109, 243), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(4), cv::Point(106, 240), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 5
	if (keyTurn == 5)
		putText(frames, intToString(5), cv::Point(206, 240), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(5), cv::Point(209, 243), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(5), cv::Point(206, 240), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 6
	if (keyTurn == 6)
		putText(frames, intToString(6), cv::Point(306, 240), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(6), cv::Point(309, 243), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(6), cv::Point(306, 240), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 7
	if (keyTurn == 7)
		putText(frames, intToString(7), cv::Point(106, 340), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(7), cv::Point(109, 343), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(7), cv::Point(106, 340), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 8
	if (keyTurn == 8)
		putText(frames, intToString(8), cv::Point(206, 340), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(8), cv::Point(209, 343), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(8), cv::Point(206, 340), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 9
	if (keyTurn == 9)
		putText(frames, intToString(9), cv::Point(306, 340), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(9), cv::Point(309, 343), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(9), cv::Point(306, 340), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 0
	if (keyTurn == 11)
		putText(frames, intToString(0), cv::Point(206, 440), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(0), cv::Point(209, 443), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(0), cv::Point(206, 440), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw right	
	if (keyTurn == 12){
		line(frames, cv::Point(325, 440), cv::Point(340, 405), NUMBER_COLOR, 4, 8, 0);
		line(frames, cv::Point(310, 420), cv::Point(325, 440), NUMBER_COLOR, 4, 8, 0);
	}
	else{
		line(frames, cv::Point(328, 443), cv::Point(343, 408), SHADOW_COLOR, 3, 8, 0);
		line(frames, cv::Point(313, 423), cv::Point(328, 443), SHADOW_COLOR, 3, 8, 0);
		line(frames, cv::Point(325, 440), cv::Point(340, 405), NUMBER_COLOR, 3, 8, 0);
		line(frames, cv::Point(310, 420), cv::Point(325, 440), NUMBER_COLOR, 3, 8, 0);
	}
	// draw false
	if (keyTurn == 10){
		line(frames, cv::Point(110, 405), cv::Point(140, 435), NUMBER_COLOR, 4, 8, 0);
		line(frames, cv::Point(140, 405), cv::Point(110, 435), NUMBER_COLOR, 4, 8, 0);
	}
	else{
		line(frames, cv::Point(113, 408), cv::Point(143, 438), SHADOW_COLOR, 3, 8, 0);
		line(frames, cv::Point(143, 408), cv::Point(113, 438), SHADOW_COLOR, 3, 8, 0);
		line(frames, cv::Point(110, 405), cv::Point(140, 435), NUMBER_COLOR, 3, 8, 0);
		line(frames, cv::Point(140, 405), cv::Point(110, 435), NUMBER_COLOR, 3, 8, 0);
	}
}

// marker'in hangi numara ustunde oldugunu ve donduren fonkiyon
int DrawScreen::returnPosition(double x, double y){
	int counter = 1;
	for (int i = 1; i < 5; i++){
		for (int j = 1; j < 4; j++){
			if (x < 100 * j + 50 && x > 100 * j && y < 100 * i + 50 && y > 100 * i)
				return counter;
			else
				counter++;
		}
	}
	return -1;
}

// ekrana çizen fonksiyon.
void DrawScreen::drawWindow(cv::Point& coordinate){
	// sayilari ciz
	drawButtonArea((coordinate.x % 256), (coordinate.y % 256));
	drawNumbers();
	// secilen sayilari ekrana basar
	if (num_color) {
		putText(frames, numbers, cv::Point(75, 51), 5, 3, NUMBER2_COLOR, 3);
	}
	else {
		putText(frames, numbers, cv::Point(75, 51), 5, 3, NUMBER3_COLOR, 3);
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
		//drawProgressBar(temp);

		// eger timeCounter degeri istenen miktara ulasmissa bu deger artik bir input olmus demektir
		if (timeCounter >= TIME_COUNTER){
			// eger bu deger 11'den kucuk ve 0'dan buyuk ise bu bir rakam demektir , 10'a gore mod alinir
			if (keyTurn < 10 && keyTurn>0){
				keyTurn = keyTurn % 10;
				printf("Deger %d\n", keyTurn);
				numbers = numbers + intToString(keyTurn);
			}
			// 10 ise iptal butonudur
			else if (keyTurn == 10){
				printf("IPTAL\n");
				num_color = true;
				numbers = "";
			}
			// 11 ise "0" butonudur
			else if (keyTurn == 11){
				printf("Deger 0\n");
				numbers = numbers + "0";
			}
			// 12 ise silme butonudur
			else if (keyTurn == 12){
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
