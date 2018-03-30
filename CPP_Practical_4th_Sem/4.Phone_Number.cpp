/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(PROGRAM NO):     PHONE NUMBER(4)         *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
using namespace std;
struct phone{
	int area_code;
	int exchange;
	int number;
};
void printphone(phone p){
	cout<<"("<<p.area_code<<")"<<" "<<p.exchange<<"-"<<p.number<<endl;
}
int main(){
	phone p1={212,767,8900},p2;
	cout<<"Enter your area code, exchange, and number:";
	cin>>p2.area_code>>p2.exchange>>p2.number;
	cout<<"My number is ";
	printphone(p1);
	cout<<"Your number is ";
	printphone(p2);
	
	return 0;
}	
