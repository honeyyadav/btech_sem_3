/**********************************************
*   AUTHOR:                  HONEY YADAV      *
*   PROGRAM:                 HOME ART         *
*   IN COORDINATION WITH:    MUSKAN MAM       *
*   INSTITUITION:            IGU MEERPUR      *
**********************************************/

#include <iostream>
#include <graphics.h>
#include <conio.h>
void boundry_fill4(int,int,int,int);
void boundry_fill8(int,int,int,int);
void setBackground(int);
using namespace std;
int main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"");
	setBackground(WHITE);
	setcolor(BLACK);

	line(170,240,170,440);
	line(171,240,171,440);
	line(172,240,172,440);

	line(470,240,470,440);
	line(471,240,471,440);
	line(472,240,472,440);

    line(170,440,472,440);
    line(170,441,472,441);
    line(170,442,472,442);

    line(150,250,320,180);
    line(490,250,320,180);
    line(150,249,320,179);
    line(490,249,320,179);
    line(150,248,320,178);
    line(490,248,320,178);

    line(150,235,320,165);
    line(490,235,320,165);
    line(150,234,320,164);
    line(490,234,320,164);
    line(150,233,320,163);
    line(490,233,320,163);

    line(150,250,150,235);
    line(151,250,151,235);
    line(152,250,152,235);

    line(490,250,490,235);
    line(489,250,489,235);
    line(488,250,488,235);

    line(288,440,288,340);
    line(289,440,289,340);
    line(290,440,290,340);

    line(350,340,350,440);
    line(351,340,351,440);
    line(352,340,352,440);

    line(288,340,350,340);
    line(288,341,350,341);
    line(288,342,350,342);

    //Box 1
    line(199,330,199,390);
    line(200,330,200,390);
    line(201,330,201,390);

    line(259,330,259,390);
    line(260,330,260,390);
    line(261,330,261,390);

    line(200,330,260,330);
    line(200,331,260,331);
    line(200,332,260,332);

    line(200,390,260,390);
    line(200,389,260,389);
    line(200,388,260,388);

    line(200,359,260,359);
    line(200,360,260,360);
    line(200,361,260,361);

    line(229,330,229,390);
    line(230,330,230,390);
    line(231,330,231,390);


    //Box 2
    line(199+180,330,199+180,390);
    line(200+180,330,200+180,390);
    line(201+180,330,201+180,390);

    line(259+180,330,259+180,390);
    line(260+180,330,260+180,390);
    line(261+180,330,261+180,390);

    line(200+180,330,260+180,330);
    line(200+180,331,260+180,331);
    line(200+180,332,260+180,332);

    line(200+180,390,260+180,390);
    line(200+180,389,260+180,389);
    line(200+180,388,260+180,388);

    line(200+180,359,260+180,359);
    line(200+180,360,260+180,360);
    line(200+180,361,260+180,361);

    line(229+180,330,229+180,390);
    line(230+180,330,230+180,390);
    line(231+180,330,231+180,390);

    //Box 3
    line(199+90,330-100,199+90,390-100);
    line(200+90,330-100,200+90,390-100);
    line(201+90,330-100,201+90,390-100);

    line(259+90,330-100,259+90,390-100);
    line(260+90,330-100,260+90,390-100);
    line(261+90,330-100,261+90,390-100);

    line(200+90,330-100,260+90,330-100);
    line(200+90,331-100,260+90,331-100);
    line(200+90,332-100,260+90,332-100);

    line(200+90,390-100,260+90,390-100);
    line(200+90,389-100,260+90,389-100);
    line(200+90,388-100,260+90,388-100);

    line(200+90,359-100,260+90,359-100);
    line(200+90,360-100,260+90,360-100);
    line(200+90,361-100,260+90,361-100);

    line(229+90,330-100,229+90,390-100);
    line(230+90,330-100,230+90,390-100);
    line(231+90,330-100,231+90,390-100);

    circle(300,390,5);

    boundry_fill4(300, 390, YELLOW, BLACK);//circle
    boundry_fill4(330, 390, RED, BLACK);
    boundry_fill4(320, 170, RED, BLACK);

    boundry_fill4(202, 333, YELLOW, BLACK);
    boundry_fill4(232, 333, YELLOW, BLACK);
    boundry_fill4(202, 363, YELLOW, BLACK);
    boundry_fill4(232, 363, YELLOW, BLACK);

    boundry_fill4(385, 335, YELLOW, BLACK);
    boundry_fill4(415, 335, YELLOW, BLACK);
    boundry_fill4(415, 365, YELLOW, BLACK);
    boundry_fill4(385, 365, YELLOW, BLACK);

    boundry_fill4(295, 235, YELLOW, BLACK);
    boundry_fill4(325, 235, YELLOW, BLACK);
    boundry_fill4(325, 265, YELLOW, BLACK);
    boundry_fill4(295, 265, YELLOW, BLACK);

	getch();
	closegraph();
	return 0;
}
void boundry_fill4(int x, int y, int fill_color, int boundry_color){
	if(getpixel(x,y)==fill_color || getpixel(x,y)==boundry_color){
	    return;
	}
	else{
	    putpixel(x, y, fill_color);
		boundry_fill4(x+1, y, fill_color, boundry_color);
		boundry_fill4(x-1, y, fill_color, boundry_color);
		boundry_fill4(x, y+1, fill_color, boundry_color);
		boundry_fill4(x, y-1, fill_color, boundry_color);
	}
}
void boundry_fill8(int x, int y, int fill_color, int boundry_color){
	if(getpixel(x,y)==fill_color || getpixel(x,y)==boundry_color){
	    return;
	}
	else{
	    putpixel(x, y, fill_color);
		boundry_fill8(x+1, y, fill_color, boundry_color);
		boundry_fill8(x-1, y, fill_color, boundry_color);
		boundry_fill8(x, y+1, fill_color, boundry_color);
		boundry_fill8(x, y-1, fill_color, boundry_color);
		boundry_fill8(x+1, y+1, fill_color, boundry_color);
		boundry_fill8(x-1, y+1, fill_color, boundry_color);
		boundry_fill8(x-1, y-1, fill_color, boundry_color);
		boundry_fill8(x+1, y-1, fill_color, boundry_color);
	}
}
void setBackground(int colorcode){
    setcolor(colorcode);
    for(int i=0;i<480;i++){
        line(0,i,640,i);
    }
}
