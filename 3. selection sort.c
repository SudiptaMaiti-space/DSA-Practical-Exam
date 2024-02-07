#include <stdio.h>
int main()
{
	int i,a,b,n,temp,min;
	printf("enter index: ");
	scanf("%d",&n);
	int ar[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(a=0;a<n-1;a++)
	{
		min=a;
		for(b=a+1;b<n;b++)
		{
			if(ar[b]<ar[min])
			{
				min=b;
			}
		}
		if(min!=a)
		{
			temp=ar[a];
			ar[a]=ar[min];
			ar[min]=temp;
		}
	}
	printf("the sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	return 0;
}
