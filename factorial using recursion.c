#include<stdio.h>
int fact(int);
void main()
{
	int a,b;
	printf("Enter A Number:");
	scanf("%d",&a);
	b=fact(a);
	printf("%d",b);
}
int fact(int n)
{
	int s;
	if(n==1)
	{
		return 1;
	}
	s=n*fact(n-1);
	return (s);
}
