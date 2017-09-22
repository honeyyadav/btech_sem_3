/**********************************************
*   AUTHOR:                  HONEY YADAV      *
*   PROGRAM:                 MERGE SORT       *
*   IN COORDINATION WITH:    SUDHIR SIR       *
*   INSTITUITION:            IGU MEERPUR      *
**********************************************/

#include <stdio.h>
#include <stdbool.h>
int main(){
	int n;
	printf("Welcome to the program of searching.\n");
	printf("This program linearly searches a given array.\n\n");
	printf("Enter how many elements you want to put in array.-> ");
	scanf("%d",&n);
	int arr[n];
	printf("Well enter %d integers.->\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nOk your data has been saved successfully.\n");
	printf("Now enter the number you want to search from the data.->");
	int find;
	scanf("%d",&find);
	bool ans=false;
	int posi;
	for(int i=0;i<n;i++){
		if(arr[i]==find){
			ans=true;
			posi=i+1;
			break;
		}
	}
	if(ans){
		printf("\n\nYes %d is there at position %d int the list. It may or may not be at another position also.\n",find,posi);
	}
	else{
		printf("Sorry, %d is not present in the list.\n",find);
	}
}
