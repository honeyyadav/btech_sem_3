#include <iostream>
#include <algorithm>
using namespace std;

class knapsack
{
public:
	int weight;
	int profit;
	double ppkg;

	void putweight(int w){
		weight=w;
	}
	void putprofit(int p){
		profit=p;
	}
	void calculateppkg(){
		ppkg=(double)profit/(double)weight;
	}
	double getppkg(){
		return ppkg;
	}
	int getweight(){
		return weight;
	}
	int getprofit(){
		return profit;
	}
};
bool ValueCmp(knapsack const & a, knapsack const & b)
{
    return a.ppkg > b.ppkg;
}
int main(){
	
	cout<<"Enter total number of items.";
	int n;
	cin>>n;
	knapsack a[n];
	cout<<"Enter weight of all items."<<endl;
	int temp;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		a[i].putweight(temp);
	}
	cout<<"Enter profit of all items."<<endl;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		a[i].putprofit(temp);
	}
	for (int i = 0; i < n; ++i)
	{
		a[i].calculateppkg();
	}

	sort(a, a+n, ValueCmp);
	cout<<"Enter capacity of knapsack->";
	double capacity;
	cin>>capacity;
	double maxprofit=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i].getweight()<capacity){
			maxprofit+=a[i].getprofit();
			capacity-=a[i].getweight();
		}
		else{
			maxprofit+=a[i].getppkg()*capacity;
			break;
		}
	}
	cout<<"Maximum profit is:"<<maxprofit;
	return 0;
}
