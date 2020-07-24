#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("1. for + :\n2. for -:\n3. for *\n4. for (/):");
	scanf("%d",&d);
	switch(d)
	{
		case 1:
			{
				printf("Enter Two Numbers: ");
				scanf("%d %d",&a,&b);
				c=a+b;
				printf("%d",c);
				break;
			}
		case 2:
			{
				printf("Enter Two Numbers: ");
				scanf("%d %d",&a,&b);
				c=a-b;
				printf("%d",c);
				break;

			}
		case 3:
			{
				printf("Enter Two Numbers: ");
				scanf("%d %d",&a,&b);
				c=a*b;
				printf("%d",c);
				break;
			}
		case 4:
			{
				printf("Enter Two Numbers: ");
				scanf("%d %d",&a,&b);
				c=a/b;
				printf("%d",c);
				break;	
			}
		default :
			{
				printf("Invlid Input");
			}
	}
}
