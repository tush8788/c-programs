#include<stdio.h>
void main()
{
	int x;
	printf("Enter The Number:");
	scanf("%d",&x);
	if(x&1)
	{
		printf("Odd Number");
	}
	else
	{
		printf("even Number");
	}
}
