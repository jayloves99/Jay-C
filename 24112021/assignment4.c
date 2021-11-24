#include<stdio.h>
#include<conio.h>


void main() 
{
        char name[30];
        int age;
	    double basic, da = 0.0, sa = 0.0, gross = 0.0;
        printf("Enter name: ");
        scanf("%s",&name);

        printf("Enter basic salary: ");
        scanf("%lf",&basic);

        if (basic <= 10000){
            da =basic * 10.0 / 100.0;
            sa =basic * 5.0 / 100.0;
        }
        else if (basic <= 20000){
            da =basic * 12.0 / 100.0;
            sa =basic * 8.0 / 100.0;
        }
        else if (basic <= 30000){
            da =basic * 15.0 / 100.0;
            sa =basic * 10.0 / 100.0;
        }
        else{
            da =basic * 20.0 / 100.0;
            sa =basic * 12.0 / 100.0;
        }
        
        gross =basic + da + sa;
        printf("Name\tBasic\tDA\tSA\tGross Salary\n");
        printf("%s\t%0.0f\t%0.0f\t%0.0f\t%0.0f",name,basic,da,sa,gross);
    }
