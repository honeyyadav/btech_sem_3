/**********************************************
*   AUTHOR:                  HONEY YADAV      *
*   PROGRAM:                 QUEUE            *
*   IN COORDINATION WITH:    SUDHIR SIR       *
*   INSTITUITION:            IGU MEERPUR      *
**********************************************/

#include <stdlib.h>
#include <stdio.h>
#define MAX 100
void enQueue();
void deQueue();
void isEmpty();
void display();
void out_();
int arr[MAX];
int front=-1;
int rear=-1;
int total=0;
int main(){
	int option;
	system("cls");
	printf("\nWelcome sir this program can create a queue list for you.\n");
	printf("The list can contain maximum 100 integers.\n");
	printf("The program is based on data structure called queue(circular).\n\n");
	do{
		printf("****************** MAIN MENU ******************\n");
		printf("1. INSERT ELEMENT IN QUEUE.\n");
		printf("2. REMOVE ELEMENT FROM QUEUE.\n");
		printf("3. IS QUEUE EMPTY\n");
		printf("4. DISPLAY\n");
		printf("5. EXIT\n");
		printf("***********************************************\n");
		printf("Enter your option:->");
		scanf("%d",&option);
		switch(option){
			case 1:enQueue();break;
			case 2:deQueue();break;
			case 3:isEmpty();break;
			case 4:display();break;
			case 5:out_();break;
			default:system("cls");
			printf("Sorry you have choosen option out of index. Please try again.\n\n");
		}
	}
	while(1);
}
void enQueue(){
	system("cls");
	if(total==MAX){
		printf("\nSorry queue is overflow.\n\n");
		return;
	}
	else if(front==-1 && rear==-1)
		front++;
	int num;
	printf("Enter a number to insert into queue.->");
	scanf("%d",&num);
	rear=(rear+1)%MAX;
	arr[rear]=num;
	printf("\n%d has been inserted successfully.\n\n",num);
	total++;
}
void deQueue(){
	system("cls");
	if(total==0)
		printf("\nSorry queue is empty(Underflow).\n\n");
	else{
		printf("\n%d has been removed successfully.\n\n",arr[front]);
		front=(front+1)%MAX;
		total--;
	}
	
}
void display(){
	system("cls");
	if(total==0)
		printf("Sorry queue is empty.\n\n");
	else{
		printf("Your queue is below:-\n\n");
		for(int i=front;i<total+front;i++){
			printf("%d ",arr[i%MAX]);
		}
		printf("\n\n");
	}
	
}
void out_(){
	char ch;
	system("cls");
	printf("\nAre you sure you want to exit (y/n) ->");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='y')
		exit(0);
	else{
		system("cls");
		printf("\nOk fine you are still inside the program.\n\n");
	}
}
void isEmpty(){
	system("cls");
	if(total>0)
		printf("\nNo queue is not empty.\n\n");
	else
		printf("\nYes queue is empty.\n\n");
}