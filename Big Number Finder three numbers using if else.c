#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Three Numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("This Numbers Big: %d",a);
		}
		else
		{
			printf("This Number is Big: %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("This Number is Big: %d",b);
		}
		else
		{
			printf("This Number is Big: %d",c);	
		}
		
	}
}
