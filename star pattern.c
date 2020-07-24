#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter The Number:");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		for(c=1;c<=a;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
