#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
typedef struct node node;
node *ptr=NULL, *head=NULL;

void display() {
	if(head==NULL)
	printf("The list is empty.");
	else {
		printf("The list is:\n");
		for(ptr=head; ptr!=NULL ; ptr=ptr->next)
		printf("%d ",ptr->data);
	}
	printf("\n");
}

void beginninginsert() {
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	int data;
	printf("Enter data:");
	scanf("%d",&data);
	newnode->data=data;
	if(head==NULL) {
		newnode->next=NULL;
	}
	else {
		newnode->next=head;
	}
	head=newnode;
}

void endinsert() {
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	int data;
	printf("Enter data:");
	scanf("%d",&data);
	newnode->data=data;
	newnode->next=NULL;
	if(head==NULL) {
		head=newnode;
	}
	else {
		ptr=head;
		while(ptr->next!=NULL) {
			ptr=ptr->next;
		}
		ptr->next=newnode;
	}
}

void anywhereinsert() {
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	int data,pos,i;
	printf("Enter data:");
	scanf("%d",&data);
	printf("Enter position:");
	scanf("%d",&pos);
	newnode->data=data;
	newnode->next=NULL;
	ptr=head;
//	while(pos!=2) {
//		ptr=ptr->next;
//		pos--;
//	}
	for(i=0;i<pos-2;i++)
	ptr=ptr->next;
	
	newnode->next=ptr->next;
	ptr->next=newnode;
}

void main() {
	int choice;
	do {
		printf("To insert at choose 1.for begining 2.for any position, 3. for end insert, 4.for display, 5. for exit.\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				beginninginsert();
				break;
			case 2:
				anywhereinsert();
				break;
			case 3:
				endinsert();
				break;
			case 4:
				display();
				break;	
			case 5:
				exit(0);
			default:
				printf("INVALID! Enter valid option.\n");
					
		}
	}
	while(choice!=5);
	{
		getch();
	}
	getch();
}
