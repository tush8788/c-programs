#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Three Number:");
	scanf("%d %d %d",&a,&b,&c);
	printf("This Nuber is Big :%d",a>b?a>c?a:c:b>c?b:c);
}

