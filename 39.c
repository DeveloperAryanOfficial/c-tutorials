#include<stdio.h>
#include<stdlib.h>

int main ()
{

    // Use of malloc memory allocatin 
    // int * ptr;
    // int n;
    // printf("Enter the size of the array \n");
    // scanf("%d",&n);

    // ptr = (int *) malloc(n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array \n",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of this array is : %d \n",i,ptr[i]);
        
    // }


    // Use of calloc  contiguous allocaiton
    int * ptr;
    int n;
    printf("Enter the size of the array \n");
    scanf("%d",&n);

    ptr = (int *) calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array \n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is : %d \n",i,ptr[i]);
        
    }



    // Use of realloc  reallocation
    
    printf("Enter the new size of the array \n");
    scanf("%d",&n);

    ptr = (int *) realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of the new array \n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the new array is : %d \n",i,ptr[i]);
        
    }


    free(ptr);
    
    
return 0;
}