#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 5
int st[max];
int top=-1;

void push() {
	if(top==max-1) {
		printf("Overflow\n");
	}
	else {
		int n;
		printf("Enter a no. to push: ");
		scanf("%d",&n);
		top++;
		st[top]=n;	
	}
}

int pop() {
	int val;
	if(top==-1) {
		printf("Underflow\n");
		return 0;
	}
	else {
		val=st[top];
		top--;
		return val;
	}
}

void display() {
	int i;
	if(top==-1) {
		printf("Underflow. The stack is empty\n");
	}
	else {
		printf("The elements of stack are:\n");
		for(i=0;i<=top;i++) {
			printf("%d ",st[i]);
		}
		printf("\n");
	}
}

int main() {
	int choice,val;
	do {
		printf("1.for push, 2.for pop, 3.for display, 4.quit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				push();
				break;
			case 2:
				val=pop(st);
				printf("The poped value is %d\n",val);
				break;
			case 3:
				display(st);
				break;
			case 4:
				exit(0);
			default :
				printf("Enter valid option\n");
		}
	} while(choice!=5);
	return 0;
	getch();
}
