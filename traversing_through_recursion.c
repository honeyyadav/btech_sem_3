#include <stdio.h>
void display(int arr[],int *p);
void getArray(int arr[],int *p);
int a=0;
int n;
int main(){
	printf("Enter size of array.->");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d element(s).->\n",n);
	getArray(arr,&n);
	a=0;
	display(arr,&n);
}
void display(int arr[],int *p){
	if(a<(*p)){
		printf("%d ",arr[a]);
		a++;
		display(arr,p);
	}
}
void getArray(int arr[],int *p){
	if(a<(*p)){
		scanf("%d",&arr[a]);
		a++;
		getArray(arr,p);
	}
}
