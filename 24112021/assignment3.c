#include<stdio.h>
#include<conio.h>

void main() 
{
        char name[30];
        int age;
	    double sum, pre, disc = 0.0, com = 0.0;
        printf("Enter Name: ");
        scanf("%s",&name);

        printf("Enter Sum Assured: ");
        scanf("%lf",&sum);
        
        printf("Enter First Premium: ");
        scanf("%lf",&pre);

        if(sum <= 100000){
            disc = pre * 5.0 / 100.0;
            com = sum * 2.0 / 100.0;
        }
        else if(sum <= 200000){
            disc = pre * 8.0 / 100.0;
            com = sum * 3.0 / 100.0;
        }
        else if(sum <= 500000){
            disc = pre * 10.0 / 100.0;
            com = sum * 5.0 / 100.0;
        }
        else{
            disc = pre * 15.0 / 100.0;
            com = sum * 7.5 / 100.0;
        }

        printf("Name of the policy holder: %s\n " ,name);
        printf("Sum assured: %0.2f\n " ,sum);
        printf("Premium: %0.2f\n " ,pre);
        printf("Discount on the first premium: %0.2f\n" ,disc);
        printf("Commission of the agent: %0.2f \n" ,com);

    }
