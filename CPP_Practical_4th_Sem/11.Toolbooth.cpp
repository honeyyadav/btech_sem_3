/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(PROGRAM NO):     TOOLBOOTH(11)           *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
#include <fstream>
using namespace std;

class Toolbooth{
private:
	unsigned int totalcars;
	double totalprice;
public:
	Toolbooth(){
		totalcars=0;
		totalprice=0.0;
	}
	void payingCar(){
		totalprice+=0.5;
		totalcars++;
	}
	void nopayCar(){
		totalcars++;
	}
	void display(){
		cout<<"Total Cars: "<<totalcars<<endl;
		cout<<"Total Price: "<<totalprice<<endl;
	}
};
int main(){
	Toolbooth t;
	while(1){
		int choice;
		cout<<"Press 1 to add a Paying Car."<<endl;
		cout<<"Press 2 to add a non-Paying Car."<<endl;
		cin>>choice;
		if(choice==1)
			t.payingCar();
		if(choice==2)
			t.nopayCar();
		cout<<"Do you want to add more cars(Y/N).>";
		char ch;
		cin>>ch;
		if(ch!='Y' && ch!='y')
			break;
	}
	t.display();
	return 0;
}
