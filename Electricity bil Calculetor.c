#include<stdio.h>
void main()
{
	int a,b,c,d;
	float unit,total;
	printf("......Electrisity Bill.......\n");
	printf("1. for Home \n2. for Shop \nEnter Your Choice: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			{
				printf("Enter Your Unit: ");
				scanf("%f",&unit);
				if(unit<=100)
				{
					total=unit*3.75;
					printf("Rate 3.75: %f\n",total);
					printf("Apply Fix charges : 60\n");
					printf("Your Final Paid Amount: %f",total+60);
				}
				else if(unit<=300)
				{
					total=unit*7.21;
					printf("Rate 7.21: %f\n",total);
					printf("Apply Fix charges : 60\n");
					printf("Your Final Paid Amount: %f",total+60);
				}
				else if(unit<=500)
				{
					total=unit*9.95;
					printf("Rate 9.95: %f\n",total);
					printf("Apply Fix charges : 60\n");
					printf("Your Final Paid Amount: %f",total+60);
				}
				else if(unit<=1000)
				{
					total=unit*11.31;
					printf("Rate 11.31: %f\n",total);
					printf("Apply Fix charges : 60\n");
					printf("Your Final Paid Amount: %f",total+60);
				}
				else 
				{
					total=unit*12.5;
					printf("Rate 12.5: %f\n",total);
					printf("Apply Fix charges : 60\n");
					printf("Your Final Paid Amount: %f",total+60);
				}
				break;
			}
		case 2:
			{
					printf("This Service not Avilable \n!!!! sorry !!!!");
			}
	}
}
