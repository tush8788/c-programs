#include<stdio.h>
void main()
{
	int arr[10],b,max;
	for(b=0;b<10;b++)
	{
		printf("Enter %d number: ",b+1);
		scanf("%d",&arr[b]);
	}
	max=arr[0];
	for(b=1;b<10;b++)
	{
		if(max>arr[b])
		{
			max=arr[b];
		}
	}
	printf("small Number is : %d",max);
}
