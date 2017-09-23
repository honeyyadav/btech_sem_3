#include <stdio.h>
int main(){
	int n;
	printf("Enter number of elements");
	scanf("%d",&n);
	printf("Enter all elements\n");
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int pivot=n-1,temp,j;
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
	printf("The answer array is:-\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
