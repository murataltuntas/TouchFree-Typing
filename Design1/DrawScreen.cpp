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
		cv::ellipse(frames, cv::Point(110, 110), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(110, 110), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 2:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(190, 110), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(190, 110), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 3:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(270, 110), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(270, 110), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 4:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(110, 190), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(110, 190), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 5:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(190, 190), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(190, 190), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 6:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(270, 190), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(270, 190), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 7:
		// dairesel progress bar ciz
		//cv::ellipse(frames, cv::Point(125, 325), cv::Size(36, 36), 0, -90, -90 + 360.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 3, 8, 0);
		cv::ellipse(frames, cv::Point(110, 270), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(110, 270), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 8:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(190, 270), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(190, 270), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 9:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(270, 270), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(270, 270), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 10:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(110, 350), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(110, 350), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 11:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(190, 350), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(190, 350), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 12:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(270, 350), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(270, 350), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	case 13:
		// dairesel progress bar ciz
		cv::ellipse(frames, cv::Point(190, 430), cv::Size(36, 36), 0, -90, -90 + 180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		cv::ellipse(frames, cv::Point(190, 430), cv::Size(36, 36), 0, -90, -90 + -180.0*(timeCounter / TIME_COUNTER), PROGRESSBAR_COLOR, 6, 8, 0);
		break;
	default:
		break;
	}
}

// verilen koordinatta kareleri cizer (minX,minY) den (maxX,maxY) ye kadar
void DrawScreen::drawButtonArea(){
	// ust alan
	line(frames, cv::Point(70, 5), cv::Point(310, 5), BORDER_COLOR, 3, 2, 0);	// ust
	line(frames, cv::Point(70, 60), cv::Point(310, 60), BORDER_COLOR, 3, 2, 0);	// alt
	line(frames, cv::Point(70, 5), cv::Point(70, 60), BORDER_COLOR, 3, 2, 0);	// sol
	line(frames, cv::Point(310, 5), cv::Point(310, 60), BORDER_COLOR, 3, 2, 0);// sag

	// yatay
	line(frames, cv::Point(70, 70), cv::Point(310, 70), BORDER_COLOR, 3, 2, 0);
	line(frames, cv::Point(70, 150), cv::Point(310, 150), BORDER_COLOR, 3, 2, 0);
	line(frames, cv::Point(70, 230), cv::Point(310, 230), BORDER_COLOR, 3, 2, 0);
	line(frames, cv::Point(70, 310), cv::Point(310, 310), BORDER_COLOR, 3, 2, 0);
	line(frames, cv::Point(70, 390), cv::Point(310, 390), BORDER_COLOR, 3, 2, 0);
	line(frames, cv::Point(70, 470), cv::Point(310, 470), BORDER_COLOR, 3, 2, 0);
	// dikey
	line(frames, cv::Point(70, 70), cv::Point(70, 470), BORDER_COLOR, 3, 2, 0);
	line(frames, cv::Point(150, 70), cv::Point(150, 390), BORDER_COLOR, 3, 2, 0);
	line(frames, cv::Point(230, 70), cv::Point(230, 390), BORDER_COLOR, 3, 2, 0);
	line(frames, cv::Point(310, 70), cv::Point(310, 470), BORDER_COLOR, 3, 2, 0);
}

// numarayi stringe ceviren fonksiyon 
std::string DrawScreen::intToString(int number){
	std::stringstream ss;
	ss << number;
	return ss.str();
}

// karelerin icine rakamlari ve kabul/iptal tuslarini basar
void DrawScreen::drawNumbers(){
	drawButtonArea();
	// draw 1
	if (keyTurn == 1)
		putText(frames, intToString(1), cv::Point(90, 128), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(1), cv::Point(93, 131), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(1), cv::Point(90, 128), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 2
	if (keyTurn == 2)
		putText(frames, intToString(2), cv::Point(170, 128), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(2), cv::Point(173, 131), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(2), cv::Point(170, 128), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 3
	if (keyTurn == 3)
		putText(frames, intToString(3), cv::Point(250, 128), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(3), cv::Point(253, 131), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(3), cv::Point(250, 128), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 4
	if (keyTurn == 4)
		putText(frames, intToString(4), cv::Point(90, 208), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(4), cv::Point(93, 211), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(4), cv::Point(90, 208), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 5
	if (keyTurn == 5)
		putText(frames, intToString(5), cv::Point(170, 208), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(5), cv::Point(173, 211), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(5), cv::Point(170, 208), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 6
	if (keyTurn == 6)
		putText(frames, intToString(6), cv::Point(250, 208), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(6), cv::Point(253, 211), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(6), cv::Point(250, 208), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 7
	if (keyTurn == 7)
		putText(frames, intToString(7), cv::Point(90, 288), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(7), cv::Point(93, 291), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(7), cv::Point(90, 288), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 8
	if (keyTurn == 8)
		putText(frames, intToString(8), cv::Point(170, 288), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(8), cv::Point(173, 291), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(8), cv::Point(170, 288), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw 9
	if (keyTurn == 9)
		putText(frames, intToString(9), cv::Point(250, 288), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(9), cv::Point(253, 291), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(9), cv::Point(250, 288), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}
	// draw delete
	if (keyTurn == 10){
		line(frames, cv::Point(95, 335), cv::Point(125, 365), NUMBER_COLOR, 4, 8, 0);
		line(frames, cv::Point(125, 335), cv::Point(95, 365), NUMBER_COLOR, 4, 8, 0);
	}
	else{
		line(frames, cv::Point(98, 338), cv::Point(128, 368), SHADOW_COLOR, 3, 8, 0);
		line(frames, cv::Point(128, 338), cv::Point(98, 368), SHADOW_COLOR, 3, 8, 0);
		line(frames, cv::Point(95, 335), cv::Point(125, 365), NUMBER_COLOR, 3, 8, 0);
		line(frames, cv::Point(125, 335), cv::Point(95, 365), NUMBER_COLOR, 3, 8, 0);
	}
	// draw 0
	if (keyTurn == 11)
		putText(frames, intToString(0), cv::Point(170, 368), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 3);
	else{
		putText(frames, intToString(0), cv::Point(173, 371), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, SHADOW_COLOR, 3);
		putText(frames, intToString(0), cv::Point(170, 368), cv::FONT_HERSHEY_COMPLEX_SMALL, 3, NUMBER_COLOR, 2);
	}

	// draw <- (remove)
	if (keyTurn == 12){
		line(frames, cv::Point(245, 350), cv::Point(260, 365), NUMBER_COLOR, 4, 8, 0);
		line(frames, cv::Point(245, 350), cv::Point(260, 335), NUMBER_COLOR, 4, 8, 0);
		line(frames, cv::Point(245, 350), cv::Point(290, 350), NUMBER_COLOR, 4, 8, 0); // line
	}
	else{
		line(frames, cv::Point(248, 353), cv::Point(263, 368), SHADOW_COLOR, 3, 8, 0);
		line(frames, cv::Point(248, 353), cv::Point(263, 338), SHADOW_COLOR, 3, 8, 0);
		line(frames, cv::Point(248, 353), cv::Point(293, 353), SHADOW_COLOR, 3, 8, 0); // line
		line(frames, cv::Point(245, 350), cv::Point(260, 365), NUMBER_COLOR, 3, 8, 0);
		line(frames, cv::Point(245, 350), cv::Point(260, 335), NUMBER_COLOR, 3, 8, 0);
		line(frames, cv::Point(245, 350), cv::Point(290, 350), NUMBER_COLOR, 3, 8, 0); // line
	}
	// draw okey	
	if (keyTurn == 13){
		line(frames, cv::Point(190, 445), cv::Point(205, 410), NUMBER_COLOR, 4, 8, 0);
		line(frames, cv::Point(175, 425), cv::Point(190, 445), NUMBER_COLOR, 4, 8, 0);
	}
	else{
		line(frames, cv::Point(193, 448), cv::Point(208, 413), SHADOW_COLOR, 3, 8, 0);
		line(frames, cv::Point(178, 428), cv::Point(193, 448), SHADOW_COLOR, 3, 8, 0);
		line(frames, cv::Point(190, 445), cv::Point(205, 410), NUMBER_COLOR, 3, 8, 0);
		line(frames, cv::Point(175, 425), cv::Point(190, 445), NUMBER_COLOR, 3, 8, 0);
	}
}

// marker'in hangi numara ustunde oldugunu ve donduren fonkiyon
int DrawScreen::returnPosition(double x, double y){
	int counter = 1;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			//drawButtonArea(100 * j, 100 * i, 100 * j + 50, 100 * i + 50);
			if (x < 80 * (j + 1) + 70 && x > 80 * j + 70 && y < 80 * (i + 1) + 70 && y > 80 * i + 70)
				return counter;
			else
				counter++;
		}
	}
	// onay alani
	if (x < 310 && x > 70 && y < 470 && y > 390){
		return counter;
	}
	return -1;
}

// ekrana çizen fonksiyon.
void DrawScreen::drawWindow(cv::Point& coordinate){
	// sayilari ciz
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
		drawProgressBar(temp);

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
				int lng = numbers.length() - 1;
				if (lng >= 0)
				{
					string str2 = numbers.substr(0, numbers.length() - 1);
					printf("Sil\n");
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
