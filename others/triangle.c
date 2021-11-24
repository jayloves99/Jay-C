#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	printf("Enter a value");
	scanf("%d", &a);
	
	pattern(a);//actual parameter

	printf("Modon Mitra");
	
}

void pattern(int a) //formal parameter
{
	int row,col,k,z;
		//row
	for(row=1; row<=a; row++)
	{
		for(k=1; k<=a-row; k++)
		{
			printf(" ");
		}
		for(col=1; col<=row; col++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
}
