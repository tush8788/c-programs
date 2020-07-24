#include<stdio.h>
int sum(int);
void main()
{
	int a,b;
	printf("Enter N natural number:");
	scanf("%d",&a);
	b=sum(a);
	printf("%d",b);
}

int sum(int n)
{
	int m;
	if(n==1)
	{
		return 1;
	}
	m=n+sum(n-1);
	return (m);
}

