#include<stdio.h>
void main()
{
	int a=1,b,c=1;
	printf("Enter The value:");
	scanf("%d",&b);
	do{
		c=c*a;
		a++;
	}while(a<=b);
	printf("%d",c);
}
