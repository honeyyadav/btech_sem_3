#include <stdio.h>
#include <stdlib.h>
int main(){
	int x, y;
	printf("Welcome sir, this program takes two values as input.\n");
	printf("1. The value of x.\n");
	printf("2. The value of y.\n");
	printf("And then it swaps them and gives the result.\n\n");
	system("pause");
	system("cls");
	printf("Well, enter the value of x.->");
	scanf("%d",&x);
	printf("Ok, enter the value of y now.->");
	scanf("%d",&y);
	//---------logic------------
	x=x^y;
	y=x^y;
	x=x^y;
	//-------logic end----------
	printf("\n************RESULT************\n\n");
	printf("Now the value of x becomes: %d\n",x);
	printf("Now the value of y becomes: %d\n",y);
	
}
