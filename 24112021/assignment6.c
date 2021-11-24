#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() {
        int choice;
        double l,vol,h,b;
        double rCyl,vCyl,hCyl;
        double rCone,hCone,vCone;
        printf("1. Volume of cuboid\n");
        printf("2. Volume of cylinder\n");
        printf("3. Volume of cone\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        
        switch(choice) 
		{
            case 1:
                printf("Enter length of cuboid: ");
                scanf("%lf",&l);
                printf("Enter breadth of cuboid: ");
                scanf("%lf",&b);
                printf("Enter height of cuboid: ");
                scanf("%lf",&h);
                
                vol = l * b * h;
                printf("Volume of cuboid = %lf \n", vol);
                break;
                
            case 2:
                printf("Enter radius of cylinder: ");
                scanf("%lf",&rCyl);

                printf("Enter height of cylinder: ");
                scanf("%lf",&hCyl);
                
                vCyl = (22 / 7.0) * pow(rCyl, 2) * hCyl;
                printf("Volume of cylinder = %lf \n", vCyl);
                break;
                
            case 3:
                printf("Enter radius of cone: ");
                scanf("%lf",&rCone);
                
                printf("Enter height of cone: ");
                scanf("%lf",&hCone);

                vCone = (1 / 3.0) * (22 / 7.0) * pow(rCone, 2) * hCone;
                printf("Volume of cone =  %lf \n", vCone);
                break;
                
            default:
                printf("Wrong choice!");
        }
    }
