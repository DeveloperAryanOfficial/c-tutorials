#include<stdio.h>
#include<conio.h>
int main ()
{
    
    
    // label:

    // printf("hello everyone");
    // goto correct;

    // goto label;

    // correct:
    // printf("You are the winner");
    

    for (int i = 0; i < 11; i++)
    {
        printf("%d",i);
        if (i==5)
        {
            goto end;
        }
        
        printf("\n");
    }

    end:
    printf("\nOver the program forcefully");
    
    
return 0;
}