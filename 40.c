#include <stdio.h>
#include <stdlib.h>

int main2()
{
    int chars , i=0;
    char * ptr;
    
    while (i<3)
    {
        printf("\nEmployee %d : Enter the number of characters in your employee ID.\n",i+1);
        scanf("%d",&chars);
        ptr = (char *) malloc(chars+1*sizeof(char));
        printf("Enter your employee ID : ");
        scanf("%s",ptr);
        printf("\nEmployee ID of : %d employee is %s",i+1,ptr);
        free(ptr);
        i++;
    }

    // using getchar() function if you are using multiple scanf() function line by line because it can store your enter press 
    



    return 0;
}