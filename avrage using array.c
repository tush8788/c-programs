#include<stdio.h>
void main()
{
	int arr[100],b,c,sum;
	float avg;
	printf("Enter The Value: ");
	scanf("%d",&b);
	for(c=0;c<b;c++)
	{
		printf("Enter %d number:",c+1);
		scanf("%d",&arr[c]);
	}
	sum=arr[0];
	for(c=1;c<b;c++)
	{
		sum=sum+arr[c];
	}
	avg=sum/100.00;
	printf("Avrage is %f",avg);
	
}
