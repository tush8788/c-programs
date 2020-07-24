//Hotel food menu system
#include<stdio.h>
#include<conio.h>

void main()
{
	int ch,i,r,sum=0;
	char more;
	printf("   WELCOME TO PEARL");
	printf("\n...........HOTEL MENUE..........");
	do
	{
		
		printf("\n1.BEVERAGES \n2.SNAKS \n3.SALAD \n4.SOUP");
		printf("\nPlease enter your choice");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1: printf("\n1.Cold Coffee with Ice creame     70 \n2.Milk Shake			  50 \n3.Cold Coffee			  50 \n4.Hot Cofee			  30\n5.Tea			          20");
				printf("\n Enter your choice");	
				scanf("%d",&i);
				if(i==1)
				   r=70;
				else if(i==2)
					r=50;
				else if(i==3)
				    r=50;
				else if(i==4)
					r=30;
				else if(i==5)
					r=20;				
				else
					printf("\n enter correct option.....");
				sum=sum+r;
			break;
		case 2: printf("\n1.Panner Tikka Dry		100\n2.Veg Crispy Corn		100	 \n3.Paneer Pakoda			100\n4.Veg Cutlets			100\n5.Veg Grilled Sandwitch		100 ");
				printf("\n Enter your choice");	
				scanf("%d",&i);
			if(i==1)
				   r=100;
				else if(i==2)
					r=100;
				else if(i==3)
				    r=100;
				else if(i==4)
					r=100;
				else if(i==5)
					r=100;				
				else
					printf("\n enter correct option.....");
				sum=sum+r;		
			break;
		case 3: printf("\n1.Punjabi Salad			150\n2.Tomato Salad			150 \n3.Green Salad			150\n4.Onion salad			150 \n5.Papad Fry Salad		150 ");
				printf("\n Enter your choice");	
				scanf("%d",&i);
			if(i==1)
				   r=150;
				else if(i==2)
					r=150;
				else if(i==3)
				    r=150;
				else if(i==4)
					r=150;
				else if(i==5)
					r=150;				
				else
					printf("\n enter correct option.....");
				sum=sum+r;
			break;
		case 4: printf("\n1.Manchurian Soup		180\n2.Veg Noodels Soup		180\n3.Mushroom Soup			200\n4.Sweet Corn Soup		200\n5.Garlic Soup			170");
				printf("\n Enter your choice");	
				scanf("%d",&i);
			if(i==1)
				   r=180;
				else if(i==2)
					r=180;
				else if(i==3)
				    r=200;
				else if(i==4)
					r=200;
				else if(i==5)
					r=170;				
				else
					printf("\n enter correct option.....");
				sum=sum+r;
			break;
		default: printf("\nPlease Select Valid Choice");
			break;
		}
		
		
		printf("\nDo you want to select more items ");
		//printf("\nPress 1 for yes and 2 for no");

		fflush(stdin);
		scanf("%c",&more);
		

	}
	while(more=='Y'||more=='y');
	printf("\n Your Total amount is Rs. %d only",sum);
	getch();
}
