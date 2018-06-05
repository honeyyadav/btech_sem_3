/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(PROGRAM NO):     INHERITANCE(7)          *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Father{
protected:
	int age;
public:
	Father(){};
	Father(int x){age=x;};
	virtual void iam(){
		cout<<"I am the Father, my age is:"<<age<<endl;
	}
};
class Son : public Father{
public:
	Son(){};
	Son(int x){age=x;};
	void iam(){
		cout<<"I am the Son, my age is:"<<age<<endl;
	}
};
class Daughter : public Father{
public:
	Daughter(){};
	Daughter(int x){age=x;};
	void iam(){
		cout<<"I am the Daughter, my age is:"<<age<<endl;
	}
};

int main(){
	Father f(45);
	f.iam();
	Son s(21);
	s.iam();
	Daughter d(23);
	d.iam();
	cout<<endl;
	Father *p;
	p=&s;
	p->iam();
	p=&d;
	p->iam();
	return 0;
}