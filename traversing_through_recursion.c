#include <stdio.h>
void display(int arr[],int *p);
int a=0;
int main(){
	int n;
	printf("Enter size of array.->");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d element(s).->\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	display(arr,&n);
}
void display(int arr[],int *p){
	if(a<(*p)){
		printf("%d ",arr[a]);
		a++;
		display(arr,p);
	}
}