#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("Welcome To Shoping Mall Softwere\nEnter Your Shoping Bill Amount:");
	scanf("%d",&a);
	if(a>1000)
		{
			d=a*40/100;
			printf("Apply Discount 40 percent: %d\n",d);
			d=a-d;
			printf("Your Final Paid Amount: %d",d);		
		
		}
	else if(a>8000)
		{
			d=a*30/100;
			printf("Apply Discount 30 percent: %d\n",d);
			d=a-d;
			printf("Yout Final Paid Amount: %d",d);
		}
	else if(a>5000)
		{
			d=a*20/100;
			printf("Apply Discount 20 percent: %d\n",d);
			d=a-d;
			printf("Yout Final Paid Amount: %d",d);

		}
	else
		{
			printf("No Discount Avilable for this Amount\nYour Final Paid Amount: %d",a);
		}
}
