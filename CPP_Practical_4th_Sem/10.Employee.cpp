/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(PROGRAM NO):     EMPLOYEE(10)            *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
#include <fstream>
using namespace std;

class Employee{
protected:
	string name;
	int salary;
public:
	void getdata(){
		cout<<"Enter name.>";
		cin>>name;
		cout<<"Enter salary.>";
		cin>>salary;
	}
};
class Manager : public Employee{
protected:
	string dept;
public:
	void toString(){
		cout<<"Name of Manager: "<<name<<endl;
		cout<<"Department of Manager: "<<dept<<endl;
		cout<<"Salary of Manager: "<<salary<<endl;
	}
	void getdata(){
		Employee::getdata();
		cout<<"Enter Department.>";
		cin>>dept;
	}
};
class Executive : public Manager{
public:
	void toString(){
		cout<<"Executive"<<endl;
		Manager::toString();
	}
};
int main(){
	Manager m;
	m.getdata();
	m.toString();
	
	Executive e;
	e.getdata();
	e.toString();
	return 0;
}