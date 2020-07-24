#include<stdio.h>
void main()
{
	int a,b=1,c;
	printf("Enter The Number: ");
	scanf("%d",&a);
	while(b<=10)
	{
		c=a*b;
		printf("%d\n",c);
		b++;
	}
}
