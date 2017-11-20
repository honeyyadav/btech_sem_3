#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node{
	struct Node *left;
	int data;
	struct Node *right;
}Node;
Node* root=NULL;
Node* createNode(){
	Node* temp=(Node*)malloc(sizeof(Node));
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void insert(Node* subroot, int x){
	if(root==NULL){
		Node* temp=createNode();
		temp->data=x;
		root=temp;
	}
	else if(subroot==NULL){
		Node* temp=createNode();
		temp->data=x;
		subroot=temp;
	}
	else{
		if(x<=subroot->data){
			if(subroot->left==NULL){
				Node* temp=createNode();
				temp->data=x;
				subroot->left=temp;
			}
			else{
				insert(subroot->left,x);
			}
		}
		else{
			if(subroot->right==NULL){
				Node* temp=createNode();
				temp->data=x;
				subroot->right=temp;
			}
			else{
				insert(subroot->right,x);
			}
		}
	}
}
void DisplayIn(Node* subroot){
	if(subroot==NULL)
		return;
	else{
		printf("%d\n",subroot->data);
		DisplayIn(subroot->left);
		DisplayIn(subroot->right);
	}
}
int main()
{
	while(1){
		printf("Press 1 to insert else to exit.");
		int a;
		scanf("%d",&a);
		if(a==1){
			int x;
			printf("Enter data.");
			scanf("%d",&x);
			insert(root,x);
		}
		else
			break;
	}
	DisplayIn(root);
	return 0;
}
