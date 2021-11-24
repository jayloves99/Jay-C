#include<stdio.h>
#include<conio.h>

void main()
{
	char name[30];
	int age;
	double ti, tax=0.0;
	//1st we will take Name
	printf("Enter the name ");
	gets(name);
		
	//2nd we will take age
	printf("Enter the age ");
	scanf("%d",&age);
	
	//3rd we will take Taxable income	
	printf("Enter Taxable Amount ");
	scanf("%lf",&ti);
	
	//age condition
	if(age > 65 )
	{
		printf("wrong category");
	}
	else{
			if(ti <= 250000)
			{
				tax = 0;
			}
			else if(ti >250000 && ti<=500000 )
			{
				tax = (ti - 160000)*10/100;
			}
			else if(ti >500000 && ti<=1000000 )
			{
				tax = (ti - 500000)*20/100;
				tax = tax + 34000;
			}
			else if(ti >1000000)
			{
				tax = (ti - 1000000)*30/100;
				tax = tax + 94000;
			}
			printf("Tax Payable Amount %0.2f", tax);	
		}
	
}
