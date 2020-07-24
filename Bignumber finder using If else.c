#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter Two Numbers:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("This Is Big Number : %d",a);
	}
	else if(a==b)
	{
		printf("Your Enter Two Numbers are Sem :%d",a);
	}
	else
	{
		printf("This Is Big Number : %d",b);
	}
}
