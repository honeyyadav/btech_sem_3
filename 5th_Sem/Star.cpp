/**********************************************
*   AUTHOR:                  HONEY YADAV      *
*   PROGRAM:                 STAR             *
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
	line(200, 180, 400, 180);
	line(200, 180, 300, 400);
	line(400, 180, 300, 400);

	line(200, 320, 300, 100);
	line(200, 320, 400, 320);
	line(300, 100, 400, 320);

	putpixel(200,180,RED);
	boundry_fill4(203,183,YELLOW,BLACK);
	boundry_fill4(390,185,YELLOW,BLACK);
	boundry_fill4(300,105,YELLOW,BLACK);
	boundry_fill4(300,395,YELLOW,BLACK);
	boundry_fill4(210,318,YELLOW,BLACK);
	boundry_fill4(390,318,YELLOW,BLACK);

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
