/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(PROGRAM NO):     REVERSEIT(12)           *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
#include <fstream>
using namespace std;

void swap(char &x,char &y){
	char temp=x;
	x=y;
	y=temp;
}
void reverseit(string &s){
	for(int i=0;i<s.size()/2;i++){
		swap(s[i],s[s.size()-i-1]);
	}
}
int main(){
	string s;
	cout<<"Enter a string.";
	getline(cin,s);
	reverseit(s);
	cout<<s;
	return 0;
}