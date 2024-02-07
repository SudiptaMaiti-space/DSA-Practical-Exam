#include<stdio.h> 

int findgcd(int n1, int n2) {
	if(n2!=0) {
		return findgcd(n2, n1%n2);
	}
	else {
		return n1;
	}
}

int main() {
	int n1,n2;
	printf("Enter a no.:");
	scanf("%d",&n1);
	printf("Enter a no.:");
	scanf("%d",&n2);
	int gcd;
	gcd= findgcd(n1,n2);
	printf("The gcd of %d and %d is %d",n1,n2,gcd);
	return 0;
}
