/**********************************************
*   AUTHOR:                  HONEY YADAV      *
*   PROGRAM:                 BRESENHAM'S LINE *
*   IN COORDINATION WITH:    MUSKAN MAM       *
*   INSTITUITION:            IGU MEERPUR      *
**********************************************/

#include<iostream>
#include<graphics.h>
#include <cmath>
using namespace std;
void setBackground(int);
void bresenhems(int, int, int, int);
int main()
{
	int x1, y1, x2, y2;
	cout<<"Enter first point(x1, y1)->"<<endl;
	cin>>x1>>y1;
	cout<<"Enter second point(x2, y2)->"<<endl;
	cin>>x2>>y2;
	int gd=DETECT, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,"");
	setBackground(WHITE);
	bresenhems(x1, y1, x2, y2);
	getch();

	return 0;
}
void bresenhems(int x1, int y1, int x2, int y2){
    if(y2<y1 && x2<x1){
        swap(y2,y1);
        swap(x2,x1);
    }
	int dx=x2-x1;
	int dy=y2-y1;
	double slope=double(dy)/double(dx);
	if (slope<1.0){
        int x=x1, y=y1;
		int pk=2*dy-dx;
		int steps=abs(dx);
		while(steps--){
			putpixel(x, y, BLACK);
			cout<<"x="<<x<<" y="<<y<<endl;
			if (pk>=0)
			{
				pk+=2*dy-2*dx;
				y++;
			}
			else{
				pk+=2*dy;
			}
			x++;
		}
	}
	else if(abs(dx)==abs(dy)){
        int x=x1, y=y1;
        int steps=abs(dx);
        while(steps--){
            putpixel(x, y, BLACK);
            cout<<"x="<<x<<" y="<<y<<endl;
            x++;
            y++;
        }

	}
	else{
        int x=x1, y=y1;
		int pk=2*dx-dy;
		int steps=abs(dy);
		while(steps--){
			putpixel(x, y, BLACK);
			cout<<"x="<<x<<" y="<<y<<endl;
			if (pk>=0)
			{
				pk+=2*dx-2*dy;
				x++;
			}
			else{
				pk+=2*dx;
			}
			y++;
		}
	}

}
void setBackground(int colorcode){
    setcolor(colorcode);
    for(int i=0;i<480;i++){
        line(0,i,640,i);
    }
}
