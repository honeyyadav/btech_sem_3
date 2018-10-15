/**********************************************
*   AUTHOR:                  HONEY YADAV      *
*   PROGRAM:                 DDA              *
*   IN COORDINATION WITH:    MUSKAN MAM       *
*   INSTITUITION:            IGU MEERPUR      *
**********************************************/

#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <cmath>

void setBackground(int);
using namespace std;

int main(int argc, char const *argv[]) {
    double x1,y1,x2,y2;
    cout<<"Please enter first point(x1,y1)>";
    cin>>x1>>y1;
    cout<<"Please enter second point(x2,y2)>";
    cin>>x2>>y2;
    double dx=x2-x1;
    double dy=y2-y1;
    int steps;
    if(abs(dx)>abs(dy)){
        steps=abs(dx);
    }
    else{
        steps=abs(dy);
    }
    double xinc=(double)dx/steps;
    double yinc=(double)dy/steps;
    cout<<"x increment="<<xinc<<" y increment="<<yinc<<endl;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setBackground(WHITE);
    for(int i=0;i<steps;i++){
        putpixel(round(x1),round(y1),BLACK);
        cout<<round(x1)<<" "<<round(y1)<<endl;
        x1=x1+xinc;
        y1=y1+yinc;
    }
    getch();
    closegraph();
    return 0;
}
void setBackground(int colorcode){
    setcolor(colorcode);
    for(int i=0;i<480;i++){
        line(0,i,640,i);
    }
}
