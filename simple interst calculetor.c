#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter Amount ,Rate of Interst and Total Months: ");
	scanf("%d %d %d",&a,&b,&c);
	d=a*b*c/100;
	printf("%d",d);
}
