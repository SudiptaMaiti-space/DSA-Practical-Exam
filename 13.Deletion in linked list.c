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
	if(head==NULL) {
		printf("The list is empty");
	}
	else {
		ptr=head;
		while(ptr!=NULL) {
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
		printf("\n");
	}
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


void deleteBeginning() {
	if(head==NULL) {
		printf("The list is empty\n");
	}
	else {
		ptr=head;
		head=head->next;
		printf("The deleted element is %d\n",ptr->data);
		free(ptr);
	}
}

void deleteEnd() {
	node *index;
	if(head==NULL) {
		printf("The list is empty\n");
	}
	else if(head->next==NULL) {
		ptr=head;
		printf("The deleted element is %d\n",ptr->data);
		free(head);
	}
	else {
		ptr=head;
		while(ptr->next!=NULL) {
			index=ptr;
			ptr=ptr->next;
		}
		index->next=NULL;
		printf("The deleted element is %d\n",ptr->data);
		free(ptr);
	}
}

void deleteAnywhere() {
	int pos,i;
	node *temp;
	printf("Enter the position to delete:");
	scanf("%d",&pos);
	if(head==NULL) {
		printf("The list is empty");
	}
	else {
		ptr=head;
	    for(i=0;i<pos-1;i++) {
	    	temp=ptr;
	    	ptr=ptr->next;
		}
		printf("The deleted element is %d\n",ptr->data);
		temp->next=ptr->next;
		free(ptr);
	}
}

void main() {
	int choice;
	do {
		printf("To insert at choose 1.for begining 2.for any position, 3. for end insert,\n Enter for delete at 4.beginning, 5.end, 6.anywhere, 7.for display, 8. for exit.\n");
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
			deleteBeginning();
			break;
		case 5:
			deleteEnd();
			break;
		case 6:
			deleteAnywhere();
			break;
		case 7:
			display();
			break;
		case 8:
			exit(0);
		default:
			printf("Invalid! Enter another");
		}
	}while(choice!=8); 
	getch();
}
