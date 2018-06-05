/****************************************************
*  AUTHOR:                  HONEY YADAV             *
*  PROGRAM(PROGRAM NO):     BINARY FILE(7)          *
*  IN COORDINATION WITH:    DR. SATINDER BAL GUPTA  *
*  INSTITUITION:            IGU MEERPUR             *
****************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream fout;
	fout.open("file.bin",ios::binary);
	while(1){
		int n;
		string s;
		cout<<"Enter roll number of the student.>";
		cin>>n;
		cout<<"Enter name number of the student.>";
		cin>>s;
		fout<<n<<"\t"<<s<<endl;
		cout<<"Do you want to enter more details(y/n).>";
		char ch;
		cin>>ch;
		if(ch!='y' && ch!='Y'){
			break;
		}
	}
	fout.close();
	ifstream fin;
	fin.open("file.bin",ios::binary);
	cout<<"Roll No:"<<"\t"<<"Name"<<endl;
	while(!fin.eof()!=0){
		string ch;
		fin>>ch;
		cout<<ch<<"\t\t";
		fin>>ch;
		cout<<ch<<endl;
	}
	fin.close();
	return 0;
}