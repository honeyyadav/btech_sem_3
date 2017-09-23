#include <stdio.h>
void partition(int arr[],int l,int r);
int main(){
	int n;
	printf("Enter number of elements.->");
	scanf("%d",&n);
	printf("Enter all elements.->\n");
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	partition(arr,0,n-1);
	printf("The quick sorted array is:-\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
void partition(int arr[],int l,int r){
	if(l<r){
		int pivot=r,temp,j;
		for(int i=pivot-1;i>=0;i--){
			if(arr[i]>arr[pivot]){
				temp=arr[i];
				for(j=i;j<pivot;j++){
					arr[j]=arr[j+1];
				}
				arr[j]=temp;
				pivot=j-1;
			}
		}
		partition(arr,l,pivot-1);
		partition(arr,pivot+1,r);
	}
}