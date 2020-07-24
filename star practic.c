#include<stdio.h>
void main()
{
	int a,b,c;
	printf("How Many Star Are Print: ");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=b;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
