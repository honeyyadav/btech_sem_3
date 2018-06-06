/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(PROGRAM NO):     FRIEND FUNCTION(5)      *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
class DM;
class DB{
private:
	int meter;
	int cmeter;
public:
	DB(int m, int cm){
		meter=m;
		cmeter=cm;
	}
	int getmeter(){
		return meter;
	}
	int getcmeter(){
		return cmeter;
	}
	void display(){
		cout<<meter<<" meter(s) and "<<cmeter<<" centimeter(s)."<<endl;
	}
	friend DB add(DB x,DM y);
};
class DM{
private:
	int feet;
	int inches;
public:
	DM(int f, int i){
		feet=f;
		inches=i;
	}
	int getfeet(){
		return feet;
	}
	int getinches(){
		return inches;
	}
	void display(){
		cout<<feet<<" feet(s) and "<<inches<<" inche(s)."<<endl;
	}
	friend DM add(DM x,DB y);
};
DB add(DB x,DM y){
	int tinches=(y.getfeet()*12)+y.getinches();
	int totalcm=tinches*2.54+(x.getmeter()*100)+x.getcmeter();
	int m=totalcm/100;
	int cm=totalcm%100;
	DB temp(m,cm);
	return temp;
}
DM add(DM x,DB y){
	int totalcm=y.getmeter()*100+y.getcmeter();
	int tinches=(int)((float)totalcm/2.54+(x.getfeet()*12)+x.getinches());
	int f=tinches/12;
	int i=totalcm%12;
	DM temp(f,i);
	return temp;
}
int main(){
	cout<<"Enter values in meter format.->";
	int a, b;
	cin>>a>>b;
	DB first(a,b);
	cout<<"Enter values in feet format.->";
	cin>>a>>b;
	DM second(a,b);
	DB ans1=add(first,second);
	DM ans2=add(second,first);
	ans1.display();
	ans2.display();
	return 0;
}	
