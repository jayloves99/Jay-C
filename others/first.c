#include<stdio.h>
#include<conio.h>

int main()
{
	int a,i,j;
	printf("Enter a value");
	scanf("%d", &a);
	
	//row
	for(i=0; i<a; i++)
	{
		for(j=1; j<=a-i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
