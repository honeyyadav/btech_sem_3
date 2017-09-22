/**********************************************
*   AUTHOR:                  HONEY YADAV      *
*   PROGRAM:                 MERGE SORT       *
*   IN COORDINATION WITH:    SUDHIR SIR       *
*   INSTITUITION:            IGU MEERPUR      *
**********************************************/

#include <stdio.h>
void mergearray(int arr[], int l, int m, int r){
	int temp_array[r-l+1];
	int i;
	int j=m+1;
	int k=0;
	for(i=l;i<=m && j<=r;k++){
		if(arr[i]<arr[j]){
			temp_array[k]=arr[i];
			i++;
		}
		else{
			temp_array[k]=arr[j];
			j++;
		}
	}
	while(i<=m){
		temp_array[k]=arr[i];
		i++;
		k++;
	}
	while(j<=r){
		temp_array[k]=arr[j];
		j++;
		k++;
	}
	k=0;
	for(i=l;i<=r;i++){
		arr[i]=temp_array[k];
		k++;
	}
}
void mergeSort(int arr[], int l, int r){
	if(l<r){
		int m=(l+r)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		mergearray(arr,l,m,r);
	}
}
int main(){
	printf("How may number you want in list.-> ");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter all numbers.->\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	mergeSort(arr, 0, n-1);
	printf("Result\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
