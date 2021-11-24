#include<stdio.h>
#include<conio.h>

int main()
{
	int a1, a2, c;
	int choice;
	
//	printf("Enter 1st number\n");
//	scanf("%d",&a1);
//	
//	printf("Enter 2nd number\n");
//	scanf("%d",&a2);
	
	
	printf("****************\n");
	printf("Press 1. for addition\n");
	printf("Press 2. for sub\n");
	printf("Press 3. for multi\n");
	printf("Press 4. for exit\n");	
	printf("****************\n\n");
	
	scanf("%d",&choice);

	switch(choice)
	{		
		case 1:
				addition();
				break;
		
		case 2: 
				sub();
				break;
		case 3:
				multi();
				break;
		case 4:
//				c=a1+a2;
				printf("EXIT");
				break;
		default:
				printf("bero ekhan theke");
				break;
	}
	
}

void addition()
{
	int a1,a2,c;
	printf("Enter 1st number\n");
	scanf("%d",&a1);
	
	printf("Enter 2nd number\n");
	scanf("%d",&a2);
	
	c=a1+a2;
	printf("%d",c);
}

void sub()
{
	int a1,a2,c;
	printf("Enter 1st number\n");
	scanf("%d",&a1);
	
	printf("Enter 2nd number\n");
	scanf("%d",&a2);
	
	c=a1-a2;
	printf("%d",c);
}

void multi()
{
	int a1,a2,c;
	printf("Enter 1st number\n");
	scanf("%d",&a1);
	
	printf("Enter 2nd number\n");
	scanf("%d",&a2);
	
	c=a1*a2;
	printf("%d",c);
}




