#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

#define max 10
int queue[max];
int front=-1, rear=-1;

void insert() {
	int n;
	printf("Enter the no. to insert: ");
	scanf("%d",&n);
	if(front==0 && rear==max-1) {
		printf("Overflow\n");
	}
	else if(front==-1 && rear==-1) {
		front=rear=0;
		queue[rear]=n;
	}
	else if(front!=0 && rear==max-1) {
		rear=0;
		queue[rear]=n;
	}
	else {
		rear++;
		queue[rear]=n;
	}
}

void delete() {
	int b;
	if(front==-1 && rear==-1) {
		printf("Underflow\n");
	}
	b=queue[front];
	if(front==rear) {
		front=rear=-1;
	}
	else {
		if(front==max-1) {
			front=0;
		}
		else {
			front++;
		}
	}
	printf("The deleted element is %d\n",b);	
}

void display() {
	int i;
	printf("The elements in queue are:\n");
	if(front==-1 && rear==-1) {
		printf("\n the queue is empty");
	}
	else {
		if(front<rear) {
			for(i=front; i<=rear; i++) {
				printf(" %d",queue[i]);
			}
		}
		else {
			for(i=front;i<max;i++) {
				printf("%d ",queue[i]);
			}
		}
	}
	printf("\n");
}

int main() {
	int choice,val;
	do {
		printf("1.for insert, 2.delete, 3.display, 4.quit \nEnter your choice:");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid choice.\n");
		}} while(choice!=5);
		return 0;
		getch();
}
