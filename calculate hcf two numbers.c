#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Two Numbers:");
	scanf("%d %d",&a,&b);
	for(c=a<b?b:a;c>=1;c--)
	{
		if(a%c==0 && b%c==0)
		{
			break;
		}
	}
	printf("HCF Value is : %d",c);
	
}
