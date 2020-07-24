#include<stdio.h>
void main()
{
	int a,b,c=1,d=0,e;
	printf("Enter The Number:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
			e=c+d;
			c=d;
			d=e;
			printf("%d\n",e);

	}
}
