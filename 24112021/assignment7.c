#include<stdio.h>
#include<conio.h>
#include <stdbool.h>

void main() {
        int choice;
        double amount;
        bool flag = true;
        printf("1. Ground floor\n");
        printf("2. First floor\n");
        printf("3. Second floor\n");
        printf("4. Third floor\n");

        printf("Select a floor: ");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                printf("Kids Wear\n");
                break;
            case 2:
                printf("Ladies Wear\n");
                break;
            case 3:
                printf("Designer Sarees\n");
                break;
            case 4:
                printf("Men's Wear\n");
                break;
            default:
                flag = false;
                printf("Incorrect Floor\n");
                break;
        }

        if (flag==true) {
            printf("Enter bill amount: ");
            scanf("%lf",&amount);

            printf("Name of the Shop: City Mart\n");
            printf("Total Amount: %0.2f \n", amount);
            printf("Visit Again!!");
        }
    }
