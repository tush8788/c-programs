#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter The Number:");
	scanf("%d",&a);
	for(b=1;b<=10;b++)
	{
		c=a*b;
		printf("%d\n",c);
	}
}
