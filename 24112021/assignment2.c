#include<stdio.h>
#include<conio.h>


void main() {
        
        double total, interest = 0.0;
        int days;
        printf("Enter total money: ");
        scanf("%lf",&total);
        printf("Enter number of days: ");
        scanf("%d",&days);
        
        if (days <= 180)
        {
        	interest = total * 5.5 / 100.0;
		}            
        else if (days <= 364)
        {
        	interest = total * 7.5 / 100.0;
		}            
        else if (days == 365)
        {
        	interest = total * 9.0 / 100.0;
		}            
        else
        {
        	interest = total * 8.5 / 100.0;
		}
        
		printf("Maturity Amount = %0.2f", (interest + total));
    }
