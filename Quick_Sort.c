#include <stdio.h>
#include <stdlib.h>
void quickSort(int arr[],int start,int end);
int partition(int arr[],int start,int end);
void swap(int *a,int *b);
int main(){
	int n;
	printf("Welcome to the sorting program.\n");
	printf("This program takes array as an input an prints result as sorted array.\n");
	system("pause");
	system("cls");
	printf("Enter the number of elements you want to sort.->");
	scanf("%d",&n);
	printf("Enter all elements.->\n");
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	quickSort(arr,0,n-1);
	printf("The sorted array is:-\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n\n");
	system("pause");
}
void quickSort(int arr[],int start,int end){
	if(start<end){
		int position=partition(arr,start,end);
		quickSort(arr,start,position-1);
		quickSort(arr,position+1,end);
	}
}
int partition(int arr[],int start,int end){
	int pivot=arr[end];
	int pivotposition=start;
	for(int i=start;i<end;i++){
		if(arr[i]<pivot){
			swap(&arr[i],&arr[pivotposition]);
			pivotposition++;
		}
	}
	swap(&arr[end],&arr[pivotposition]);
	return pivotposition;
}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
