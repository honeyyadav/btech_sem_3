/**********************************************
*   AUTHOR:                  HONEY YADAV      *
*   PROGRAM:                 BOUNDRY FILL     *
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
	setcolor(RED);
	circle(100,100,50);
	boundry_fill4(100, 100, YELLOW, RED);

	line(150,150,150,250);
	line(150,150,250,150);
	line(250,250,150,250);
	line(250,150,250,250);

	boundry_fill8(200, 200, GREEN, RED);

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
