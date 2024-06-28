#include<stdio.h>
#include<stdlib.h>
int * functionDangling()
{
    int a = 3 ;

    return &a;
}

int main ()
{
    // Deallocation of memory block
    // returning lcoal variable in function calls 
    // variable going out of scope 



    // Case 1 : Deallocation of the memory
    int * ptr = (int *) malloc(7*sizeof(int));
    ptr[0]=15;
    ptr[1]=13;
    ptr[2]=12;
    ptr[3]=10;
    free(ptr); // Now the pointer is a dangling pointer 



    // Case 2 : function returning local variable address
    int * str = functionDangling();
    printf("%d",*str); // The pointer is a danglilng pointer 



    // Case 3 : If a variable goes out of block 
    int *dptr;
    {
        int a = 12;
        dptr = &a;
    }
    printf("The address of a is : %d",*dptr); // Here is dptr is a dangling pointer 



return 0;
}