#include<stdio.h>
void main()
{
	int a=1,b,c=1;
	printf("Enter The Value:");
	scanf("%d",&b);
	do 
	{
		c=a*b;
		printf("%d\n",c);
		a++;
	}while(a<=10);
}
