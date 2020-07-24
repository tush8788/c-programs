#include<stdio.h>
void name(int);
void main()
{
	int a,c;
	printf("Enter number print your name:");
	scanf("%d",&c);
	name(c);
}

void name(int c)
{
	int a,b;
	for(a=1;a<=c;a++)
	{
		if(c==0)
		{
			break;
		}name(c)=name(c-1);
	}
}
