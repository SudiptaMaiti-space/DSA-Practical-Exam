#include <stdio.h>
int main()
{
	int i,n,num,f,l,m;
	printf("enter index: ");
	scanf("%d",&n);
	int ar[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("enter search element: ");
	scanf("%d",&num);
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<=l)
	{
		if(num<ar[m])
		l=m-1;
		else if(num>ar[m])
		f=m+1;
		else
		{
			printf("%d found in %d position",num,m+1);
			break;
		}
		m=(f+l)/2;
	}
	if(f>l)
	printf("Not found! %d in not present",num);
	return 0;
}
