#include<stdio.h>
#include<conio.h>

int main()
{
	int a,row,col,k,z;
	int num = 0;
	int num1 = 0;
	printf("Enter a value");
	scanf("%d", &a);
//	
//	int x1 = 65;
//	x1 += 5;
////	char x = 'B';
//	printf("%c",(char)x1);
	
	
	//row
	for(row=1; row<=a; row++)
	{
		for(k=1; k<=a-row; k++)
		{
			printf(" ");
		}
		
		for(col=1,num=(65+(row-1)); col<=row; col++,num--)
		{
			printf("%c",(char)num);
		}
//		
		for(z=row-1,num1=66; z>=1; z--,num1++)
		{
			printf("%c",(char)num1);
		}
		
		printf("\n");
	}
}
