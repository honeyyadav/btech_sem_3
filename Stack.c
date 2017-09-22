#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void out_();
void push();
void pop();
void peep();
void display();
int arr[MAX];
int top=-1;
int main(){
	int option;
	system("cls");
	printf("Welcome sir this program can create a stack list for you. The list can contain maximum 100 integers.");
	printf("The program is based on data structure called stack.\n\n");
	do{
		printf("****************** MAIN MENU ******************\n");
		printf("1. PUSH\n");
		printf("2. POP\n");
		printf("3. PEEP\n");
		printf("4. DISPLAY\n");
		printf("5. EXIT\n");
		printf("***********************************************\n");
		printf("Enter your option:->");
		scanf("%d",&option);
		switch(option){
			case 1:push();break;
			case 2:pop();break;
			case 3:peep();break;
			case 4:display();break;
			case 5:out_();break;
			default:system("cls");printf("Sorry you have choosen option out of index. Please try again.\n\n");
		}
	}
	while(1);
	
	return 0;
}
void out_(){
	char ch;
	system("cls");
	printf("\nAre you sure you want to exit (y/n) ->");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='y'){
		exit(0);
	}
	else{
		system("cls");
		printf("\nOk fine you are still inside the program.\n\n");
	}
}
void push(){
	int x;
	if(top==MAX-1){
		printf("Sorry stack is full.\n");
	}
	else{
		printf("Ok, enter a number to push into stack:->");
		scanf("%d",&x);
		arr[++top]=x;
		system("cls");
		printf("\n%d has been pushed successfully.\n\n",x);
	}
}
void pop(){
	if(top==-1){
		system("cls");
		printf("\nStack has nothing to pop.\n\n");
	}
	else{
		top--;
		system("cls");
		printf("\n%d has been poped successfully.\n\n",arr[top+1]);
	}
}
void peep(){
	if(top==-1){
		system("cls");
		printf("\nSorry stack is empty.\n\n");
	}
	else{
		system("cls");
		printf("\nThe last number is %d.\n\n",arr[top]);
	}
}
void display(){
	if(top==-1){
		printf("Stack is empty.\n");
	}
	else{
		system("cls");
		printf("Your stack elements are as:-\n\n");
		for(int i=0;i<=top;i++)
			printf("%d ",arr[i]);
		printf("\n\n");
		system("pause");
		printf("\n");
		system("cls");
	}
}