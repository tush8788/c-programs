#include<stdio.h>
void main()
{
	int b,c;
	float a[100];
	printf("Enter avrage range 1 to 100:");
	scanf("%d",&b);
	for(c=0;c<b;c++)
	{
		printf("Enter the %d number:",c+1);
		scanf("%f",&a[c]);
	}
	for(c=1;c<b;c++)
	{
		if(a[0]<a[c])
		a[0]=a[c];
	}
	printf("largest element: %.2f",a[0]);
	
}
