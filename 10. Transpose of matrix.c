#include <stdio.h>
int main()
{
	int n,m,i,j;
	printf("Enter no. of row:");
	scanf("%d",&n);
	printf("Enter no. of column:");
	scanf("%d",&m);
	int ar[n][m];
	printf("Enter matrix elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("Before Transpose : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",ar[i][j]);
		}
		printf("\n");
	}
	int arr[m][n];
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			arr[i][j]=ar[j][i];
		}
	}
	printf("After Transpose: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
