#include <iostream>
#include <algorithm>
using namespace std;

class job
{
public:
	int profit;
	int deadline;

	void putprofit(int p){
		profit=p;
	}
	void putdeadline(int d){
		deadline=d;
	}
	int getdeadline(){
		return deadline;
	}
	int getprofit(){
		return profit;
	}
};
bool ValueCmp(job const & a, job const & b)
{
    return a.profit > b.profit;
}
int main(){
	
	cout<<"Enter total number of items.";
	int n;
	cin>>n;
	job a[n];
	cout<<"Enter profit of all items."<<endl;
	int temp;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		a[i].putprofit(temp);
	}
	cout<<"Enter deadline of all items."<<endl;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		a[i].putdeadline(temp);
	}

	sort(a, a+n, ValueCmp);

	int maxdeadline=a[0].getdeadline();
	for (int i = 0; i < n; ++i)
	{
		if(a[i].getdeadline()>maxdeadline){
			maxdeadline=a[i].getdeadline();
		}
	}
	bool slots[maxdeadline]={0};

	double maxprofit=0;
	for (int i = 0; i < n; ++i)
	{
		int k=a[i].getdeadline()-1;
		while(k>=0){
			if(slots[k]==false){
				slots[k]=true;
				maxprofit+=a[i].getprofit();
				break;
			}
			k--;
		}
	}
	cout<<"Maximum profit is:"<<maxprofit;
	return 0;
}