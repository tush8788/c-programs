#include<stdio.h>
void main()
{
	int a,b,c;
	printf("1. for factorial:\n2. for tables:\nEnter Your Choice:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			{	
				int f=1; 
				printf("Enter a Number: ");
				scanf("%d",&b);
				for(c=1;c<=b;c++)
				{
					f=c*f;
				}
				printf("%d",f);
			}
		case 2:
			{
				printf("Enter a Number: ");
				scanf("%d",&b);
				for(c=1;c<=10;c++)
				{
					a=c*b;
					printf("%d\n",a);
				}
			}
	}
}
