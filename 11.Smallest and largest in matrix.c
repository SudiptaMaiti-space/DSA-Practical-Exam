//#include<stdio.h>
//
//void acc(int [5][5],int,int );
//void maxmin(int [5][5],int,int);
//
//void main()
//{
//    int a[5][5],r,c;   
//    printf("Smallest & largest no. from matrix"); 
//    printf("Enter the size of row:");
//    scanf("%d",&r);
//    printf("Enter the size of column:");
//    scanf("%d",&c);
//    acc(a,r,c);
//    maxmin(a,r,c);
//}
//
//void acc(int m[5][5],int r,int c)
//{
//    int i,j;
//    printf("Enter the elements of matrix");
//    for(i=0;i<r;i++)
//    {
//        for(j=0;j<c;j++)
//        {
//            printf("Element[%d][%d]=  ",i,j);
//            scanf("%d",&m[i][j]);
//        }
//    }
//}
//
//void maxmin(int m[5][5],int r, int c)
//{
//    int max=m[0][0], min=m[0][0],i,j;
//
//    for (i=0; i<r; i++)
//    {
//        for (j=0; j<c; j++)
//        {   
//            if(m[i][j]>max)
//                max= m[i][j];
//
//            if(m[i][j]<min)
//                min= m[i][j];
//        }
//    }
//    printf("Greatest no. is :  %d\n",max);
//    printf("Smallest no. is :  %d\n",min);
//}


#include<stdio.h>
int main() 
{
	int n,m,i,j;
	printf("Enter no. of row:");
	scanf("%d",&n);
	printf("Enter no. of column:");
	scanf("%d",&m);
	int ar[n][m];
	printf("Enter matrix elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Element[%d][%d]=",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
	int max=ar[0][0], min=ar[0][0];

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {   
            if(ar[i][j]>max)
                max= ar[i][j];

            if(ar[i][j]<min)
                min= ar[i][j];
        }
    }
    printf("Greatest no. is:%d\n",max);
    printf("Smallest no. is:%d\n",min);
}
