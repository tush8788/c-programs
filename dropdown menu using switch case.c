#include<stdio.h>
void main()
{
	int a,b,c;
	printf("1. for Print N natural Number:\n2. for Check Odd Even:\nYour Choice: ");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
			{
				printf("Enter The Number:");
				scanf("%d",&b);
				for (c=1;c<=b;c++)
				{
					printf("%d\n",c);
				}
				break;
			}
		case 2:
			{
				printf("Enter The Number:");
				scanf("%d",&b);
				b%2==0?printf("This Number is Even"):printf("This Number is Odd");	
				break;
			}
		default:
			{
				printf("Invild");
			}
			
	}
}
