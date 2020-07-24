#include<stdio.h>
void main()
{
	int a=1,b,c=1;
	printf("Enter The Value:");
	scanf("%d",&b);
	while(a<=b)
	{
		c=a*c;
		a++;
	}printf("%d",c);
	
}
