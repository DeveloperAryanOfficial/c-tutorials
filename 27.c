#include<stdio.h>
int main ()
{
    int a ;
    printf("Enter 0 for triangular star patter and 1 for reversed triangular star pattern\n");
    scanf("%d",&a);

    if (a==0)
    {
        for (int i = 1; i < 5; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
            
        }
        
    }
    else if(a==1){
        for (int i = 4; i < 5; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");

            if (i==0)
            {
                break;
            }
            
            
        }
    }
    else{
        printf("Enter valid number");
    }
    
return 0;
}