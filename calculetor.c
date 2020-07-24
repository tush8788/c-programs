#include<stdio.h>
void main()
{
	int a,b,c;
	char i;
	printf("Enter char:");
	scanf("%c",&i);
	switch(i)
	{
		case '+':
			{
				printf("Enter two Numbers:");
				scanf("%d %d",&a,&b);
				c=a+b;
				printf("%d",c);
				break;
			}
		case '-':
			{
				printf("Enter two Numbers:");
				scanf("%d %d",&a,&b);
				c=a-b;
				printf("%d",c);
				break;
			}
		case '*':
			{
				printf("Enter two Numbers:");
				scanf("%d %d",&a,&b);
				c=a*b;
				printf("%d",c);
				break;

			}
		case '/':
			{
				printf("Enter two Numbers:");
				scanf("%d %d",&a,&b);
				c=a/b;
				printf("%d",c);
				break;

			}
		default:
			{
				printf("Invild");
			}
		
	}
}
