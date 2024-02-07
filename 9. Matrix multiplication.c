#include<stdio.h>
int main() 
{
	int n,m,n2,m2,i,j,k,sum;
	printf("For 1st Matrix:");
	printf("Enter no. of row:");
	scanf("%d",&n);
	printf("Enter no. of column:");
	scanf("%d",&m);
	int ar1[n][m];
	printf("Enter matrix elements");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&ar1[i][j]);
		}
	}
	printf("For 2nd Matrix:");
	printf("Enter no. of row:");
	scanf("%d",&n2);
	printf("Enter no. of column:");
	scanf("%d",&m2);
	int ar2[n2][m2];
	printf("Enter matrix elements");
	for(i=0;i<n2;i++)
	{
		for(j=0;j<m2;j++)
		{
			scanf("%d",&ar2[i][j]);
		}
	}
	if(m==n2) {
		int ar[n][m2];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				sum=0;
				for(k=0;k<m;k++) 
				sum+=ar1[i][k]*ar2[k][j];
				ar[i][j]=sum;
			}
		}
	}
	int ar[n][m2];
	printf("multiplication result is : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m2;j++)
		{
			printf("%d\t",ar[i][j]);
		}
		printf("\n");
	}
	return 0;
}
