#include <iostream>
#include <cmath>
#include <graphics.h>
#include <conio.h>
#define RAD 0.017460317
using namespace std;
int main(){
	int x1, y1, x2, y2, x3, y3;
	cout<<"Enter side of the first coordinate of triangle.";
	cin>>x1>>y1;
	cout<<"Enter side of the second coordinate of triangle.";
	cin>>x2>>y2;
	cout<<"Enter side of the third coordinate of triangle.";
	cin>>x3>>y3;
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"");

	setcolor(YELLOW);
	line(x1,y1,x2,y2);
	line(x1,y1,x3,y3);
	line(x2,y2,x3,y3);

	int choice;
	cout<<"---------MENU---------"<<endl;
	cout<<"Enter 1 to change position.(Translation)"<<endl;
	cout<<"Enter 2 to change size.(Scaling)"<<endl;
	cout<<"Enter 3 to change angle.(Rotation)"<<endl;
	cin>>choice;

	switch(choice){
    case 1:
        int tx, ty;
        cout<<"Enter the translation parameter (Tx, Ty)->";
        cin>>tx>>ty;
        setcolor(WHITE);
        line(x1+tx,y1+ty,x2+tx,y2+ty);
        line(x1+tx,y1+ty,x3+tx,y3+ty);
        line(x2+tx,y2+ty,x3+tx,y3+ty);
        break;
    case 2:
        int sx, sy;
        cout<<"Enter the translation parameter (Sx, Sy)->";
        cin>>sx>>sy;
        setcolor(WHITE);
        line(x1*sx,y1*sy,x2*sx,y2*sy);
        line(x1*sx,y1*sy,x3*sx,y3*sy);
        line(x2*sx,y2*sy,x3*sx,y3*sy);
        break;
    case 3:
        double angle;
        cout<<"Enter the angle to rotate.->";
        cin>>angle;
        setcolor(WHITE);

        int x1d=(x1*cos(angle*RAD))-(y1*sin(angle*RAD));
        int y1d=(x1*sin(angle*RAD))+(y1*cos(angle*RAD));
        int x2d=(x2*cos(angle*RAD))-abs(y2*sin(angle*RAD));
        int y2d=(x2*sin(angle*RAD))+(y2*cos(angle*RAD));
        int x3d=(x3*cos(angle*RAD))-(y3*sin(angle*RAD));
        int y3d=(x3*sin(angle*RAD))+(y3*cos(angle*RAD));
        line(x1d,y1d,x2d,y2d);
        line(x1d,y1d,x3d,y3d);
        line(x2d,y2d,x3d,y3d);
        cout<<"Press 1 to see line from axis"<<endl;
        cin>>choice;
        if(choice==1){
            setcolor(RED);
            line(x1,y1,0,0);
            line(x2,y2,0,0);
            line(x3,y3,0,0);
            line(x1d,y1d,0,0);
            line(x2d,y2d,0,0);
            line(x3d,y3d,0,0);
        }
        break;
        /*default:
        cout<<"Sorry, Invalid Choice!"<<endl;
        break;*/
	}
	getch();
	closegraph();
	return 0;
}
