/**********************************************
*   AUTHOR:                  HONEY YADAV      *
*   PROGRAM:                 CIRCLE           *
*   IN COORDINATION WITH:    MUSKAN MAM       *
*   INSTITUITION:            IGU MEERPUR      *
**********************************************/

#include<iostream>
#include<graphics.h>
using namespace std;
void setBackground(int);
int main()
{
    int x, y, r;
	cout<<"Enter center coordinates of circle(x,y)->";
	cin>>x>>y;
	cout<<"Enter radius of circle(x,y)->";
    cin>>r;
    int gd=DETECT, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,"");
	setBackground(WHITE);
	setcolor(BLACK);
	circle(x,y,r);
	getch();
	return 0;
}
void setBackground(int colorcode){
    setcolor(colorcode);
    for(int i=0;i<480;i++){
        line(0,i,640,i);
    }
}
