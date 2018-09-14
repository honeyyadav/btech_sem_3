#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x=100, y=100, r=100;
    cout<<"Please enter center point(x, y)>";
    cin>>x>>y;
    cout<<"Please enter radius of circle.>";
    cin>>r;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    line(x-r,y,x+r,y);
    line(x,y-r,x,y+r);
    int x1=0, y1=r;
    int pk=1-r;
    while(x1<y1){
        cout<<x1<<" "<<y1<<endl;

        putpixel(x+x1,y-y1,WHITE);//1
        putpixel(y+y1,x-x1,WHITE);//2

        putpixel(y+y1,x+x1,WHITE);//3
        putpixel(x+x1,y+y1,WHITE);//4

        putpixel(x-x1,y+y1,WHITE);//5
        putpixel(y-y1,x+x1,WHITE);// 6

        putpixel(y-y1,x-x1,WHITE);//7
        putpixel(x-x1,y-y1,WHITE);//8

    	if(pk<0){
    		pk=pk+2*(x1+1)+1;
    		x1++;
    	}
    	else{
    		pk=pk+2*(x1+1)-2*y1+3;
    		x1++;
    		y1--;
    	}
    }

    getch();
    closegraph();
    return 0;
}
