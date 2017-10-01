#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void push(char);
char pop();
char arr[101];
int top=-1;
int main(){
	char name[30];
	char option, ch;
	system("cls");
	printf("\nPlease enter your name.->");
	gets(name);
	system("cls");
	printf("\nWelcome %s.",name);
	printf("Let me introduce myself i am StringReverse.\n");
	printf("Oh i know my name is strange but i can do a work for you.\n");
	printf("You can provide me a string of length not greator than 100.\n");
	printf("As i am expert in stack data structure.\n");
	printf("So, I will revrese and print the string using stack.\n");
	printf("Are you ready to give me the work (y/n)-> ");
	option=getchar();
	fflush(stdin);
	system("cls");
	if(option=='y'){
		printf("Ok fine enter a string.->\n");
		while(ch!='\n'){
			ch=getchar();
			push(ch);
		}
		
		printf("\nReverse of the string you entered is.->\n");
		while(ch!='\0'){
			ch=pop();
			printf("%c",ch);
		}
		printf("\n\n\n");
		system("pause");
	}
	else{
		printf("\n\nOk bye, see you soon %s.\n\n\n",name);
		system("pause");
	}
	return 0;
}

void push(char ch){
	if(top<101){
		arr[++top]=ch;
		arr[top+1]='\0';
	}
}
char pop(){
	top--;
	return arr[top+1];
}
