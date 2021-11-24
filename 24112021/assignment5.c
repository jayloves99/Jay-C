#include<stdio.h>
#include<conio.h>

void main() 
{
        double fahren = 0.0, centi = 0.0;
        int choice;
        printf("Press 1. Fahrenheit to Celsius\n");
        printf("Press 2. Celsius to Fahrenheit\n");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%lf",&fahren);
                centi = 5 / 9.0 * (fahren - 32);
                printf("Temperature in Celsius: %lf \n", centi);
                break;

            case 2:
                printf("Enter temperature in Celsius: ");
                scanf("%lf",&centi);
                fahren = (centi * 1.8 )+ 32;
                printf("Temperature in Fahrenheit: %lf\n", fahren);
                break;

            default:
                printf("Wrong Choice\n");
                break;
        }
    }
