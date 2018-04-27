/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(PROGRAM NO):     Rational Number(6)      *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Rational{
private:
	int numerator;
	int denominator;
public:
	Rational(){	}
	Rational(int m, int n){
		numerator=m;
		denominator=n;
	}
	void reduce(){
		int common=1;
		if(numerator<denominator){
			for(int i=2;i<=numerator;i++){
				if(numerator%i==0 && denominator%i==0){
					common=i;
				}
			}
		}
		else{
			for(int i=2;i<=denominator;i++){
				if(numerator%i==0 && denominator%i==0){
					common=i;
				}
			}
		}
		numerator/=common;
		denominator/=common;
	}
	Rational operator+(Rational num){
		Rational temp;
		temp.numerator=(this->numerator*num.denominator)+(num.numerator*this->denominator);
		temp.denominator=this->denominator*num.denominator;
		temp.reduce();
		return temp;
	}
	void display(){
		cout<<numerator<<"/"<<denominator<<endl;
	}
	friend ostream & operator << (ostream &out, const Rational &r);
    friend istream & operator >> (istream &in,  Rational &r);
};
ostream & operator<<(ostream &out, const Rational &r)
{
    out<<r.numerator;
    out<<"/"<<r.denominator<<endl;
    return out;
}
 
istream & operator >> (istream &in,  Rational &r)
{
    cout<<"Enter Numerator Part.-> ";
    in>>r.numerator;
    cout<<"Enter Denominator Part.-> ";
    in>>r.denominator;
    return in;
}
int main(){
	Rational num1, num2, num3;
	cin>>num1>>num2;
	num3=num1+num2;
	cout<<"Addition of two rational numbers is: ";
	cout<<num3;
	return 0;
}	