#include<stdio.h>
int main ()
{
    int x=34;
    int * ptr=NULL;  // You cannot be dereferenced it directly.
    // If you are not passed any address to the pointer , so you can use always null pointer
    
    if (ptr!=NULL)
    {
       printf("The address of a is : %d",ptr);
    }
    else{
        printf("The pointer is a null pointer , so you can not dereferenced it ");
    }
    
return 0;
}