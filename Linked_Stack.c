#include <stdio.h>
void push(int x);
void display();
int top=-1;
struct Node{
	int data;
	struct Node* next;
};
struct Node* head=NULL;
struct Node* head2=NULL;
int main(){
	int n;
	printf("Enter number of elements.->");
	scanf("%d",&n);
	int a;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		push(a);
	}
	display();

	return 0;
}
void push(int x){
	if(top==-1){
		struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
		head=temp;
		head2=temp;
		(*temp).data=x;
		(*temp).next=NULL;
		top++;
	}
	else{
		struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
		(*head).next=temp;
		head=temp;
		(*temp).data=x;
		(*temp).next=NULL;
	}
}
void display(){
	struct Node* temp;
	temp=head2;
	printf("The output is.\n\n");
	if(temp==NULL){
		printf("There is no element(s) in stack.\n\n");
	}
	else{
		while(1){
			printf("%d ",(*temp).data);
			temp=(*temp).next;
			if((*temp).next==NULL){
				printf("%d ",(*temp).data);
				temp=(*temp).next;
				break;
			}
		}
	}
}
