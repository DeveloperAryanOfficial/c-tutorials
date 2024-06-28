#include<stdio.h>
int main ()
{
    int a;
    char choice;

    while (1)
    {
        printf("A. KiloMeters to Miles \nB. Inches to Foot \nC. CentiMeters to Inches \nD. Pounds to KiloGrams \nE. Inches to Meters \nF. Dollar to Rupees \nEnter the character between A to F : ");
        scanf(" %c",&choice);
        printf("\n");
        
        
        switch (choice)
        {
        case 'A':
            printf("Enter the value in KiloMeter : ");
            scanf("%d",&a);
            printf("\n");
            printf("%d KiloMeter = %f Miles",a,a*0.621);
            printf("\n");
            printf("\n");
            break;
        case 'B':
            printf("Enter the value in Inches : ");
            scanf("%d",&a);
            printf("\n");
            printf("%d Inches = %f Foot",a,a*0.0833);
            printf("\n");
            printf("\n");
            break;
        case 'C':
            printf("Enter the value in CentiMeters : ");
            scanf("%d",&a);
            printf("\n");
            printf("%d CentiMeters = %f Inches",a,a*0.394);  
            printf("\n");          
            printf("\n");          
            break;
        case 'D':
            printf("Enter the value in Pounds : ");
            scanf("%d",&a);
            printf("\n");
            printf("%d Pounds = %f Kilograms",a,a*0.454);
            printf("\n");
            printf("\n");
            break;
        case 'E':
            printf("Enter the value in Inches : ");
            scanf("%d",&a);
            printf("\n");
            printf("%d Inches = %f Meters",a,a*0.0254);
            printf("\n");
            printf("\n");
            break;
        case 'F':
            printf("Enter the currency in Dollar : ");
            scanf("%d",&a);
            printf("\n");
            printf("%d Dollar = %d Rupees",a,a*83);
            printf("\n");
            printf("\n");
            break;
        case 'q':
        printf("Quitting the app .........");
        goto end;
        
        default:
            printf("Enter the valid Letter between A to F");
            printf("\n");
            break;
        }
    }
    end:
     
return 0;
}