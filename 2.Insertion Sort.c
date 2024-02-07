#include<stdio.h>
int main() {
	int n, key,i,j;
	printf("enter index: ");
	scanf("%d",&n);
	int ar[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=1; i<n; i++) {
		key=ar[i];
		j=i-1;
		while(j>=0 && ar[j]>key) {
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=key;
	}
	printf("The sorted array: ");
	for(i=0; i<n;i++) {
		printf("%d ",ar[i]);
	}
	return 0;
}
