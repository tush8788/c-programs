#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("Welcome to Mall\nEnter Your Shoping Bill Amount: ");
	scanf("%d",&a);
	if(2000>a)
	{
		printf("No Discount Avilable\nYour Final Paid Amount : %d\nvist agin good day !",a);
	}
	else if(5000>a)
	{
		b=a*15/100;
		printf("Apply 15 percent Disount : %d\n",b);
		c=a-b;
		printf("Your Final Paid Amount: %d\nvist agin good day !",c);
	}
	else if(8000>a)
	{
		b=a*20/100;
		printf("Apply 20 percent Disount : %d\n",b);
		c=a-b;
		printf("Your Final Paid Amount: %d\nvist agin good day !",c);

	}
	else if(12000>a)
	{
		b=a*25/100;
		printf("Apply 25 percent Disount : %d\n",b);
		c=a-b;
		printf("Your Final Paid Amount: %d\nvist agin good day !",c);

	}
	else if(12000<a)
	{
		b=a*50/100;
		printf("Apply 50 percent Disount : %d\n",b);
		c=a-b;
		printf("Your Final Paid Amount: %d\nvist agin good day !",c);

	}
	
}
