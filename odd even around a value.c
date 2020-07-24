#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a Number: ");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		if(b%2==0)
		{
			printf("%d\n",b);
		}
	}
}
