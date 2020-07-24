#include<stdio.h>
main()
{
	int a,b,c=1;
	printf("Enter The Value:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		c=b*c;
		
	}	printf("%d",c);
}
