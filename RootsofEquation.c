#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
	char s[30];
	double a, b, c;
	double temp;
	double ans1, ans2;
	system("cls");
	printf("Please enter your name.-> ");
	gets(s);
	printf("\n\nWelcome, %s this program finds the roots of a equation.\n",s);
	printf("The equation is in the form: ax^2 + bx + c = 0\n");
	printf("And the program will give you the roots of the equation i.e. the value of x.");
	printf("\nThe value of x may be one or two depending on the equation.\n");
	printf("As per the equation you have to provide the value of a, b and c when asked.");
	system("pause");
	system("cls");
	printf("\n\nFine enter the value of a.->");
	scanf("%lf",&a);
	printf("\nNow, enter the value of b.->");
	scanf("%lf",&b);
	printf("\nFinally enter the value of c.->");
	scanf("%lf",&c);
	temp=b*b;
	temp=temp-(4*(a*c));
	temp=sqrt(temp);
	ans1=ans2=0-b;
	ans1=ans1+temp;
	ans2=ans2-temp;
	ans1=ans1/(2*a);
	ans2=ans2/(2*a);
	printf("\nThe roots of the equation is given below:-\n\n");
	if(ans1==ans2){
		printf("Value of x is: %.2lf.",ans1);
	}
	else{
		printf("First value of x is: %.2lf.\n",ans1);
		printf("Second value of x is: %.2lf.\n",ans2);
	}
	return 0;
}
