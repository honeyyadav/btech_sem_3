/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(PROGRAM NO):     HOSPITAL(9)             *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Date{
	int date;
	int month;
	int year;
public:
	void getdate(){
		int d, m, y;
		cout<<"Enter date.>";
		cin>>d;
		cout<<"Enter month.>";
		cin>>m;
		cout<<"Enter year.>";
		cin>>y;
		date=d;
		month=m;
		year=y;
	}
	void putdate(){
		cout<<date<<"/"<<month<<"/"<<year;
	}
};
class Patient{
protected:
	vector<string> name;
	vector<Date> admission;
	vector<string> disease;
	vector<Date> discharge;
public:
	void getinfo(){
		string s;
		cout<<"Enter name of the patient.>";
		getline(cin,s);
		name.push_back(s);
		Date d;
		cout<<"Enter Date of Admission.>";
		d.getdate();
		admission.push_back(d);
		cout<<"Enter name of Disease.>";
		cin.ignore();
		getline(cin,s);
		disease.push_back(s);
		cout<<"Enter Date of Discharge.>";
		d.getdate();
		discharge.push_back(d);
	}
};
class PatientUpdated : public Patient{
private:
	vector<int> age;
public:
	void getinfo(){
		Patient::getinfo();
		int a;
		cout<<"Enter age of the patient.>";
		cin>>a;
		age.push_back(a);
	}
	void listall(){
		cout<<endl<<endl;
		cout<<"List of all Patients."<<endl;
		cout<<"Name"<<"\t"<<"Admission"<<"\t"<<"Disease"<<"\t"<<"Discharge"<<"\t"<<"Age"<<endl;
		for(int i=0;i<name.size();i++){
			cout<<name[i]<<"\t";
			admission[i].putdate();
			cout<<"\t"<<disease[i]<<"\t";
			discharge[i].putdate();
			cout<<"\t"<<age[i]<<endl;
		}
	}
	void listpediatric(){
		cout<<endl<<endl;
		cout<<"List of pediatric Patients."<<endl;
		cout<<"Name"<<"\t"<<"Admission"<<"\t"<<"Disease"<<"\t"<<"Discharge"<<"\t"<<"Age"<<endl;
		for(int i=0;i<name.size();i++){
			if(age[i]>=12)
				continue;
			cout<<name[i]<<"\t";
			admission[i].putdate();
			cout<<"\t"<<disease[i]<<"\t";
			discharge[i].putdate();
			cout<<"\t"<<age[i]<<endl;
		}
	}
};
int main(){
	PatientUpdated p;
	while(1){
		p.getinfo();
		cout<<"Do you want to add more patients(y/n).>";
		char ch;
		cin>>ch;
		cin.ignore();
		if(ch!='y' && ch!='Y')
			break;
	}
	p.listall();
	p.listpediatric();
	return 0;
}
