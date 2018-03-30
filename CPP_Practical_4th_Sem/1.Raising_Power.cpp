/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(NUMBER):         RAISING POWER(1)        *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
using namespace std;
double power(double n,int p=2){
	double ans=1;
	for(int i=1;i<=p;i++){
		ans*=n;
	}
	return ans;
}
int main(){
	double num;
	int p;
	cout<<"Enter a number whose power should be calculated.->";
	cin>>num;
	cout<<num<<"^"<<"2"<<" is "<<power(num)<<endl;
	cout<<"Enter power->";
	cin>>p;
	cout<<num<<"^"<<p<<" is "<<power(num,p)<<endl;
	return 0;
}	
