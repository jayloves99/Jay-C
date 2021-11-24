#include<stdio.h>
#include<conio.h>


void main() {

        char name[30];
        int age;
	    double amount, netamount, disc = 0.0;
        char type;

        printf("Enter name: ");
        scanf("%s",&name);

        printf("Enter Purchase Amount: ");
        scanf("%lf",&amount);

        printf("Enter Type of Purchase\n");
        printf("'L'- Laptop or 'D'- Desktop: ");
        scanf("%c",&type);        
        
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
                       
        netamount = amount - (disc * amount / 100);
        
        printf("Name: %s\n", name);
        printf("Net Amount: %0.3f\n" + netamount);
    }