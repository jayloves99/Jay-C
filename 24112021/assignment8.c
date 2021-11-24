#include<stdio.h>
#include<conio.h>


void main() {

        char name[30];
        int age;
	    double amount, n_amount, disc = 0.0;
        char type=0;

        printf("Enter name: ");
        gets(name);

        printf("Enter Purchase Amount: ");
        scanf("%lf",&amount);

        printf("Enter Type of Purchase");
        printf("'L'- Laptop or 'D'- Desktop: ");
        scanf(" %c",&type);        
        
        if (amount <= 25000)
        {
            if(type == 'L' || type == 'l')
            {
                disc = 0.0;
            }
            else{
                 disc = 5.0;
            }
        }  
        else if (amount <= 50000)
        {
            if(type == 'L' || type == 'l')
            {
                disc = 5.0 ;
            }
            else{
                 disc = 7.0;
            }
        }            
        else if (amount <= 100000)
        {
            if(type == 'L' || type == 'l')
            {
                disc = 7.5 ;
            }
            else{
                 disc = 10.0;
            }
        }
        else
        {
            if(type == 'L' || type == 'l')
            {
                disc =  10.0 ;
            }
            else{
                 disc = 15.0;
            }
        }
                       
        n_amount = amount - (disc * amount / 100);
        
        printf("Name: %s\n", name);
        printf("Net Amount: %0.3f\n", n_amount);
    }
