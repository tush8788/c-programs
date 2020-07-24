#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Two Value:");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After Swaping %d %d",a,b);
}
