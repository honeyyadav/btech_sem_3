#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
	int gd, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,"");
	circle(100,100,100);
	getch();

	return 0;
}
