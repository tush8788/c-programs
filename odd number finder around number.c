#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a Number: ");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		if(b%2==1)
		{
			printf("%d\n",b);
		}
	}
}
