#include <stdio.h>

void printarray(int* a, int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int partition(int a[], int low, int high) {
	int pivot=a[low];
	int i=low+1;
	int j=high;
	int temp;
	do {
		while(a[i]<=pivot) {
			i++;
		}
		while(a[j]>pivot) {
			j--;
		}
		if(i<j) {
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	} while(i<j);
	 
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
	return j;
}

void quicksort(int a[], int low, int high) {
	int partition_index;
	if(low<high) {
		partition_index= partition(a,low,high);
		quicksort(a,low,partition_index-1);
		quicksort(a,partition_index+1,high);
	}
}

int main() {
	int n,i;
	printf("Enter total index:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements \n");
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Array before sorting:\n");
	printarray(a,n);
	quicksort(a,0,n-1);
	printf("Array after sorting:\n");
	printarray(a,n);
	return 0;
}
