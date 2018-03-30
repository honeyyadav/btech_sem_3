/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(PROGRAM NO):     Function Calculator(3)  *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
using namespace std;
double operate(double a, double b,char op){
	double ans=0;
	switch(op){
		case '+':ans=a+b;
		break;
		case '-':ans=a-b;
		break;
		case '*':ans=a*b;
		break;
		case '/':ans=a/b;
		break;
	}
	return ans;
}
int main(){
	double num1, num2;
	char op, choice;
	do{
		cout<<"Enter first number, operator, second number:->";
		cin>>num1>>op>>num2;
		cout<<"Answer = "<<operate(num1,num2,op)<<endl;
		cout<<"Do another (Y/ N)? ";
		cin>>choice;
	}while(choice=='Y' || choice=='y');
	return 0;
}	
