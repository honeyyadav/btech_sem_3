/**********************************************
*   AUTHOR:                  HONEY YADAV      *
*   PROGRAM:                 FLOOD FILL       *
*   IN COORDINATION WITH:    MUSKAN MAM       *
*   INSTITUITION:            IGU MEERPUR      *
**********************************************/

#include <iostream>
#include <graphics.h>
#include <conio.h>
void flood_fill4(int,int,int,int);
void flood_fill8(int,int,int,int);
void setBackground(int);
using namespace std;
int main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"");
	setBackground(WHITE);
	setcolor(RED);
	circle(100,100,50);
	flood_fill4(100, 100, YELLOW, WHITE);

	line(150,150,150,250);
	line(150,150,250,150);
	setcolor(RED);
	line(250,250,150,250);
	line(250,150,250,250);

	flood_fill8(200, 200, GREEN, WHITE);

	getch();
	closegraph();
	return 0;
}
void flood_fill4(int x, int y, int fill_color, int old_color){
	if(getpixel(x,y)!=old_color){
	    return;
	}
	else{
	    putpixel(x, y, fill_color);
		flood_fill4(x+1, y, fill_color, old_color);
		flood_fill4(x-1, y, fill_color, old_color);
		flood_fill4(x, y+1, fill_color, old_color);
		flood_fill4(x, y-1, fill_color, old_color);
	}
}
void flood_fill8(int x, int y, int fill_color, int old_color){
	if(getpixel(x,y)!=old_color){
	    return;
	}
	else{
	    putpixel(x, y, fill_color);
		flood_fill8(x+1, y, fill_color, old_color);
		flood_fill8(x-1, y, fill_color, old_color);
		flood_fill8(x, y+1, fill_color, old_color);
		flood_fill8(x, y-1, fill_color, old_color);
		flood_fill8(x+1, y+1, fill_color, old_color);
		flood_fill8(x-1, y+1, fill_color, old_color);
		flood_fill8(x-1, y-1, fill_color, old_color);
		flood_fill8(x+1, y-1, fill_color, old_color);
	}
}
void setBackground(int colorcode){
    setcolor(colorcode);
    for(int i=0;i<480;i++){
        line(0,i,640,i);
    }
}
